#include <stdio.h>
#include <conio.h>
void main()
{
    int age;
    printf("Enter Your Age: ");
    scanf("%d",&age);
    if(!age)
    {
        printf("Your Age is: %d\n",age);
        printf("You can Go Coffee with Me\n");
    }
    printf("Its Time to Go Home");
    getch();
}

/*
O/p 1: Enter Your Age: 0
       Your Age is: 0
       You can Go Coffee with Me
       Its Time to Go Home

O/p 2: Enter Your Age: 19
       Its Time to Go Home
*/