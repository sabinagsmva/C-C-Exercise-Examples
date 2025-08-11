/*
 * CH-230-A
 * a4-p4.c
 * Sabina Gasimova
 * sgasimova@constructor.university
 */


#include <stdio.h>

int count_consonants(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i]; // Current character
        // Check if the character is a consonant
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) { // Check if it's a letter
            if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
                  ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    char input[101]; // Array to store input (up to 100 characters)
    
    // Loop until an empty string is entered
    while (1) {
        printf("Enter a string (press Enter to exit): ");
        fgets(input, 101, stdin); // Get the input string

        // If the first character is '\n', exit the loop
        if (input[0] == '\n') {
            break;
        }

        // Print the number of consonants
        printf("Number of consonants = %d\n", count_consonants(input));
    }

    return 0;
}
