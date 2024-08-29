#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello World\n");
    printf("\e[31mHello World\e[39m\n");
    printf("\e[41mHello World\e[49m\n");
    printf("Hello World\n");
    getch();
}

// O/p: Hello World
//      Hello World[RED FOREGROUND]
//      Hello World[RED BACKGROUND]
//      Hello World