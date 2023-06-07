//
// Created by nick on 06/06/2023.
//

#include <stdio.h>

#include "enigma.h"
#include "keyboard.h"
#include "rotor.h"
#include "reflector.h"
#include "misc.h"

void setKey(char * key, char * r1, char * r2, char * r3)
{
    turnToLetter(r1, key[0]);
    turnToLetter(r2, key[1]);
    turnToLetter(r3, key[2]);
}

char encipher(char letter, char * r1L, char * r1R, char * r2L, char * r2R, char * r3L, char * r3R, char * pb, char * kb)
{
    int signal;
    printf("%s\n", pb);
    signal = findLetterIndex(pb, letter);
    printf("%d\n", signal);
    letter = r3R[signal];
    printf("%s\n%s\n%c\n",r3R, r3L, letter);
    signal = findLetterIndex(r3L, letter);
    printf("%d\n", signal);
    letter = r2R[signal];
    printf("%s\n%s\n%c\n",r2R,r2L, letter);
    signal = findLetterIndex(r2L, letter);
    printf("%d\n", signal);
    letter = r1R[signal];
    printf("%s\n%s\n%c\n",r1R,r1L, letter);
    signal = findLetterIndex(r1L, letter);
    printf("%d\n", signal);
    letter = kb[signal];
    printf("%s\n%c\n",kb, letter);
    return letter;

}
