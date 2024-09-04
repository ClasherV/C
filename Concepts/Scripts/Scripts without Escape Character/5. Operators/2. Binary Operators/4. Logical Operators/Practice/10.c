#include <stdio.h>
#include <conio.h>
void main()
{
    int a=10,b=5,result;
    result=(a>b)&&a++;
    printf("%d %d",result,a);
    getch();
}

// O/p: 1 11