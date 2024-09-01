#include <stdio.h>
#include <conio.h>
void main()
{
    int x=10,y;
    y=--x;
    printf("%d\t%d",x,y);
    y=x--;
    printf("\n%d\t%d",x,y);
    getch();
}

// O/p: 9       9
//      8       9