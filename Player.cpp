#include "Player.h"
#include "ASCII_images.h"
#include <ncurses.h>

Player::Player()
{
    zeroX = (getmaxx(stdscr) - bordersWidth) / 2;
    zeroY = (getmaxy(stdscr) - bordersHeight) / 2; 

    lyricsBox = newwin(lyricsHeight, lyricsWidth, lyricsBoxY + zeroY, lyricsBoxX + zeroX);
    creatorsBox = newwin(creatorsHeight, creatorsWidth, creatorsBoxY + zeroY, creatorsBoxX + zeroX);
    ascii = newwin(asciiHeight, asciiWidth, asciiY + zeroY, asciiX + zeroX);

    start_color();
    init_pair(1, COLOR_YELLOW, COLOR_BLACK);

    wattron(lyricsBox, COLOR_PAIR(1));
    wattron(creatorsBox, COLOR_PAIR(1));
    wattron(ascii, COLOR_PAIR(1));
}

bool Player::done(void)
{
    if(songLyrics.empty() && songNotes.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Player::print(void)
{
    if(needToChangeString)
    {
        if(songLyrics.empty())
        {
            return;
        }
        currentText = songLyrics.front();
        songLyrics.pop_front();
        stringItr = currentText.text.begin();

        /*interpret empty string as a pause in printing*/
        if(currentText.text.empty())
        {
            millisecPerSymbol = std::chrono::milliseconds{currentText.duration};
            printStartTime = std::chrono::steady_clock::now();
            isPause = true;
        }
        else
        {
            if(static_cast<COMMAND>(*stringItr) == COMMAND::CHANGE_IMAGE)
            {
                printAscii(static_cast<ASCII_IMAGES>(*(stringItr + 1)));
                currentText.text.erase(stringItr, stringItr + 2);
                stringItr = currentText.text.begin();
            }
            if(static_cast<COMMAND>(*stringItr) == COMMAND::CLEAR)
            {
                clearLyricsWindow();
                currentText.text.erase(stringItr);
                stringItr = currentText.text.begin();
            }

            /*if there is no break to new line('\n')
            move cursor to the next x coordinate*/
            if(!checkNewLine())
            {
                mvwprintw(lyricsBox, rowToPrint, startPrintPosX, "%c", *stringItr);
                wrefresh(lyricsBox);
            }
            ++stringItr;

            millisecPerSymbol = std::chrono::milliseconds{currentText.duration / currentText.text.size()};
            printStartTime = std::chrono::steady_clock::now();

            isPause = false;
        }

        needToChangeString = false;
    }
    
    std::chrono::steady_clock::time_point currentTime = std::chrono::steady_clock::now();
    std::chrono::steady_clock::duration elapsed = currentTime - printStartTime;

    if(std::chrono::duration_cast<std::chrono::milliseconds>(elapsed) >= millisecPerSymbol)
    {
        if((stringItr != currentText.text.end()) && !isPause)
        {
            if(!checkNewLine())
            {
                wprintw(lyricsBox, "%c", *stringItr);
                wrefresh(lyricsBox);
            }
            ++stringItr;
            ++startPrintPosX;
            
            printStartTime = std::chrono::steady_clock::now();
        }
        else
        {
            needToChangeString = true;
        }
    }
}

void Player::sing(void)
{
    if(needToChangeNote)
    {
        noteStartTime = std::chrono::steady_clock::now();
        if(songNotes.empty())
        {
            silence();
            return;
        }
        currentNote = songNotes.front();
        songNotes.pop_front();

        playNote(currentNote.frequency);
        currentNoteDuration = std::chrono::milliseconds{currentNote.duration_ms};

        needToChangeNote = false;
    }

    std::chrono::steady_clock::time_point currentTime = std::chrono::steady_clock::now();
    std::chrono::steady_clock::duration elapsed = currentTime - noteStartTime;
    
    if(std::chrono::duration_cast<std::chrono::milliseconds>(elapsed) >= currentNoteDuration)
    {
        needToChangeNote = true;
    }
}

void Player::setSong(std::list<Note>&& s)
{
    songNotes = std::move(s);
}

void Player::setLyrics(std::list<Text>&& t)
{
    songLyrics = std::move(t);
}

void Player::printBorders(void)
{
    wborder(lyricsBox, (int)'|', (int)'|', (int)'-', (int)'-',
             (int)' ', (int)' ', (int)' ', (int)' ');
    wborder(creatorsBox, (int)'|', (int)'|', (int)'-', (int)'-',
             (int)' ', (int)' ', (int)' ', (int)' ');

    mvwprintw(creatorsBox, 2, 15, "%s", "PORTAL - STILL ALIVE");
    mvwprintw(creatorsBox, 4, 11, "%s", "Played by motherboard buzzer");
    mvwprintw(creatorsBox, 13, 2, "%s", "The code was written by CATDIMA");
    mvwprintw(creatorsBox, 14, 2, "%s", "on 02/09/2024");
    wrefresh(lyricsBox);
    wrefresh(creatorsBox);
}

bool Player::checkNewLine(void)
{
    if(*stringItr == '\n')
    {
        ++rowToPrint;
        startPrintPosX = 2;
        return true;
    }
    else
    {
        return false;
    }
}

void Player::clearLyricsWindow(void)
{
    werase(lyricsBox);
    wborder(lyricsBox, (int)'|', (int)'|', (int)'-', (int)'-',
     (int)' ', (int)' ', (int)' ', (int)' ');
    wrefresh(lyricsBox);
    rowToPrint = 1;
}

void Player::printAscii(ASCII_IMAGES img)
{
    werase(ascii);
    switch (img)
    {
    case ASCII_IMAGES::APERTURE:
        for(auto itr : aperture)
        {
            wprintw(ascii, "%s", itr.c_str());
        }
        break;
    case ASCII_IMAGES::RADIATION:
        for(auto itr : radiation)
        {
            wprintw(ascii, "%s", itr.c_str());
        }
        break;
    case ASCII_IMAGES::ATOM:
        for(auto itr : atom)
        {
            wprintw(ascii, "%s", itr.c_str());
        }
        break;
    case ASCII_IMAGES::HEART:
        for(auto itr : heart)
        {
            wprintw(ascii, "%s", itr.c_str());
        }
        break;
    case ASCII_IMAGES::EXPLOSION:
        for(auto itr : explosion)
        {
            wprintw(ascii, "%s", itr.c_str());
        }
        break;
    case ASCII_IMAGES::FIRE:
        for(auto itr : fire)
        {
            wprintw(ascii, "%s", itr.c_str());
        }
        break;
    case ASCII_IMAGES::CHECK:
        for(auto itr : check)
        {
            wprintw(ascii, "%s", itr.c_str());
        }
        break;
    case ASCII_IMAGES::BLACKMESA:
        for(auto itr : blackMesa)
        {
            wprintw(ascii, "%s", itr.c_str());
        }
        break;
    case ASCII_IMAGES::CAKE:
        for(auto itr : cake)
        {
            wprintw(ascii, "%s", itr.c_str());
        }
        break;
    case ASCII_IMAGES::GLADOS:
    for(auto itr : GLaDOS)
        {
            wprintw(ascii, "%s", itr.c_str());
        }
        break;
    default:
        break;
    }

    wrefresh(ascii);
}

