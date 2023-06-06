//
// Created by nick on 06/06/2023.
//

#include <stdio.h>      // for debugging
#include "rotor.h"
#include "misc.h"

void turnRotor(char * str)
{
    int i;
    char old[26];

    for (i = 0; i < 26; i++)
    {
        old[i] = str[i];
    }

    for (i = 0; i < 26; i++)
    {
        str[i] = old[(i+1)%26];
        //printf("%d: %c\n",i, str[(i+1)%26]);  // for debugging
    }
}

void turnToLetter(char * str, char letter)
{
    int i;
    int index = findLetterIndex(str, letter);
    if (index == -1) {
        printf("ERROR: Cannot find letter %c in rotor %s\nAbort.", letter, str);
    } else {
        for (i = 0; i < index; i++) {
            turnRotor(str);
        }
    }
}

void showRotors(char * r1, char * r2, char * r3) {
    printf("%s\n", r1);
    printf("%s\n", r2);
    printf("%s\n", r3);
}
