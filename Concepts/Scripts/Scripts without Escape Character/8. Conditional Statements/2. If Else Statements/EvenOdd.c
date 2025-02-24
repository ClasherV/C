#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("\nGiven Number %d is an Even Number",n);
    }
    else
    {
        printf("\nGiven Number %d is an Odd Number",n);
    }
    getch();
    return 0;
}

/*
O/p 1: Enter a Number: 2
       
       Given Number 2 is an Even Number

O/p 2: Enter a Number: 1
       
       Given Number 1 is an Odd Number
*/