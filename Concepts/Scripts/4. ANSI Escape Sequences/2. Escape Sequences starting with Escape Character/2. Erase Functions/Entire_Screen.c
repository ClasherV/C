#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Press Enter to See the Change\n");
    getch();
    printf("\e7Hello World\n");
    printf("Hello World\n");
    printf("\e8 \e[2A \e[2J\n");
    getch();
}

// O/p: 
//
//
//
//