//
// Created by nick on 07/06/2023.
//

#include "misc.h"

int findLetterIndex(char * str, char letter)
{
    int i;
    for (i = 0; i < 26; i++)
    {
        if(str[i] == letter)
            return i;
    }
    return -1; // return -1 on error
}