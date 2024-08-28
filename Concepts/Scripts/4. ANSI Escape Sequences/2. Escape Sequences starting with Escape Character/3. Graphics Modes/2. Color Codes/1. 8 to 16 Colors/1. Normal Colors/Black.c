#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello World\n");
    printf("\e[30mHello World\e[39m\n");
    printf("\e[40mHello World\e[49m\n");
    printf("Hello World\n");
    getch();
}

// O/p: Hello World
//      Hello World[BLACK FOREGROUND]
//      Hello World[BLACK BACKGROUND]
//      Hello World