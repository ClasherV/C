/*
#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter the Number You were thinking of:");
    scanf("%d",&a);
    printf("The Number You were thinking of is %d",a);
    getch();
    return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Add 2023 to Your Age\n");
    printf("Now Enter that Number:");
    scanf("%d",&a);
    printf("Your age is %d",a-2023);
    getch();
    return 0;
}
*/


#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c,d,e;
    printf("\033[50C");
    printf("\033[1;33mChoose a Fruit in Your Mind and I will guess it\033[39m\n");
    printf("Remember answer yes or no in 1 and 0 format only\n\n");
    printf("Choose a Fruit\n");
    printf("Apple\n");
    printf("Banana\n");
    printf("Grapes\n");
    printf("Mango\n");
    printf("Watermelon\n\n");
    printf("Section 1: Is Your Fruit here\n");
    printf("Kiwi\n");
    printf("Apple\n");
    printf("Cherry\n");
    printf("Mango\n");
    printf("Raspberry\n");
    scanf("%d",&a);
    printf("Section 2: Is Your Fruit here\n");
    printf("Grapefruit\n");
    printf("Papaya\n");
    printf("Mango\n");
    printf("Blue Berries\n");
    printf("Strawberry\n");
    scanf("%d",&b);
    printf("Section 3: Is Your Fruit here\n");
    printf("Apple\n");
    printf("Cherry\n");
    printf("Banana\n");
    printf("Papaya\n");
    printf("Watermelon\n");
    scanf("%d",&c);
    printf("Section 4: Is Your Fruit here\n");
    printf("Guava\n");
    printf("Grapes\n");
    printf("Kiwi\n");
    printf("Watermelon\n");
    printf("Melon\n");
    scanf("%d",&d);
    printf("Section 5: Is Your Fruit here\n");
    printf("Raspberry\n");
    printf("Banana\n");
    printf("Grapes\n");
    printf("Kiwi\n");
    printf("Melon\n");
    scanf("%d",&e);
    if(a==1&&c==1)
    printf("Your Fruit is Apple");
    if(c==1&&e==1)
    printf("Your Fruit is Banana");
    if(d==1&&e==1)
    printf("Your Fruit is Grapes");
    if(a==1&&b==1)
    printf("Your Fruit is Mango");
    if(c==1&&d==1)
    printf("Your Fruit is Watermelon");
    getch();
    return 0;  
}


/* 
//                     Project 1: Number Guessing Game

// Problem: This is going to be fun!

//          We will write a program that generates a random number and asks the player to guess it.
//          If the player's guess is higher than the actual number, then the program displays "Lower Number please".
//          Similarly, if the users's guess is too low, the program prints "Higher Number please".

//          When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number.

// Hints: Use loops
//        Use a random number generator

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int Guess,Random_Number,n_Guesses=0;
    srand(time(0));
    Random_Number=rand()%100+1;
    do
    {
        printf("Guess the Number between 1 to 100: ");
        scanf("%d",&Guess);
        if(Guess>=1&&Guess>Random_Number&&Guess<=100)
        {
            printf("Lower Number please\n\n");
        }
        else if(Guess>=1&&Guess<Random_Number&&Guess<=100)
        {
            printf("Higher Number please\n\n");
        }
        else if(Guess>=1&&Guess<=100)
        {
            printf("You guessed it in %d attempts\n",n_Guesses);
        }
        n_Guesses++;
    }while(Guess!=Random_Number);
    getch();
    return 0;
}
*/