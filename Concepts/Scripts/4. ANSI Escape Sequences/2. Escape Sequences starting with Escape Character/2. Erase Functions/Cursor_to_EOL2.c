#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello\e7 World\n");
    printf("Hello World\n");
    printf("Press Enter to See the Change\n");
    getch();
    printf("\e8\e[3A\e[0K");
    printf("\e[3B");
    getch();
}

// O/p: Hello World
//      Hello World
//      Hello
//      Hello World
//      Press Enter to See the Change
//      