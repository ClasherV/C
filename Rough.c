#include <stdio.h>

int main() {
    char letter = 'A'; // Start with the letter 'A'
    int rows = 7;      // Number of rows in the pyramid

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces for alignment
        for (int space = rows - i; space > 0; space--) {
            printf(" ");
        }
        
        // Print letters for the current row
        for (int j = 1; j <= i; j++) {
                printf("%c ", letter);
                letter++;
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
