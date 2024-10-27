#include <stdio.h>
#include <conio.h>
void main()
{
    printf("\\Hello World ");
    printf("%cHello World ",92);
    printf("\134Hello World ");
    printf("\x5CHello World ");
    getch();
}

// \Hello World \Hello World \Hello World \Hello World 