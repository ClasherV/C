#include <stdio.h>
#include <conio.h>
void main()
{
    int age;
    printf("Enter Your Age: ");
    scanf("%d",&age);
    if(age>25&&age<30)
    {
        printf("Age: %d\n",age);
        printf("Coffee with Me\n");
    }
    else
    {
        printf("Age: %d\n",age);
        printf("Go Home\n");
    }
    printf("Out of if-else");
    getch();
}

/*
O/p 1: Enter Your Age: 28
       Age: 28       
       Coffee with Me
       Out of if-else

O/p 2: Enter Your Age: 19
       Age: 19
       Go Home
       Out of if-else
*/