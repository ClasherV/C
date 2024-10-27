#include <stdio.h>
#include <conio.h>
void main()
{
    int a=18,b=9,c,d,e=10;
    c=b++;
    d=b;
    printf("%d\t",a<b<c>d);
    printf("%d\t",b==e);
    printf("%d\t",c+1>e);
    printf("%d\t",a+c==b>e<c+d);
    getch();
}

// O/p: 0       1       0       0