#include <stdio.h>
#include <conio.h>
void main()
{
    int age;
    printf("Enter Your Age: ");
    scanf("%d",&age);
    if(age>20&&age<30)
    {
        printf("Your Age is: %d\n",age);
        printf("You can Go Coffee with Me\n");
    }
    if(age>15)
    {
        printf("Your Age is: %d\n",age);
        printf("Its Time to Go Home");
    }
    getch();
}

/*
O/p 1: Enter Your Age: 25
       Your Age is: 25
       You can Go Coffee with Me
       Your Age is: 25
       Its Time to Go Home
    
O/p 2: Enter Your Age: 19
       Your Age is: 19
       Its Time to Go Home

O/p 3: Enter Your Age: 10
*/