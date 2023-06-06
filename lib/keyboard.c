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

void setPlugboard(char * settings)
{
    int first, second;
    int n = strlen(KB);
    char tmp[n];
    char replace;
    char *token;
    strcpy(tmp, KB);
    printf("%s\n", tmp);

    // Extract the first pair
    token = strtok(settings, " ");
    while(token != NULL)
    {
        // Search the index of the letter we have to switch
        first = findLetterIndex(tmp, token[0]);
        second = findLetterIndex(tmp, token[1]);
        // Switch the letters
        tmp[first] = token[1];
        tmp[second] = token[0];
        printf("%s\n", tmp);
        // Loop through the string to extract all other tokens
        token = strtok(NULL, " ");
    }
}
