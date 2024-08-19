#include <stdio.h>
#include <conio.h>
void main()
{
    unsigned short int a=65535;
    unsigned short int b=4294967295;
    unsigned short int c=-32768;
    printf("%hu %hu %hu",a,b,c);
    getch();
}

// O/p: 65535 65535 32768