#include <stdio.h>
#include <conio.h>
void main()
{
    int a=5,b=3,c=6;
    printf("%d\t",3<=5);
    printf("%d\t",3+5<=5+5);
    printf("%d\t",a+b<=b+c);
    printf("%d\t",a<=b);
    printf("%d\t",5<=5);
    printf("%d\t",'a'<='b');
    printf("%d\t",1.5<=1.2);
    printf("%d\t",4.5<=4);
    getch();
}

// O/p: 1       1       1       0       1       1       0       0