#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello \e[1KWorld\n");
    printf("Hello World\n");
    printf("Hello World\n");
    getch();
}

// O/p: Hello World
//      Hello World
//            World
//      Hello World
//      Hello World