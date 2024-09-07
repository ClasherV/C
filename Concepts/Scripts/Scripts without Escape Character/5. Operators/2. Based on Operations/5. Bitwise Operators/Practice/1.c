#include <stdio.h>
#include <conio.h>
void main()
{
    int a=10,b=6;
    printf("%d\t",a&b);
    printf("%d\t",a|b);
    printf("%d\t",a^b);
    printf("%d\t",a&b&&b+1||0);
    getch();
}

// O/p: 2       14      12      1