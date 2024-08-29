#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello World\n");
    printf("\e7Hello World\n");
    printf("\e[3JLines Cleared\n");
    getch();
    printf("\e8\e[2ARestore\e[0J");
    getch();
}