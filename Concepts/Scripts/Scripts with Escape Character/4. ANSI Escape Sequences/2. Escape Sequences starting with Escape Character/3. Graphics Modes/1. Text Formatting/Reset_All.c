#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello World\n");
    printf("\e[1mHello World\n");
    printf("\e[3mHello World\n");
    printf("\e[4mHello World\n");
    printf("\e[7mHello World\n");
    printf("\e[8mHello World\n");
    printf("\e[9mHello World\n");
    printf("\e[0mHello World\n");
    printf("Hello World\n");
    getch();
}

// O/p: Hello World
//      Hello World[BOLD]
//      Hello World[BOLD+ITALIC]
//      Hello World[BOLD+ITALIC+UNDERLINE]
//      Hello World[BOLD+ITALIC+UNDERLINE+INVERSE]
//      Hello World[BOLD+ITALIC+UNDERLINE+INVERSE+HIDDEN]
//      Hello World[BOLD+ITALIC+UNDERLINE+INVERSE+HIDDEN+STRIKETHROUGH]
//      Hello World
//      Hello World