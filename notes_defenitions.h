#ifndef _NOTES_H
#define _NOTES_H

#include <sys/ioctl.h>
#include <unistd.h>
#include <linux/kd.h>

constexpr int TIMER_FREQ = 1193180; 

/*BPM is the number of fourth notes per minute*/
constexpr int BPM = 120;
/*BPS is the number of fourth notes per second*/
constexpr double BPS = BPM / 60;
/*Duraions of notes in milliseconds*/
constexpr int note1_ms = 1 / (BPS / 4) * 1000;
constexpr int note2_ms = 1 / (BPS / 2) * 1000;
constexpr int note4_ms = 1 / BPS * 1000;
constexpr int note8_ms = note4_ms / 2;
constexpr int note4dot_ms = note8_ms + note4_ms;
constexpr int note16_ms = note8_ms / 2;
constexpr int barDuration_ms = note1_ms; 

/*octave 4*/
constexpr int C4  = 262; /*C */
constexpr int Cd4 = 277; /*C#*/
constexpr int D4  = 294; /*D */
constexpr int Dd4 = 311; /*D#*/
constexpr int E4  = 330; /*E */
constexpr int F4  = 349; /*F */
constexpr int Fd4 = 370; /*F#*/
constexpr int G4  = 392; /*G */
constexpr int Gd4 = 415; /*G#*/
constexpr int A4  = 440; /*A */
constexpr int Ad4 = 466; /*A#*/
constexpr int B4  = 494; /*B */
/*octave 5*/
constexpr int C5  = 523; /*C */
constexpr int Cd5 = 554; /*C#*/
constexpr int D5  = 587; /*D */
constexpr int Dd5 = 622; /*D#*/
constexpr int E5  = 659; /*E */
constexpr int F5  = 698; /*F */
constexpr int Fd5 = 740; /*F#*/
constexpr int G5  = 784; /*G */
constexpr int Gd5 = 831; /*G#*/
constexpr int A5  = 880; /*A */
constexpr int Ad5 = 932; /*A#*/
constexpr int B5  = 988; /*B */
/*octave 6*/
constexpr int C6  = 1047    ; /*C */
constexpr int Cd6 = 1109; /*C#*/
constexpr int D6  = 1174; /*D */
constexpr int Dd6 = 1245; /*D#*/
constexpr int E6  = 1319; /*E */
constexpr int F6  = 1397; /*F */
constexpr int Fd6 = 1480; /*F#*/
constexpr int G6  = 1568; /*G */
constexpr int Gd6 = 1661; /*G#*/
constexpr int A6  = 1720; /*A */
constexpr int Ad6 = 1865; /*A#*/
constexpr int B6  = 1976; /*B */

struct Note
{
    Note(){}
    Note(int tone, int duration) : duration_ms(duration), frequency(tone)
    {}

    int duration_ms = 0;
    int frequency = 0;
};

static void silence(void)
{
    ioctl(STDOUT_FILENO, KIOCSOUND, 0); 
}

static void playNote(int freq)
{
    if(freq != 0)
    {
        ioctl(STDOUT_FILENO, KIOCSOUND, TIMER_FREQ/freq);
    }
    else
    {
        silence();
    }
}

#endif