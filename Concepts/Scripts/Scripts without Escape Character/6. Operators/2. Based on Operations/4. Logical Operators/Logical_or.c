#include <stdio.h>
#include <conio.h>
void main()
{
    int a=10,b=5;
    printf("%d\t",a<b||b==4);
    printf("%d\t",a>b||b==4);
    printf("%d\t",a<b||b!=4);
    printf("%d",a>b||b!=4);
    getch();
}

// O/p: 0       1       1       1