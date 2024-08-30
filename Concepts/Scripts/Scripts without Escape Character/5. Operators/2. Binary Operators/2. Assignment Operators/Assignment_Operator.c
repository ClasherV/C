#include <stdio.h>
#include <conio.h>
void main()
{
    int a=10,b=5;
    int c=a*b;
    printf("%d\t%d\t%d\n",a,b,c);
    a=a+b;
    b=10;
    printf("%d\t%d",a,b);
    getch();
}

// O/p: 10      5       50
//      15      10