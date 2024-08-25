#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Yummy\rHello World\n");
    printf("Yummy%cHello World\n",13);
    printf("Yummy\015Hello World\n");
    printf("Yummy\x0DHello World\n");
    getch();
}

// O/p: Hello World
//      Hello World
//      Hello World
//      Hello World