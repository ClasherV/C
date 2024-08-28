#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello World\n");
    printf("\e[36mHello World\e[39m\n");
    printf("\e[46mHello World\e[49m\n");
    printf("Hello World\n");
    getch();
}

// O/p: Hello World
//      Hello World[CYAN FOREGROUND]
//      Hello World[CYAN BACKGROUND]
//      Hello World