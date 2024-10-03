/*
This file is part of still-alive.

still-alive is free software: you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the Free Software Foundation,
either version 3 of the License

still-alive is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU General Public License for more details.
*/

#ifndef _SONG_H
#define _SONG_H

#include <list>
#include <string>
#include "notes_defenitions.h"

/*here you can find text and notes*/
/*it took a lot of time...*/

/*commands
  they can be send to printer via lyrics strings
  usage:
  * to set an image
    std::string{(int)COMMAND::CHANGE_IMAGE} + std::string{(int)ASCII_IMAGE} + lyrics string
  * to clear the displayed lyrics
    std::string{(int)COMMAND::CLEAR} + new lyrics string */
enum class COMMAND
{
    CHANGE_IMAGE,
    CLEAR
};

/*
enum class for ascii-art you can find int ASCII_imanges.h
*/

struct Text
{
    Text(){}
    Text(std::string text, int duration) : duration(duration), text(text)
    {}

    /*text - text string to print
      duration - for what time in ms it have to be printed  */
    int duration = 0;
    std::string text = "";
};

static std::list<Text> lyrics
{
    Text(" Forms FORM-29827281-12:\n", note2_ms),
    Text("Test Assessment Report\n\n", note2_ms),
    Text("This was a triumph.\n", 4 * note8_ms + note4_ms),
    Text("", note4_ms+ note2_ms + note4_ms + note8_ms),
    Text("I'm making a note here:\n", 6 * note8_ms + note4_ms),
    Text("", note8_ms),
    Text("\"HUGE SUCCESS.\"\n", note4_ms + 2 * note8_ms + note2_ms),
    Text("", note4dot_ms),
    Text("It's hard to overstate\n", 5 * note8_ms + 2 * note4_ms),
    Text("my satisfaction.\n", 4 * note8_ms + note4_ms + 2 * note4dot_ms),
    Text("", note1_ms),
    Text(std::string{static_cast<int>(COMMAND::CHANGE_IMAGE)} + std::string{static_cast<int>(ASCII_IMAGES::APERTURE)}
     + "Aperture Science:\n", 3 * note4_ms), /*aperture logo*/
    Text("", note1_ms + note8_ms),
    Text("We do what we must\n", 3 * note4_ms),
    Text("because we can.\n", 3 * note4_ms + note2_ms),
    Text("", note2_ms),
    Text("For the good of all of us.\n", 6 * note8_ms + 3 * note4_ms),
    Text("Except the ones who are dead.\n\n", 8 * note8_ms),
    Text("", note2_ms),
    Text("But there's no sense crying\n", 4 * note8_ms + 2 * note4_ms),
    Text("Over every mistake.\n", 2 * note8_ms + 2 *note4_ms),
    Text("You just keep on trying\n", 4 * note8_ms + 2 * note4_ms), 
    Text("'Til you run out of cake.\n", 4 * note8_ms + 2 * note4_ms),
    Text(std::string{static_cast<int>(COMMAND::CHANGE_IMAGE)} + std::string{static_cast<int>(ASCII_IMAGES::RADIATION)}
     + "And the science gets done.\n", 7 * note8_ms),  /*radiation*/
    Text("", note8_ms),
    Text("And you make a neat gun\n", 7 * note8_ms),
    Text("", note8_ms),
    Text(std::string{static_cast<int>(COMMAND::CHANGE_IMAGE)} + std::string{static_cast<int>(ASCII_IMAGES::APERTURE)}
     + "For the people who are\n", 6 * note8_ms),   /*aperture logo*/     
    Text("Still alive.\n", 4 * note8_ms),
    Text(std::string{static_cast<int>(COMMAND::CLEAR)} + "Forms FORM-55551-5:\n", note1_ms), /*clear the lyrics window*/
    Text("Personal File Addendum:\n\n", note1_ms),
    Text("Dear <<Subject Name Here>>,\n\n", note1_ms),
    Text("", 3 * note4_ms),
    Text("I'm not even angry...\n", 4 * note8_ms + note4_ms),
    Text("", 5 * note4_ms),
    Text("I'm being so sincere right now.\n", note2_ms + note1_ms),
    Text("", 4 * note4_ms),
    Text(std::string{static_cast<int>(COMMAND::CHANGE_IMAGE)} + std::string{static_cast<int>(ASCII_IMAGES::HEART)}
     + "Even though you broke my heart,\n", 1 * note1_ms + 1 * note2_ms), /*heart*/
    Text("", 1 * note4_ms),
    Text("And killed me.\n", 2 * note4_ms),
    Text("", note4_ms + note2_ms + note4dot_ms),
    Text(std::string{static_cast<int>(COMMAND::CHANGE_IMAGE)} + std::string{static_cast<int>(ASCII_IMAGES::EXPLOSION)}
     + "And tore me to pieces.\n", 3 * note4_ms),  /*explosion*/
    Text("", 1 * note1_ms + note4dot_ms),
    Text("And threw every piece ", 2 * note8_ms + 2 * note4_ms),
    Text("", note8_ms),
    Text(" into ", note4dot_ms),
    Text("", note8_ms),
    Text(std::string{static_cast<int>(COMMAND::CHANGE_IMAGE)} + std::string{static_cast<int>(ASCII_IMAGES::FIRE)}
     + " a fire.\n", note4dot_ms), /*fire*/
    Text("", 3 * note4_ms),
    Text("As they burned it hurt because\n", note1_ms + note2_ms),
    Text(std::string{static_cast<int>(COMMAND::CHANGE_IMAGE)} + std::string{static_cast<int>(ASCII_IMAGES::CHECK)}
     + "I felt so happy for you!\n", note1_ms + note8_ms), /*check*/
    Text("Now, these points of data\n", 4 * note4_ms),
    Text("Make a beautiful line.\n", 4 * note4_ms),
    Text("And we're out of beta.\n", 4 * note4_ms),
    Text("We're releasing on time!\n", 4 * note4_ms),
    Text(std::string{static_cast<int>(COMMAND::CHANGE_IMAGE)} + std::string{static_cast<int>(ASCII_IMAGES::EXPLOSION)}
     + "So I'm GLaD I got burned!\n", 4 * note4_ms),   /*explosion*/
    Text(std::string{static_cast<int>(COMMAND::CHANGE_IMAGE)} + std::string{static_cast<int>(ASCII_IMAGES::ATOM)}
     + "Think of all the things we learned!\n", 4 * note4_ms), /*atom*/
    Text(std::string{static_cast<int>(COMMAND::CHANGE_IMAGE)} + std::string{static_cast<int>(ASCII_IMAGES::APERTURE)}
     + "For the people who are\n", 3 * note4_ms),  /*aperture*/
    Text("", note4_ms),
    Text("Still alive.\n", 2 * note4_ms),
    Text(std::string{static_cast<int>(COMMAND::CLEAR)} + "Forms FORM-55551-6:\n", note1_ms), /*clear the lyrics window*/
    Text("Personal File Addendum Addendum:\n\n", note1_ms),
    Text("One last thing:\n\n", note1_ms + note4dot_ms),
    Text("Go ahead and leave me...\n", 8 * note8_ms),
    Text("", note1_ms),
    Text("I think I'd prefer ", 3 * note4_ms),
    Text("", note8_ms),
    Text(" to stay ", 3 * note8_ms),
    Text("", note8_ms),
    Text(" inside...\n", note2_ms),
    Text("", 6 * note8_ms),
    Text("Maybe you'll find someone else\n", note1_ms + note2_ms + note8_ms),
    Text("", note8_ms),
    Text("To help you.\n", 2 * note4_ms),
    Text("", 5 * note4_ms),
    Text(std::string{static_cast<int>(COMMAND::CHANGE_IMAGE)} + std::string{static_cast<int>(ASCII_IMAGES::BLACKMESA)}
     + "Maybe Black Mesa?\n", 3 * note4_ms),   /*black mesa*/
    Text("", note1_ms + note4_ms),
    Text("THAT WAS A JOKE. ", 2 * note4_ms + note8_ms),
    Text("", 5 * note8_ms),
    Text(" FAT CHANCE.\n", note4_ms + note2_ms),
    Text("", note2_ms),
    Text(std::string{static_cast<int>(COMMAND::CHANGE_IMAGE)} + std::string{static_cast<int>(ASCII_IMAGES::CAKE)}
     + "Anyway this cake is great!\n", note1_ms + note2_ms + note8_ms),  /*cake*/
    Text("It's so delicious and moist!\n", note1_ms),
    Text("", note8_ms),
    Text(std::string{static_cast<int>(COMMAND::CHANGE_IMAGE)} + std::string{static_cast<int>(ASCII_IMAGES::GLADOS)}
     + "Look at me: still talking\n", note1_ms),   /*glados*/
    Text(std::string{static_cast<int>(COMMAND::CHANGE_IMAGE)} + std::string{static_cast<int>(ASCII_IMAGES::RADIATION)}
     + "When there's science to do!\n", note1_ms), /*radiation*/
    Text(std::string{static_cast<int>(COMMAND::CHANGE_IMAGE)} + std::string{static_cast<int>(ASCII_IMAGES::APERTURE)}
     + "When I look out there,\n", 3 * note4_ms),      /*aperure*/
    Text("It makes me glad I'm not you.\n", note1_ms),
    Text(std::string{static_cast<int>(COMMAND::CHANGE_IMAGE)} + std::string{static_cast<int>(ASCII_IMAGES::ATOM)}
     + "I've experiments to run.\n", note1_ms),    /*atom*/
    Text(std::string{static_cast<int>(COMMAND::CHANGE_IMAGE)} + std::string{static_cast<int>(ASCII_IMAGES::EXPLOSION)}
     + "There is research to be done.\n", note1_ms),   /*explosion*/
    Text(std::string{static_cast<int>(COMMAND::CHANGE_IMAGE)} + std::string{static_cast<int>(ASCII_IMAGES::APERTURE)}
     + "On the people who are\n", note1_ms),   /*aperture*/
    Text("", note4_ms),
    Text("Still alive.\n", 2 * note4_ms),
    Text("", note2_ms),
    Text(std::string{static_cast<int>(COMMAND::CLEAR)} + "PS: ", 1 * note4_ms),
    Text(" And believe me I am\n", 3 * note4_ms), /*clear the lyrics window*/
    Text("Still alive.\n", 2 * note4_ms),
    Text("PPS: ", 2 * note4_ms),
    Text(" I'm doing science and I'm\n", note1_ms),
    Text("Still alive.\n", 2 * note4_ms),
    Text("PPPS: ", 2 * note4_ms),
    Text(" I feel FANTASTIC and I'm\n", note1_ms),
    Text("Still alive.\n\n", 2 * note4_ms),
    Text("FINAL THOUGHT:\n", note2_ms + note4_ms),
    Text("While you're dying I'll be\n", 3 * note4_ms),
    Text("Still alive.\n\n", 2 * note4_ms),
    Text("FINAL THOUGHT PS:\n", note2_ms),
    Text("And when you're dead I will be\n", note1_ms),
    Text("Still alive\n\n", 2 * note4_ms),
    Text("", 5 * note8_ms),
    Text("Still alive\n\n", 3 * note8_ms),
    Text("", 5 * note8_ms),
    Text("STILL ALIVE\n", 3 * note8_ms),
    Text("", 0)
};

