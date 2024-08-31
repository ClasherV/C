#include <stdio.h>
#include <conio.h>
void main()
{
    int a=5,b,c,d;
    b=++a;
    c=a++ + ++a-a++;
    d=++a;
    printf("%d %d %d %d",a,b,c,d);
    getch();
}