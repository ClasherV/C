#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello World\n");
    printf("\e[35mHello World\e[39m\n");
    printf("\e[45mHello World\e[49m\n");
    printf("Hello World\n");
    getch();
}

// O/p: Hello World
//      Hello World[MAGENTA FOREGROUND]
//      Hello World[MAGENTA BACKGROUND]
//      Hello World