#include <stdio.h>
#include <conio.h>
void main()
{
    int a=10,b=5;
    a+=1;
    printf("%d\n",a);
    a-=2;
    printf("%d\n",a);
    a=10;
    printf("%d\n",a%=10);
    a=10;
    a+=(b*10);
    printf("%d\n",a);
    getch();
}

// O/p: 11
//      9
//      0
//      60