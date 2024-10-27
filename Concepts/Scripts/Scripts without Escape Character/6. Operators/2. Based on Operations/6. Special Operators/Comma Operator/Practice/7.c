#include <stdio.h>
#include <conio.h>
void main()
{
    int a=8,b;
    b=(a++,++a,a>>2);
    printf("%d %d",a,b);
    getch();
}

// O/p: 10 2