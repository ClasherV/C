#include <stdio.h>
#include <conio.h>
void main()
{
    int a=5,b,c,d;
    b=--a;
    c=a--;
    d=--a;
    printf("%d %d %d %d",a,b,c,d);
    getch();
}

// O/p: 2 4 4 2