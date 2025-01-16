// Name: Karthikeya Telapalli
/* Description: This code prompts the user to enter a sequence of characters and then checks if the string contains only alphabet characters that
 are in ascending alphabetical order. If the input has any non-letter characters, it returns 'invalid input'. If the characters 
 are not in ascending order, it returns 'not in order'. Otherwise, if all letters are in the correct order, it returns 'in order */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>  // Let's use bools for simpler true or false situations

int main() {
    char lastChar = '\0';       // Variable containing the last character encountered
    char thisChar;              // Variable to store the current character being processed.
    bool allInOrder = true;     // Boolean to determine whether all characters are in the correct sequence.
    bool gotStrangeChar = false; // Boolean to determine whether we encountered a non-alphabet character.

    // Request input from the user.
    printf("Enter input: ");

    // Process the input character by character
    while (1) {
        thisChar = getchar();   // Find the next character in the input

        // Break out of the loop if the user presses enter.
        if (thisChar == '\n') break;

        // Mark the current character as an unusual character if it is not an alphabet character.
        if (!isalpha(thisChar)) {
            gotStrangeChar = true;
            break;
        }

        // To make the comparison simpler, convert capital letters to lowercase.
        thisChar = tolower(thisChar);

        // If the current character is less than the last character, the input is not in the correct sequence.
        if (lastChar != '\0' && thisChar < lastChar) {
            allInOrder = false;
            break;
        }

        lastChar = thisChar;  // For the following iteration, change the lastChar to the current character.
    }

    // Print the outcome of our investigation.
    if (gotStrangeChar)
        printf("invalid input\n");  // There was a non-alphabet character in the input.
    else if (!allInOrder)
        printf("not in order\n");   // The alphabet letters were not in the correct sequence.
    else
        printf("in order\n");       // All alphabet characters were in the correct sequence. 

    return 0;   
}
