//
// Created by nick on 06/06/2023.
//

#include <string.h>
#include <stdio.h>

#include "keyboard.h"
#include "misc.h"
/*
 *  char a[] = "CACCAPUPU!";
 *  char *p = &a[0];
 *  printf("a: %s\n*p: %s",a, p);
 */

void setPlugboard(char * settings, char * plugboard)
{
    int i;
    int first, second;
    int n = strlen(KB);
    char *token;
    strcpy(plugboard, KB);

    // Extract the first pair
    token = strtok(settings, " ");
    while(token != NULL)
    {
        // Search the index of the letter we have to switch
        first = findLetterIndex(plugboard, token[0]);
        second = findLetterIndex(plugboard, token[1]);
        // Switch the letters
        plugboard[first] = token[1];
        plugboard[second] = token[0];

        // Loop through the string to extract all other tokens
        token = strtok(NULL, " ");
    }

}
