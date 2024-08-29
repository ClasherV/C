#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\e[2K");
    printf("\rHello World\n");
    printf("Hello World\n");
    getch();
}

// O/p: Hello World
//      Hello World
//      Hello World
//      Hello World