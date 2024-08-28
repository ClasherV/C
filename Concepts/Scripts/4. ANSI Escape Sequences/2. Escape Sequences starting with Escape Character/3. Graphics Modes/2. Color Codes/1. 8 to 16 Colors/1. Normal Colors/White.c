#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello World\n");
    printf("\e[37mHello World\e[39m\n");
    printf("\e[47mHello World\e[49m\n");
    printf("Hello World\n");
    getch();
}

// O/p: Hello World
//      Hello World[WHITE FOREGROUND]
//      Hello World[WHITE BACKGROUND]
//      Hello World