/*these notes were taken from here:
  https://musescore.com/user/12125/scores/21060*/
static std::list<Note> notes
{
    /*0----------------*/
    Note(0, note2_ms),
    /*1----------------*/
    Note(0, note2_ms),  
    Note(G5, note8_ms), 
    Note(Fd5, note8_ms),
    Note(E5, note8_ms),
    Note(E5, note8_ms),
    /*2----------------*/
    Note(Fd5, note4_ms),
    Note(0, note4_ms), 
    Note(0, note2_ms),
    /*3----------------*/
    Note(0, note4_ms),
    Note(0, note8_ms),
    Note(A4, note8_ms),
    Note(G5, note8_ms),
    Note(Fd5, note8_ms),
    Note(E5, note8_ms),
    Note(E5, note8_ms),
    /*4----------------*/
    Note(E5, note8_ms),
    Note(Fd5, note4dot_ms),
    Note(D5, note4_ms),
    Note(E5, note8_ms),
    Note(A4, note8_ms),
    /*5----------------*/
    Note(A4, note2_ms),
    Note(0, note4dot_ms),
    Note(A4, note8_ms),
    /*6----------------*/
    Note(E5, note4_ms),
    Note(Fd5, note8_ms),
    Note(G5, note8_ms),
    Note(G5, note4_ms),
    Note(E5, note8_ms),
    Note(Cd5, note8_ms),
    /*7----------------*/
    Note(Cd5, note8_ms),
    Note(D5, note4dot_ms),
    Note(E5, note4_ms),
    Note(A4, note8_ms),
    Note(A4, note8_ms),
    /*8----------------*/
    Note(A4, note8_ms),
    Note(Fd5, note4dot_ms),
    Note(0, note2_ms),
    /*9----------------*/
    Note(0, note2_ms),  
    Note(G5, note8_ms), 
    Note(Fd5, note8_ms),
    Note(E5, note8_ms),
    Note(E5, note8_ms),
    /*10---------------*/
    Note(Fd5, note4_ms), 
    Note(0, note4_ms),
    Note(0, note2_ms),
    /*11---------------*/
    Note(0, note4_ms),
    Note(0, note8_ms),
    Note(A4, note8_ms),
    Note(G5, note8_ms),
    Note(Fd5, note8_ms),
    Note(E5, note8_ms),
    Note(E5, note8_ms),
    /*12---------------*/
    Note(E5, note4_ms),
    Note(Fd5, note8_ms),
    Note(D5, note8_ms),
    Note(D5, note4_ms),
    Note(E5, note8_ms),
    Note(A4, note8_ms),
    /*13---------------*/
    Note(A4, note2_ms),
    Note(0, note2_ms),
    /*14---------------*/
    Note(E5, note4_ms), 
    Note(Fd5, note8_ms),
    Note(G5, note8_ms),
    Note(G5, note4_ms),
    Note(E5, note8_ms),
    Note(Cd5, note8_ms),
    /*15---------------*/
    Note(Cd5, note4_ms),
    Note(D5, note8_ms),
    Note(E5, note8_ms),
    Note(E5, note8_ms),
    Note(A4, note8_ms),
    Note(D5, note8_ms),
    Note(E5, note8_ms),
    /*16---------------*/
    Note(F5, note8_ms),
    Note(E5, note8_ms),
    Note(D5, note8_ms),
    Note(C5, note8_ms),
    Note(0, note4_ms),
    Note(A4, note8_ms),
    Note(Ad4, note8_ms),
    /*17---------------*/
    Note(C5, note4_ms),
    Note(F5, note4_ms),
    Note(E5, note8_ms),
    Note(D5, note8_ms),
    Note(D5, note8_ms),
    Note(C5, note8_ms),
    /*18---------------*/
    Note(D5, note8_ms),
    Note(C5, note8_ms),
    Note(C5, note4_ms),
    Note(C5, note4_ms),
    Note(A4, note8_ms),
    Note(Ad4, note8_ms),
    /*19---------------*/
    Note(C5, note4_ms),
    Note(F5, note4_ms),
    Note(G5, note8_ms),
    Note(F5, note8_ms),
    Note(E5, note8_ms),
    Note(D5, note8_ms),
    /*20---------------*/
    Note(D5, note8_ms),
    Note(E5, note8_ms),
    Note(F5, note4_ms),
    Note(F5, note4_ms),
    Note(G5, note8_ms),
    Note(A5, note8_ms),
    /*21---------------*/
    Note(Ad5, note8_ms),
    Note(Ad5, note8_ms),
    Note(A5, note4_ms),
    Note(G5, note4_ms),
    Note(F5, note8_ms),
    Note(G5, note8_ms),
    /*22---------------*/
    Note(A5, note8_ms),
    Note(A5, note8_ms),
    Note(G5, note4_ms),
    Note(F5, note4_ms),
    Note(D5, note8_ms),
    Note(C5, note8_ms),
    /*23---------------*/
    Note(D5, note8_ms),
    Note(F5, note8_ms),
    Note(F5, note8_ms),
    Note(E5, note8_ms),
    Note(E5, note4_ms),
    Note(G5, note8_ms),
    Note(G5, note8_ms),
    /*24---------------*/
    Note(0, note1_ms),
    /*25---------------*/
    Note(0, note1_ms),
    /*26---------------*/
    Note(0, note1_ms),
    /*27---------------*/
    Note(0, note2_ms),
    Note(G5, note8_ms),
    Note(F5, note8_ms),
    Note(E5, note8_ms),
    Note(E5, note8_ms),
    /*28---------------*/
    Note(E5, note8_ms),
    Note(F5, note8_ms),
    Note(0, note4_ms),
    Note(0, note4_ms),
    Note(0, note4_ms),
    /*29---------------*/
    Note(0, note2_ms),
    Note(G5, note8_ms),
    Note(Fd5, note8_ms),
    Note(E5, note8_ms),
    Note(E5, note8_ms),
    /*30---------------*/
    Note(E5, note4_ms),
    Note(Fd5, note8_ms),
    Note(D5, note8_ms),
    Note(D5, note8_ms),
    Note(E5, note4_ms),
    Note(A4, note8_ms),
    /*31---------------*/
    Note(0, note1_ms),
    /*32---------------*/
    Note(E5, note4_ms),
    Note(Fd5, note8_ms),
    Note(G5, note8_ms),
    Note(G5, note4_ms),
    Note(E5, note4_ms),
    /*33---------------*/
    Note(Cd5, note4_ms),
    Note(D5, note8_ms),
    Note(E5, note8_ms),
    Note(E5, note4_ms),
    Note(A4, note8_ms),
    Note(A4, note8_ms),
    /*34---------------*/
    Note(A4, note8_ms),
    Note(Fd5, note8_ms),
    Note(0, note4_ms),
    Note(0, note2_ms),
    /*35---------------*/
    Note(0, note4dot_ms),
    Note(A4, note8_ms),
    Note(G5, note8_ms),
    Note(Fd5, note8_ms),
    Note(E5, note8_ms),
    Note(E5, note8_ms),
    /*36---------------*/
    Note(0, note1_ms),
    /*37---------------*/
    Note(0, note4dot_ms),
    Note(A4, note8_ms),
    Note(G5, note8_ms),
    Note(Fd5, note8_ms),
    Note(E5, note8_ms),
    Note(E5, note8_ms),
    /*38---------------*/
    Note(E5, note4_ms),
    Note(Fd5, note8_ms),
    Note(D5, note8_ms),
    Note(D5, note4_ms),
    Note(E5, note8_ms),
    Note(A4, note8_ms),
    /*39---------------*/
    Note(A4, note4_ms),
    Note(0, note4_ms),
    Note(0, note2_ms),
    /*40---------------*/
    Note(E5, note4_ms),
    Note(Fd5, note8_ms),
    Note(Fd5, note8_ms),
    Note(G5, note4_ms),
    Note(E5, note4_ms),
    /*41---------------*/
    Note(Cd5, note4_ms),
    Note(D5, note8_ms),
    Note(E5, note8_ms),
    Note(E5, note8_ms),
    Note(A4, note8_ms),
    Note(D5, note8_ms),
    Note(E5, note8_ms),
    /*42---------------*/
    Note(F5, note8_ms),
    Note(E5, note8_ms),
    Note(D5, note8_ms),
    Note(C5, note8_ms),
    Note(B4, note8_ms),
    Note(0, note8_ms),
    Note(A4, note8_ms),
    Note(Ad4, note8_ms),
    /*43---------------*/
    Note(C5, note4_ms),
    Note(F5, note4_ms),
    Note(E5, note8_ms),
    Note(D5, note8_ms),
    Note(D5, note8_ms),
    Note(C5, note8_ms),
    /*44---------------*/
    Note(D5, note8_ms),
    Note(C5, note8_ms),
    Note(C5, note4_ms),
    Note(C5, note4_ms),
    Note(A4, note8_ms),
    Note(Ad4, note8_ms),
    /*45---------------*/
    Note(C5, note4_ms),
    Note(F5, note4_ms),
    Note(G5, note8_ms),
    Note(F5, note8_ms),
    Note(E5, note8_ms),
    Note(D5, note8_ms),
    /*46---------------*/
    Note(D5, note8_ms),
    Note(E5, note8_ms),
    Note(F5, note4_ms),
    Note(F5, note4_ms),
    Note(G5, note8_ms),
    Note(A5, note8_ms),
    /*47---------------*/
    Note(Ad5, note8_ms),
    Note(Ad5, note8_ms),
    Note(A5, note4_ms),
    Note(G5, note4_ms),
    Note(F5, note8_ms),
    Note(G5, note8_ms),
    /*48---------------*/
    Note(A5, note8_ms),
    Note(A5, note8_ms),
    Note(G5, note8_ms),
    Note(F5, note8_ms),
    Note(F5, note4_ms),
    Note(D5, note8_ms),
    Note(C5, note8_ms),
    /*49---------------*/
    Note(D5, note8_ms),
    Note(F5, note8_ms),
    Note(F5, note8_ms),
    Note(E5, note8_ms),
    Note(0, note8_ms),
    Note(E5, note8_ms),
    Note(G5, note8_ms),
    Note(G5, note8_ms),
    /*50---------------*/
    Note(0, note1_ms),
    /*51---------------*/
    Note(0, note1_ms),
    /*52---------------*/
    Note(0, note1_ms),
    /*53---------------*/
    Note(0, note4dot_ms),
    Note(A4, note8_ms),
    Note(G5, note8_ms),
    Note(Fd5, note8_ms),
    Note(E5, note8_ms),
    Note(E5, note8_ms),
    /*54---------------*/
    Note(E5, note8_ms),
    Note(Fd5, note4dot_ms),
    Note(0, note2_ms),
    /*55---------------*/
    Note(0, note4dot_ms),
    Note(A4, note8_ms),
    Note(G5, note8_ms),
    Note(Fd5, note8_ms),
    Note(E5, note8_ms),
    Note(E5, note8_ms),
    /*56---------------*/
    Note(E5, note4_ms),
    Note(Fd5, note8_ms),
    Note(D5, note8_ms),
    Note(D5, note4_ms),
    Note(E5, note8_ms),
    Note(A4, note8_ms),
    /*57---------------*/
    Note(A4, note2_ms),
    Note(0, note2_ms),
    /*58---------------*/
    Note(E5, note4_ms),
    Note(Fd5, note8_ms),
    Note(G5, note8_ms),
    Note(G5, note4_ms),
    Note(E5, note4_ms),
    /*59---------------*/
    Note(Cd5, note4_ms),
    Note(D5, note8_ms),
    Note(E5, note8_ms),
    Note(E5, note4_ms),
    Note(A4, note8_ms),
    Note(A4, note8_ms),
    /*60---------------*/
    Note(A4, note8_ms),
    Note(Fd5, note4dot_ms),
    Note(0, note2_ms),
    /*61---------------*/
    Note(0, note2_ms),
    Note(B5, note8_ms),
    Note(A5, note8_ms),
    Note(G5, note8_ms),
    Note(G5, note8_ms),
    /*62---------------*/
    Note(G5, note8_ms),
    Note(A5, note4dot_ms),
    Note(0, note2_ms),
    /*63---------------*/
    Note(0, note2_ms),
    Note(B5, note8_ms),
    Note(A5, note8_ms),
    Note(G5, note8_ms),
    Note(G5, note8_ms),
    /*64---------------*/
    Note(G5, note4_ms),
    Note(A5, note8_ms),
    Note(Fd5, note8_ms),
    Note(Fd5, note4_ms),
    Note(G5, note8_ms),
    Note(D5, note8_ms),
    /*65---------------*/
    Note(D5, note2_ms),
    Note(0, note2_ms),
    /*66---------------*/
    Note(G5, note4_ms),
    Note(A5, note8_ms),
    Note(B5, note8_ms),
    Note(B5, note4_ms),
    Note(G5, note4_ms),
    /*67---------------*/
    Note(E5, note4_ms),
    Note(Fd5, note8_ms),
    Note(G5, note8_ms),
    Note(G5, note8_ms),
    Note(A5, note8_ms),
    Note(D6, note8_ms),
    Note(E6, note8_ms),
    /*68---------------*/
    Note(F6, note8_ms),
    Note(E6, note8_ms),
    Note(D6, note8_ms),
    Note(C6, note8_ms),
    Note(C6, note4_ms),
    Note(A4, note8_ms),
    Note(Ad4, note8_ms),
    /*69---------------*/
    Note(D5, note4_ms),
    Note(F5, note4_ms),
    Note(E5, note8_ms),
    Note(D5, note8_ms),
    Note(D5, note8_ms),
    Note(C5, note8_ms),
    /*70---------------*/
    Note(D5, note8_ms),
    Note(C5, note8_ms),
    Note(C5, note4_ms),
    Note(C5, note4_ms),
    Note(A4, note8_ms),
    Note(Ad4, note8_ms),
    /*71---------------*/
    Note(C5, note4_ms),
    Note(F5, note4_ms),
    Note(G5, note8_ms),
    Note(F5, note8_ms),
    Note(E5, note8_ms),
    Note(D5, note8_ms),
    /*72---------------*/
    Note(D5, note8_ms),
    Note(E5, note8_ms),
    Note(F5, note4_ms),
    Note(F5, note4_ms),
    Note(G5, note8_ms),
    Note(A5, note8_ms),
    /*73---------------*/
    Note(Ad5, note8_ms),
    Note(Ad5, note8_ms),
    Note(A5, note8_ms),
    Note(G5, note8_ms),
    Note(G5, note4_ms),
    Note(F5, note8_ms),
    Note(G5, note8_ms),
    /*74---------------*/
    Note(A5, note8_ms),
    Note(A5, note8_ms),
    Note(G5, note8_ms),
    Note(F5, note8_ms),
    Note(F5, note4_ms),
    Note(D5, note8_ms),
    Note(C5, note8_ms),
    /*75---------------*/
    Note(D5, note8_ms),
    Note(F5, note8_ms),
    Note(F5, note8_ms),
    Note(E5, note8_ms),
    Note(0, note8_ms),
    Note(E5, note8_ms),
    Note(G5, note8_ms),
    Note(G5, note8_ms),
    /*76---------------*/
    Note(G5, note2_ms),
    Note(0, note4_ms),
    Note(A5, note8_ms),
    Note(A5, note16_ms),
    Note(B5, note16_ms),
    /*77---------------*/
    Note(B5, note8_ms),
    Note(A5, note8_ms),
    Note(Fd5, note8_ms),
    Note(D5, note8_ms),
    Note(D5, note8_ms),
    Note(E5, note8_ms),
    Note(Fd5, note8_ms),
    Note(Fd5, note8_ms),
    /*78---------------*/
    Note(Fd5, note4_ms),
    Note(0, note4_ms),
    Note(0, note8_ms),
    Note(A5, note8_ms),
    Note(A5, note8_ms),
    Note(A5, note8_ms),
    /*79---------------*/
    Note(B5, note8_ms),
    Note(A5, note8_ms),
    Note(Fd5, note8_ms),
    Note(D5, note8_ms),
    Note(D5, note8_ms),
    Note(E5, note8_ms),
    Note(Fd5, note8_ms),
    Note(Fd5, note8_ms),
    /*80---------------*/
    Note(Fd5, note4_ms),
    Note(0, note4_ms),
    Note(0, note8_ms),
    Note(A5, note8_ms),
    Note(A5, note8_ms),
    Note(A5, note8_ms),
    /*81---------------*/
    Note(B5, note8_ms),
    Note(A5, note8_ms),
    Note(Fd5, note8_ms),
    Note(D5, note8_ms),
    Note(D5, note8_ms),
    Note(E5, note8_ms),
    Note(Fd5, note8_ms),
    Note(Fd5, note8_ms),
    /*82---------------*/
    Note(Fd5, note4_ms),
    Note(0, note2_ms),
    Note(A5, note8_ms),
    Note(A5, note8_ms),
    /*83---------------*/
    Note(B5, note8_ms),
    Note(A5, note8_ms),
    Note(Fd5, note8_ms),
    Note(D5, note8_ms),
    Note(D5, note8_ms),
    Note(E5, note8_ms),
    Note(Fd5, note8_ms),
    Note(Fd5, note8_ms),
    /*84---------------*/
    Note(Fd5, note4_ms),
    Note(0, note4_ms),
    Note(0, note8_ms),
    Note(A5, note8_ms),
    Note(A5, note8_ms),
    Note(A5, note8_ms),
    /*85---------------*/
    Note(B5, note8_ms),
    Note(A5, note8_ms),
    Note(Fd5, note8_ms),
    Note(D5, note8_ms),
    Note(D5, note8_ms),
    Note(E5, note8_ms),
    Note(Fd5, note8_ms),
    Note(Fd5, note8_ms),
    /*86---------------*/
    Note(0, note2_ms),
    Note(0, note8_ms),
    Note(G6, note8_ms),
    Note(A6, note8_ms),
    Note(A6, note8_ms),
    /*87---------------*/
    Note(A6, note4_ms),
    Note(0, note4_ms),
    Note(0, note8_ms),
    Note(G6, note8_ms),
    Note(Fd6, note8_ms),
    Note(Fd6, note8_ms),
    /*88---------------*/
    Note(Fd6, note4_ms),
    Note(0, 2 * note1_ms)
};

#endif