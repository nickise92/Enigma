//
// Created by nick on 06/06/2023.
//

#ifndef ENIGMA_ENIGMA_H
#define ENIGMA_ENIGMA_H


void setKey(char * key, char * r1, char * r2, char * r3);
char encipher(char letter, char * r1L, char * r1R, char * r2L, char * r2R, char * r3L, char * r3R, char * pb, char * kb);
#endif //ENIGMA_ENIGMA_H
