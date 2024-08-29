#include <stdio.h>
#include <conio.h>
void main()
{
    printf("\x1b[7mHello World\x1b[27m");
    getch();
}

// O/p: Hello World
//      Hello World[INVERSE]
//      Hello World