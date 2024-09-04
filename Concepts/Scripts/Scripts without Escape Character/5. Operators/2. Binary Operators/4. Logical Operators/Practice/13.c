#include <stdio.h>
#include <conio.h>
void main()
{
    int a=1,b=6;
    int result1=a--&&++b;
    a=1,b=6;
    int result2=--a&&++b;
    printf("%d %d",result1,result2);
    getch();
}

// O/p: 1 0