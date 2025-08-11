/*
 * CH-230-A
 * a4-p11.c
 * Sabina Gasimova
 * sgasimova@constructor.university
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Function to count the occurrences of a character in a string (case insensitive)
int insensitive(char *str, char c) {
    int count = 0;
    c = tolower(c); 

    while (*str) {
        if (tolower(*str) == c) {
            count++;
        }
        str++;
    }

    return count;
}

int main() {
    char *inputString;
    char *finalString;
    int length;

    // Allocate memory for the initial string (max length = 50)
    inputString = (char *)malloc(50 * sizeof(char));
    if (inputString == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter a string (up to 50 characters): ");
    fgets(inputString, 50, stdin);
    
    // Remove the newline character from fgets
    length = strlen(inputString);
    if (inputString[length - 1] == '\n') {
        inputString[length - 1] = '\0';
        length--;
    }

    //  Allocate memory for the new string with the correct size
    finalString = (char *)malloc((length + 1) * sizeof(char));
    if (finalString == NULL) {
        printf("Memory allocation failed!\n");
        free(inputString); // Free the original memory
        return 1;
    }

    //  Copy the content of the initial string to the new string
    strcpy(finalString, inputString);

    //  Deallocate the memory of the initial string
    free(inputString);

    //  Check the occurrences of specified characters
    char charsToCheck[] = {'b', 'H', '8', 'u', '$'};
    for (int i = 0; i < 5; i++) {
        int count = insensitive(finalString, charsToCheck[i]);
        printf("The character '%c' occurs %d times\n", charsToCheck[i], count);
    }

    //Free the memory allocated for the final string
    free(finalString);

    return 0;
}
