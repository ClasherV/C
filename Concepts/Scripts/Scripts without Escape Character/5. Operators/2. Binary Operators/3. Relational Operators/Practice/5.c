#include <stdio.h>
#include <conio.h>
void main()
{
    int a=18,b=9,c,d,e=10,f;
    c=b++;
    d=b;
    f=a>b>d<c;
    printf("%d",f!=1);
    getch();
}

// O/p: 0