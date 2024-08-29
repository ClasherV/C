#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello World\n");
    printf("\e[34mHello World\e[39m\n");
    printf("\e[44mHello World\e[49m\n");
    printf("Hello World\n");
    getch();
}

// O/p: Hello World
//      Hello World[BLUE FOREGROUND]
//      Hello World[BLUE BACKGROUND]
//      Hello World