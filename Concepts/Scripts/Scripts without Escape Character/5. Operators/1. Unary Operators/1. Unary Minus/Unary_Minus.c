#include <stdio.h>
#include <conio.h>
void main()
{
    int a=5,b=10;
    int c=a+(-b);
    a=-b;
    int d=-15;
    printf("c=%d a=%d d=%d",c,a,-d);
    getch();
}

// O/p: c=-5 a=-10 d=15