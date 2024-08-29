#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello World\n");
    printf("Hello World\n");
    printf("\e7Saves the Cursor Position\n");
    printf("Hello World\n");
    printf("Press Enter to See the Change\n");
    getch();
    printf("\e8\e[3ARestores the Cursor Position\n\n\n");
    getch();
}

// O/p: Hello World
//      Hello World
//      Saves the Cursor Position
//      Hello World
//      Press Enter to See the Change
//      [ENTER]
//      [SCREEN CHANGED]
//      Hello World
//      Hello World
//      Restores the Cursor Position 
//      Hello World
//      Press Enter to See the Change