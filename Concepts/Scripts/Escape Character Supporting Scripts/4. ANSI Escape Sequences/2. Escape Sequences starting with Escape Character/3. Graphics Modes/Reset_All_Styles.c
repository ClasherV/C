#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello World\n");
    printf("\e[1;3;31mHello World\n");
    printf("\e[4;9;43;33mHello World\e[0m\n");
    printf("Hello World\n");
    getch();
}

// O/p: Hello World
//      Hello World[BOLD+ITALIC+RED FOREGROUND]
//      Hello World[BOLD+ITALIC+UNDERLINE+STRIKETHROUGH+YELLOW BACKGROUND]
//      Hello World