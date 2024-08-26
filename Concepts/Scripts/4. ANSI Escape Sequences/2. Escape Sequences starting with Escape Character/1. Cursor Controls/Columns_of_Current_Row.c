#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello World\n");
    printf("Hello World\n");
    printf("\x1b[30GColumn 30 in Current Row\n");
    printf("Hello World\n");
    printf("Hello World\n");
    getch();
}

// O/p: Hello World
//      Hello World
//                                   Column 30 in Current Row
//      Hello World
//      Hello World