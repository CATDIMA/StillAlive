# Portal - Still Alive

## Make your computer print you the lyrics and sing the ending song from Portal game!

![add gif or image here](https://i.giphy.com/media/v1.Y2lkPTc5MGI3NjExcTNxc2JvdDhiYTZnNjV1eWJqZXIzMmhpZG03anY2cDlrOTA5M2hpayZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/XRSA37nmK72HU5hNPp/giphy.gif)

*sorry for gif quality T_T*

___

## Description
This program will play a song from Portal closing credits and prints its lyrics with some ascii-art on your linux machine. The program was developed for Debian and its forks such as Ubuntu, Mint and etc. (program wasn't tested on these distros) Your PC have to have a buzzer on a motherboard for playing sound.

Original song "Still Alive" was composed by Jonathan Coulton.

## Usage
You can just play the song by using `still-alive` command in your linux _tty console_ or you can shutdown your computer after program execution by adding `-p` argument to the command: `still-alive -p`

This argument requires root privelieges so use it along with `sudo`

```
$ still-alive
$ still-alive -p
$ sudo still-alive   
/*these 3 commands won't turn off your PC*/

$ sudo still-alive -p
/*this one will*/
```
**IMPORTANT:** _Running this program in a tty console is crucial because it can play sound on a buzzer only from the console. The appearance and its behavior were developed for using in the console_

## Installation

Make sure you have all following packages before compilation:
- cmake
- libreadline-dev
- libncurses-dev
- g++ or clang compiler

Clone the project and run **install.sh** bash-script for installation. It will compile sources and install binary file automatically using CMake

```
$ sudo ./install.sh
```

## Knowin issues

The displayed text and the playing music are slightly out of sync in the first verse. Maybe I'll fix it someday. Or you can help this project and fix the sync of the music and text by yourself

## Like this project?

:star2: You can always give a star on the project to say thanks

*OR*

:moneybag: You can donate me:
> BTC: bc1q8rcdhq4pfn45pf647afhjtdn6qhrheu3hngn9m

:heart: I will buy soviet military grade gold-plated chips with this money and consume these chips the next morning to keep my body alive