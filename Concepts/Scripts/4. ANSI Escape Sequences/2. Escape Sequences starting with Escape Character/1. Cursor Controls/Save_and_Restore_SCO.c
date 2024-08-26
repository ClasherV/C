#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello World\n");
    printf("Hello World\n");
    printf("\e[sSaves the Cursor Position\n");
    printf("Hello World\n");
    printf("Press Enter to See the Change\n");
    getch();
    printf("\e[uRestores the Cursor Position\n\n\n");
    getch();
}

// O/p: Hello World
//      Hello World
//      Restores the Cursor Position 
//      Hello World
//      Press Enter to See the Change