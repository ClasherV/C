#include <stdio.h>
#include <conio.h>
void main()
{
    int a=10,b=5;
    printf("%d\t",a==b&&b>a);
    printf("%d\t",a!=b&&b>a);
    printf("%d\t",a==b&&b<a);
    printf("%d",a!=b&&b<a);
    getch();
}

// O/p: 0       0       0       1