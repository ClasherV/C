#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello World\n");
    printf("\e[32mHello World\e[39m\n");
    printf("\e[42mHello World\e[49m\n");
    printf("Hello World\n");
    getch();
}

// O/p: Hello World
//      Hello World[GREEN FOREGROUND]
//      Hello World[GREEN BACKGROUND]
//      Hello World