/*
 * CH-230-A
 * a4-p5.c
 * Sabina Gasimova
 * sgasimova@constructor.university
 */

#include <stdio.h>

// Function to count consonants using pointers and address arithmetic
int count_consonants(char str[]) {
    int count = 0;
    char *ptr = str; // Initialize a pointer to point to the start of the string
    
    // Loop through the string using the pointer
    while (*ptr != '\0') {
        char ch = *ptr; // Get the character at the current pointer position
        // Check if the character is a consonant
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) { // Check if it's a letter
            if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
                  ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
                count++;
            }
        }
        ptr++; // Move to the next character (increment the pointer)
    }
    
    return count;
}

int main() {
    char input[101];
    
    // Loop until an empty string is entered
    while (1) {
        printf("Enter a string (press Enter to exit): ");
        fgets(input, 101, stdin); // Get the input string

        if (input[0] == '\n') {
            break;
        }
        
        printf("Number of consonants = %d\n", count_consonants(input));
    }

    return 0;
}
