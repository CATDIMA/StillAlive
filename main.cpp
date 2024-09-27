#include <iostream>
#include <ncurses.h>
#include <exception>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
#include <argp.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "Player.h"
#include "notes_defenitions.h"

/*argp global variables*/
const char* argp_program_version = "version 1.0";
const char* argp_program_bug_address = "tg: @nullptrHasBeenReturned";

/*argp stuff begin*/
static const char argp_doc[] = "Play Portal ending song \"Still Alive\""
" by motherboard buzzer and show lyrics with some ascii-art. Also it can power off PC. "
"You MUST run this program only in linux tty console otherwise it won't work properly";

static struct argp_option options[] = 
{
    {"poweroff", 'p', 0, 0, "Shuts down the computer. You have to have superuser privelieges to use this "
                            "otherwise computer won't be turned off"},
    {0}
};

static error_t parse_opt(int key, char *arg, argp_state *state)
{
    bool* shutdown = reinterpret_cast<bool*>(state->input);
    static int argCount = 1;

    switch(key)
    {
        case 'p':
            *shutdown = true;
            --argCount;
            break;
        case ARGP_KEY_END:
            if(argCount < 0)
            {
                argp_failure(state, 1, 0, "too many arguments");
                argp_usage(state);
            }
            break;
    }

    return 0;
}
/*argp stuff end*/

/*here terminal attributes are stored*/
struct termios Original_Termios;

/*
    custom terminate function
    which will mute the speaker if it's playing sound
    and restore terminal attributes (ncurses(?) affects them without proper closing)
*/
static void terminate(void)
{
    silence();
    system("clear");
    tcsetattr(STDIN_FILENO, TCSANOW, &Original_Termios);
}

/*custom SIGINT handler calls void terminate*/
static void sigintHandler(int sig)
{
    terminate();
    std::exit(sig);
}

int main(int argc, char** argv)
{
    /*start argp*/
    bool shutdown = false;
    struct argp argp = {options, parse_opt, argp_doc, 0};
    argp_parse(&argp, argc, argv, 0, 0, &shutdown);
    /*save terminal attributes in case of program termination*/
    tcgetattr(STDIN_FILENO, &Original_Termios);
    /*set custom terminate function*/
    std::set_terminate([]()
    {
        terminate();
        std::abort();
    });

    /*call custom sigint handler when SIGINT received*/
    signal(SIGINT, sigintHandler);
    
    //inits the screen
    //sets up memory and clear the screen
    initscr();

    /*check for root privelieges*/
    bool usrHasPriv = false;

    /*check if EUID is root*/
    if(geteuid() == 0)
    {
        usrHasPriv = true;
    }

    Player player;
    /*Set a song to play*/
    player.setSong(std::move(notes));
    player.setLyrics(std::move(lyrics));

    player.printBorders();

    /*main loop*/
    while(!player.done())
    {
        player.sing();
        player.print();
    }
    /*stops the sound*/
    silence();

    /*deallocates memory*/
    endwin();

    if(usrHasPriv &&shutdown)
    {
        system("poweroff");
    }

    return 0;
}