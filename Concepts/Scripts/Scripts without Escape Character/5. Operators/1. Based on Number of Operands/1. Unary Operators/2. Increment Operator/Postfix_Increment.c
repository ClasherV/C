#include <stdio.h>
#include <conio.h>
void main()
{
    int y=10;
    int x=11;
    y=x++;
    printf("y=%d\n",y);
    printf("x=%d",x);
    getch();
}

// O/p: y=11
//      x=12