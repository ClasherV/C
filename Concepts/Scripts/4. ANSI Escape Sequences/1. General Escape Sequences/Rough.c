#include <stdio.h>
#include <conio.h> // This is specific to Windows; not needed for this example

void main()
{
    printf("Hello World\b\b\b\b\b");  // "World" will be overwritten by "li" on some terminals
    // On some terminals, after '\b' moves the cursor back, the next output remains in the buffer.

    // Adding a carriage return '\r' to ensure the cursor moves to the start of the line
    printf("\rHello Worl"); // Explicitly writing "Worl" to avoid incomplete data.
    printf("\rHello World"); // Proper output ensured after moving back.

    getch();  // Wait for user input
}
