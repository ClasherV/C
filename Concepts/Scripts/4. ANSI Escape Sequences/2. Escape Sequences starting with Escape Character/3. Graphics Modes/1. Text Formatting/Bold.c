#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello World\n");
    printf("\e[1mHello World\033[22m\n");
    printf("Hello World\n");
    getch();
}

// O/p: Hello World
//      Hello World[BOLD]
//      Hello World