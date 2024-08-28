#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello World\n");
    printf("\e[30mHello World\n");
    printf("\e[31mHello World\n");
    printf("\e[32mHello World\n");
    printf("\e[33mHello World\n");
    printf("\e[34mHello World\n");
    printf("\e[35mHello World\n");
    printf("\e[36mHello World\n");
    printf("\e[37mHello World\n");
    printf("Hello World\n");
    printf("\e[39mHello World\n");
    printf("Press Enter for Background Colors\n");
    getch();
    printf("\e[40mHello World\n");
    printf("\e[41mHello World\n");
    printf("\e[42mHello World\n");
    printf("\e[43mHello World\n");
    printf("\e[44mHello World\n");
    printf("\e[45mHello World\n");
    printf("\e[46mHello World\n");
    printf("\e[47mHello World\n");
    printf("Hello World\n");
    printf("\e[49mHello World\n");
    printf("\e[31;45mHello World\n");
    printf("\e[32;46mHello World\n");
    printf("Hello World\n");
    printf("\e[0mHello World\n");
    getch();
}

// O/p: Hello World
//      Hello World[BLACK FOREGROUND]
//      Hello World[RED FOREGROUND]
//      Hello World[GREEN FOREGROUND]
//      Hello World[YELLOW FOREGROUND]
//      Hello World[BLUE FOREGROUND]
//      Hello World[MAGENTA FOREGROUND]
//      Hello World[CYAN FOREGROUND]
//      Hello World[WHITE FOREGROUND]
//      Hello World[WHITE FOREGROUND]
//      Hello World
//      Press Enter for Background Colors
//      Hello World[BLACK BACKGROUND]
//      Hello World[RED BACKGROUND]
//      Hello World[GREEN BACKGROUND]
//      Hello World[YELLOW BACKGROUND]
//      Hello World[BLUE BACKGROUND]
//      Hello World[MAGENTA BACKGROUND]
//      Hello World[CYAN BACKGROUND]
//      Hello World[WHITE BACKGROUND]
//      Hello World[WHITE BACKGROUND]
//      Hello World
//      Hello World[RED FOREGROUND+MAGENTA BACKGROUND]
//      Hello World[GREEN FOREGROUND+CYAN BACKGROUND]
//      Hello World[GREEN FOREGROUND+CYAN BACKGROUND]
//      Hello World