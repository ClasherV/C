#include <stdio.h>
#include <conio.h>
void main()
{
    int a=10,b=15;
    int x=(a>b)?a:b;
    printf("x=%d\ty=%d",x,(a<b)?a:b);
    getch();
}

// O/p: x=15    y=10