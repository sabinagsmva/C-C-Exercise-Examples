/*
 * CH-230-A
 * a6-p2.c
 * Sabina Gasimova
 * sgasimova@constructor.university
 */

#include <stdio.h>

// Macro to get the least significant bit
#define GET_LSB(x) ((x) & 1)

int main() {
    unsigned char myChar;

    // Read an unsigned char from input
    printf("Enter an unsigned char: ");
    scanf(" %c", &myChar); 
    printf("The decimal representation is: %d\n", myChar);

    // Use the macro to get the least significant bit
    int lsb = GET_LSB(myChar);
    printf("The least significant bit is: %d\n", lsb);

    return 0;
}
