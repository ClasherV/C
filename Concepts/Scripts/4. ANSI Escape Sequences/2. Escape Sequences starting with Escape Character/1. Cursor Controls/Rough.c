#include <stdio.h>

int main() {
    char ch;

    // Move cursor to row 6, column 1
    printf("\033[6;1H");

    // Prompt user for input
    printf("Enter a character: ");
    
    // Flush the output buffer
    fflush(stdout);

    // Get a character input
    ch = getchar();

    // Print the received character
    printf("You entered: %c\n", ch);

    // Move cursor to end of input for clarity
    printf("\033[7;1H");

    return 0;
}
