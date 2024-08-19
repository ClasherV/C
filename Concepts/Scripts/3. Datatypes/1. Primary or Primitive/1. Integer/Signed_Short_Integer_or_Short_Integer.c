#include <stdio.h>
#include <conio.h>
void main()
{
    signed short int a=32767;
    short int b=2147483647;
    short int c=-32767;
    printf("%hd %hd %hd",a,b,c);
    getch();
}

// O/p: 32767 -1 -32767