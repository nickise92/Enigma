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
    char keyboard[] = KB;
    char plugboard[] = KB;
    char r1Right[] = "EKMFLGDQVZNTOWYHXUSPAIBRCJ";
    char r1Left[] = KB;
    char r2Right[] = "AJDKSIRUXBLHWTMCQGZNPYFVOE";
    char r2Left[] = KB;
    char r3Right[] = "BDFHJLCPRTXVZNYEIWGAKMUSQO";
    char r3Left[] = KB;
    char key[] = "CAT";
    // Plugboard setup
    char settings[] = "AG DK ZT";
    printf("Starting PLUGBOARD setup...\n");
    printf("%s\n", plugboard);
    setPlugboard(settings, plugboard);
    printf("%s\n", plugboard);
    printf("Done.\n\nStarting ROTORS setup with key: '%s'...\n", key);
    // Rotors setup
    setKey(key, r1Left, r2Left, r3Left);
    showRotors(r1Left, r1Right, r2Left);
    showRotors(r2Right, r3Left, r3Right);
    printf("Done.\n\n");

    //Encipher letter "A"
    char c = encipher('A', r1Left, r1Right,r2Left, r2Right, r3Left, r3Right, plugboard, keyboard);
    printf("%c\n", c);
    return 0;
}
