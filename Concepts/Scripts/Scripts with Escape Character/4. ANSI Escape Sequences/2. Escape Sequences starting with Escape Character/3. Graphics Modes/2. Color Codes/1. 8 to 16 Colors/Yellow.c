#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello World\n");
    printf("\e[33mHello World\e[39m\n");
    printf("\e[43mHello World\e[49m\n");
    printf("Hello World\n");
    getch();
}

// O/p: Hello World
//      Hello World[YELLOW FOREGROUND]
//      Hello World[YELLOW BACKGROUND]
//      Hello World