#include <stdio.h>
#include <string.h>

#include "lib/enigma.h"
#include "lib/keyboard.h"   // keyboard and plugboard declaration
#include "lib/rotor.h"      // rotors declaration and functions
#include "lib/reflector.h"  // reflector declaration and functions

/* Historical rotors
 * I: "EKMFLGDQVZNTOWYHXUSPAIBRCJ"
 * II: "AJDKSIRUXBLHWTMCQGZNPYFVOE"
 * III: "BDFHJLCPRTXVZNYEIWGAKMUSQO"
 * IV: "ESOVPZJAYQUIRHXLNFTGKDCMWB"
 * V: "VZBRGITYUPSDNHLXAWMJQOFECK"
 */

int main() {
    int i;
    char keyboard[26] = KB;
    char * plugboard = NULL;
    char r1[] = "EKMFLGDQVZNTOWYHXUSPAIBRCJ";
    char r2[] = "AJDKSIRUXBLHWTMCQGZNPYFVOE";
    char r3[] = "BDFHJLCPRTXVZNYEIWGAKMUSQO";

    // Plugboard setup
    char settings[] = "AG DK ZT";
    setPlugboard(settings);
    // Rotors setup
//    showRotors(r1, r2, r3);
//    setKey("CAT", r1, r2, r3);
//    showRotors(r1, r2, r3);


    return 0;
}
