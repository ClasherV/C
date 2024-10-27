#include <stdio.h>
#include <conio.h>
void main()
{
    int a=10,b=6;
    printf("%d\t",a&b&&b+1||0||b++);
    printf("%d",b);
    getch();
}

// O/p: 1       6