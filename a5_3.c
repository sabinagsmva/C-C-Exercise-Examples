/*
 * CH-230-A
 * a5-p3.c
 * Sabina Gasimova
 * sgasimova@constructor.university
 */

#include <stdio.h>
#include <ctype.h>  // For the islower() function

// Function to count lowercase characters in a string
int count_lower(char* str) {
    int count = 0;
    char *ptr = str; // Pointer to walk through the string

    // Traverse the string using the pointer
    while (*ptr != '\0') {
        if (islower(*ptr)) {
            count++;
        }
        ptr++;  // Move to the next character
    }

    return count;
}

int main() {
    char str[51];  // Maximum length of 50 characters + '\0' terminator

    // Infinite loop to repeatedly read input
    while (1) {
        printf("Enter a string (or press Enter to quit): ");
        fgets(str, 51, stdin);  // Read input from the user

        // Check if the input string is empty (just contains '\n')
        if (str[0] == '\n') {
            break;  // Exit the loop and end the program
        }

        // Count the number of lowercase characters
        int lowercase_count = count_lower(str);

        // Print the result
        printf("Number of lowercase characters: %d\n", lowercase_count);
    }

    return 0;
}
