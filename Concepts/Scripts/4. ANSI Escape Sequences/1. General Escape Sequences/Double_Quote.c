#include <stdio.h>
#include <conio.h>
void main()
{
    printf("\"Hello World\" ");
    printf("%cHello World%c ",34,34);
    printf("\042Hello World\042 ");
    printf("\x22Hello World\x22 ");
    getch();
}

// O/p: "Hello World" "Hello World" "Hello World" "Hello World" 