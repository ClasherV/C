#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello\e7 World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Press Enter to See the Change\n");
    getch();
    printf("\e8\033[J");
    getch();
}

// O/p: Hello World
//      Hello World
//      Hello World
//      Hello World
//      Press Enter to See the Change
//      