#include <stdio.h>
#include <conio.h>
void main()
{
    printf("\e[31mHello World\e[0m ");
    printf("%c[32mHello World%c[0m ",27,27);
    printf("\033[33mHello World\033[0m ");
    printf("\x1B[34mHello World\x1B[0m ");
    getch();
}

// O/p: Hello World[RED] Hello World[GREEN] Hello World[YELLO] Hello World[BLUE] 