#include <stdio.h>
#include <conio.h>
void main()
{
    int age;
    printf("Enter Your Age: ");
    scanf("%d",&age);
    if(age>20)
    {
        printf("Your Age is: %d\n",age);
        printf("You can Go Coffee with Me\n");
    }
    printf("Its Time to Go Home");
    getch();
}

/*
O/p 1: Enter Your Age: 21
       Your Age is: 21
       You can Go Coffee with Me
       Its Time to Go Home

O/p 2: Enter Your Age: 19
       Its Time to Go Home
*/