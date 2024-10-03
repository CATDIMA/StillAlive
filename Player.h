/*
This file is part of still-alive.

still-alive is free software: you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the Free Software Foundation,
either version 3 of the License

still-alive is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU General Public License for more details.
*/

#ifndef _PLAYER_H
#define _PLAYER_H

#include <chrono>
#include <list>
#include <ncurses.h>
#include "ASCII_images.h"
#include "notes_defenitions.h"
#include "song.h"

class Player
{
public:
    Player();

    bool done(void);
    void print(void);
    void sing(void);
    void setSong(std::list<Note>&&);
    void setLyrics(std::list<Text>&&);
    void printBorders(void);
private:
    bool needToChangeNote = true;
    bool needToChangeString =true;
    bool isPause = false;
    int zeroX = 0;
    int zeroY = 0;
    int rowToPrint = 1;
    int startPrintPosX = 2;

    WINDOW* lyricsBox = nullptr;
    WINDOW* ascii = nullptr;
    WINDOW* creatorsBox = nullptr;

    std::list<Note> songNotes;
    Note currentNote;
    std::chrono::steady_clock::time_point noteStartTime;
    std::chrono::milliseconds currentNoteDuration;

    std::list<Text> songLyrics;
    Text currentText;
    std::chrono::steady_clock::time_point printStartTime;
    std::chrono::milliseconds millisecPerSymbol;
    std::string::iterator stringItr;

    /*auxiliary functions*/
    void clearLyricsWindow(void);
    void printAscii(ASCII_IMAGES);
    bool checkNewLine(void);
};

#endif