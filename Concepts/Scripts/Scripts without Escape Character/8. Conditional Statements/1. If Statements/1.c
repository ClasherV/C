#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("Enter the Value of a: ");
    scanf("%d",&a);
    if(a)
    printf("Inside if\n");
    printf("a: %d\n",a);
    printf("Outside if");
    getch();
}

/*
O/p 1: Enter the Value of a: 5
       Inside if 
       a: 5      
       Outside if

O/p 2: Enter the Value of a: 0
       a: 0
       Outside if
*/