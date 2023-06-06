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
