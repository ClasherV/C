/*
// Write a Program to Add two Numbers in C

#include <stdio.h>
int main()
{
    int a = 5, b = 6;
    printf("%d + %d = %d\n", a, b, a + b);
    return 0;
}
*/

/*
// Write a C Program to Print the Area of a Rectangle

// (a) Using hard Coded Inputs
#include <stdio.h>
int main()
{
    int Length=10,Breadth=8;
    printf("Area of Rectangle = %d m^2\n",Length*Breadth);
    return 0;
}

// (b) Using Inputs supplied by the User
#include <stdio.h>
int main()
{
    int Length,Breadth;
    printf("Enter the Length of Rectangle (in Metres): ");
    scanf("%d",&Length);
    printf("Enter the Breadth of Rectangle (in Metres): ");
    scanf("%d",&Breadth);
    printf("Area of Rectangle is: %d m^2\n",Length*Breadth);
    return 0;
}
*/

/*
//Calculate the Area of a Circle and modify the same Program to calculate the Volume of a Cylinder (its Radius and Height are given)

#include <stdio.h>
int main()
{
    //Area of Circle
    int Radius=5;
    const float pi=3.14;
    Area=pi*Radius*Radius;
    printf("Area of Circle = %f m^2\n",Area);

    //Volume of Cylinder
    int Height=7;
    Volume=Area*Height;
    printf("Volume of Cylinder = %f m^3\n",Volume);
    return 0;
}
*/

/*
// Write a Program to Convert Degree Celsius(Degree Centigrade) Temperature to Degree Fahrenheit

#include <stdio.h>
int main()
{
    float Celsius;
    printf("Enter the Temperature (in Degree Celsius): ");
    scanf("%d",&Celsius);
    float Fahrenheit=Celsius*(9/5)+32;
    printf("%f Degree Celsius in Degree Fahrenheit is: %f\n",Celsius,Fahrenheit);
    return 0;
}
*/

/*
// Write a Program to Calculate Simple Interest for a Set of Values representing Principal, No. of Years and Rate of Interest

#include <stdio.h>
int main()
{
    int Principal,Rate,Number_of_Years;
    printf("Enter the Value of Principal: ");
    scanf("%d",&Principal);
    printf("Enter the Value of Rate: ");
    scanf("%d",&Rate);
    printf("Enter the Number of Years: ");
    scanf("%d",&Number_of_Years);
    int Simple_Interest=(Principal*Rate*Number_of_Years)/100;
    printf("The Simple Interest at Principal = %d, Rate = %d and Number of Years = %d is: %d\n",Principal,Rate,Number_of_Years,Simple_Interest);
    return 0;
}
*/

/*
// int k=3.0/9 Value of k and why

#include <stdio.h>
int main()
{
    int k=3.0/9;
    printf("%d\n",k);
    printf("%f\n",k);
    printf("%d\n",3.0/9);
    printf("%f\n",3.0/9);
    return 0;
}
*/

/*
// Which of the following is invalid in C:

// (a) int a;b=a;

#include <stdio.h>
int main()
{
    int a;
    b=a; //Error so Ivalid
    return 0;
}

//(b) int V=3^3;

#include <stdio.h>
int main()
{
    int V=3^3;
    printf("%d\n",V); //Wrong Output but Valid
    return 0;
}

// (c) char dt='17 December 2023';

#include <stdio.h>
int main()
{
    char dt='17 December 2023'; //Invalid
    printf("%c\n",dt);
    return 0;
}
*/

/*
// What Datatype will 3.0/8-2 return?

#include <stdio.h>
int main()
{
    printf("%f\n",3.0/8-2);
    printf("%d\n",3.0/8-2);
    return 0;
}
*/

/*
// Write a Program to Check whether a Number is Divisible by 97 or not

#include <stdio.h>
int main()
{
    int Number;
    printf("Enter a Number: ");
    scanf("%d",&Number);
    printf("If Remainder is 0 then %d is Divisible by 97 and Vice Versa\n",Number);
    printf("%d\n",Number%97);
    return 0;
}
*/


/*
// Explain Step by Step evaluation of 3*x/y-z+k where x=2 y=3, z=4 and k=1

#include <stdio.h>
int main()
{
    int k=1,x=2,y=3,z=3;
    printf("%d\n",3*x/y-z+k);
    return 0;
}
*/

/*
// 3.0 + 1 will be:

// (a) Integer
// (b) Floating Point Number
// (c) Character

#include <stdio.h>
int main()
{
    printf("%d\n",3.0+1);
    printf("%f\n",3.0+1);
    return 0;
}
*/

/*
// Write a Program to Find Grade of a Student (Marks are taken as Input) based on below Criteria:
// 90-100=A
// 80-90=B
// 70-80=C
// 60-70=D
// <60=F

#include <stdio.h>
int main()
{
    int Marks;
    printf("Enter the Marks: ");
    scanf("%d",&Marks);
    if(Marks>=90&&Marks<=100)
    {
        printf("You got an A Grade\n");
    }
    else if(Marks>=80&&Marks<90)
    {
        printf("You got a B Grade\n");
    }
    else if(Marks>=70&&Marks<80)
    {
        printf("You got a C Grade\n");
    }
    else if(Marks>=60&&Marks<70)
    {
        printf("You got a D Grade\n");
    }
    else
    {
        printf("You got an F Grade\n");
    }
    return 0;
}
*/

/*
// What will be the Output of this Program:

#include <stdio.h>
int main()
{
    int a=10;
    if(a=11)
    printf("I am 11");
    else
    printf("I am not 11");
    return 0;
}
*/

/*
// Write a Program to find out whether a Student is Pass or Fail, if it requires total 40% and atleast 33% in each Subject to Pass. Assume 3 Subjets and take Marks as an Input from the User

#include <stdio.h>
int main()
{
    int Physics,Chemistry,Mathematics;

    printf("Enter the Marks of Physics (between 0-100): ");
    scanf("%d",&Physics);

    printf("Enter the Marks of Chemistry (between 0-100): ");
    scanf("%d",&Chemistry);

    printf("Enter the Marks of Mathematics (between 0-100): ");
    scanf("%d",&Mathematics);

    float Total=((float)Physics+(float)Chemistry+(float)Mathematics)/300*100;

    if(Total<40||Physics<33||Chemistry<33||Mathematics<33)
    {
        printf("Your Total Percentage is %f and Your are Failed\n",Total);
    }
    else
    {
        printf("Your Total Percentage is %f and You are Passed\n",Total);
    }

    return 0;
}
*/

/*
// Calculate Income Tax paid by an Employee to the Government as per the Slabs mentioned below:

// Income Slab          Tax
//  2.5L-5.0L            5%
//  5.0L-10.0L          20%
//  Above 10.0L         30%

// Note that there is no Tax below 2.5L. Take Income Amount as the Input from the User.

#include <stdio.h>
int main()
{
    float Income,Tax=0;
    printf("Enter Your Income: ");
    scanf("%f",&Income);
    if(Income>=250000&&Income<=500000)
    {
        Tax=Tax+ 0.05*(Income-250000);
    }
    if(Income>=500000&&Income<=1000000)
    {
        Tax=Tax+ 0.2*(Income-500000);
    }
    if(Income>=1000000)
    {
        Tax=Tax+ 0.3*(Income-1000000);
    }
    printf("Your net Income Tax to be paid is %f\n",Tax);
    return 0;
}
*/

/*
// Write a Program to find whether a Year entered by the User is a Leap Year or not. Take Year as an Input from the User

#include <stdio.h>
int main()
{
    int Year;
    printf("Enter an Year: ");
    scanf("%d",&Year);
    if((Year%4==0)&&((Year%400==0)||(Year%100!=0)))
    {
        printf("%d is a Leap Year\n",Year);
    }
    else
    {
        printf("%d is not a Leap Year\n",Year);
    }
    return 0;
}
*/

/*
// Write a Program to determine whether a Character Entered by the User is Lowercase or not

#include <stdio.h>
int main()
{
    char Letter;
    printf("Enter a Letter: ");
    scanf("%c",&Letter);
    if(Letter>=97&&Letter<=122)
    {
        printf("%c is Lowercase\n",Letter);
    }
    else
    {
        printf("%c is not Lowercase\n",Letter);
    }
    return 0;
}
*/

/*
// Write a Program to find Greatest of Four Numbers entered by the User

#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter 4 Numbers: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b&&a>c&&a>d)
    {
        printf("%d is Largest\n",a);
    }
    else if(b>c&&b>d)
    {
        printf("%d is Largest\n",b);
    }
    else if(c>d)
    {
        printf("%d is Largest\n",c);
    }
    else
    {
        printf("%d is Largest\n",d);
    }
    return 0;
}
*/

/*
// Write a Program to print Natural Numbers from 10 to 20 when initial Loop counter i is initialized to 0

#include <stdio.h>
int main()
{
    int i=0;
    while(i<=20)
    {
        if(i>=10)
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}
*/

/*
// Write a Program to print first n Natural Numbers using do-while Loop

#include <stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=n);
    return 0;
}
*/

/*
// Write a Program to print first n Natural Numbers using for Loop

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
*/

/*
// Write a Program to print n Natural Numbers in reverse order

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
*/

/*
// Write a Program to Print the Multiplication Table of a given Number n

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}
*/

/*
// Write a Program to Print Multiplication Table of 10 in Reversed Order

#include <stdio.h>
int main()
{
    for(int i=10;i>=1;i--)
    {
        printf("%d * %d = %d\n",10,i,10*i);
    }
    return 0;
}
*/

/*
// Write a Program to Sum first 10 Natural Numbers using while Loop

#include <stdio.h>
int main()
{
    int i=1,Sum=0,n=10;
    while(i<=n)
    {
        Sum=Sum+i;
        i++;
    }
    printf("%d",Sum);
    return 0;
}
*/

/*
// Write a Program to Sum first 10 Natural Numbers using for Loop

#include <stdio.h>
int main()
{
    int Sum=0,n=10;
    for(int i=1;i<=n;i++)
    {
        Sum=Sum+i;
    }
    printf("%d",Sum);
    return 0;
}
*/

/*
// Write a Program to Sum first 10 Natural Numbers using do-while Loop

#include <stdio.h>
int main()
{
    int i=1,Sum=0,n=10;
    do
    {
        Sum=Sum+i;
        i++;
    } while (i<=n);
    printf("%d",Sum);
    return 0;
}
*/

/*
// Write a Program to Calculate the Sum of the Numbers occurring in the Multiplication Table of 8 (consider 8*1 to 8*10)

#include <stdio.h>
int main()
{
    int n=8,Sum=0;
    for(int i=1;i<=10;i++)
    {
        Sum=Sum+n*i;
    }
    printf("%d",Sum);
    return 0;
}
*/

/*
// Write a Program to Calculate the Factorial of a given Number using a for Loop

#include <stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is: %d",n,fact);
    return 0;
}
*/

/*
// Repeat 8 using while Loop

#include <stdio.h>
int main()
{
    int i=1,n=8;
    while(i<=8)
    {
        printf("%d\n",n);
        i++;
    }
    return 0;
}
*/

/*
// Write a Program to check whether a given Number is Prime or not using for Loop

#include <stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count+=1;
        }
    }
    if(count>2&&n!=0&&n!=1&&n!=2)
    {
        printf("%d is not a Prime Number",n);
    }
    else if(n!=0&&n!=1&&n!=2)
    {
        printf("%d is a Prime Number",n);
    }
    else
    {
        printf("%d is neither Prime nor Composite",n);
    }
    return 0;
}

                    OR

#include <stdio.h>
int main()
{
    int prime=1,n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            prime=0;
            break;
        }
    }
    if(prime==0&&n!=0&&n!=1&&n!=2)
    {
        printf("%d is not a Prime Number",n);
    }
    else if(n!=0&&n!=1)
    {
        printf("%d is a Prime Number",n);
    }
    else
    {
        printf("%d is neither Prime nor Composite",n);
    }
    return 0;
}
*/

/*
// Write a Program to check whether a given Number is Prime or not using while Loop

#include <stdio.h>
int main()
{
    int i=1,n,count=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        {
            count+=1;
        }
        i++;
    }
    if(count>2&&n!=0&&n!=1&&n!=2)
    {
        printf("%d is not a Prime Number",n);
    }
    else if(n!=0&&n!=1&&n!=2) 
    {
        printf("%d is a Prime Number",n);
    }
    else
    {
        printf("%d is neither Prime nor Composite",n);
    }
    return 0;
}
*/

/*
// Write a Program to check whether a given Number is Prime or not using do-while Loop

#include <stdio.h>
int main()
{
    int i=1,n,count=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    do
    {
        if(n%i==0)
        {
            count+=1;
        }
        i++;
    }while(i<=n);
    if(count>2&&n!=0&&n!=1&&n!=2)
    {
        printf("%d is not a Prime Number",n);
    }
    else if(n!=0&&n!=1&&n!=2)
    {
        printf("%d is a Prime Number",n);
    }
    else
    {
        printf("%d is neither Prime nor Composite",n);
    }
    return 0;
}
*/

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

/*
// Write a Program with three Functions:

// (i) Good Morning Function which prints "Good Morning"
// (ii) Good Afternoon Function which prints "Good Afternoon"
// (iii) Good Night Function which prints "Good Night"

#include <stdio.h>
void Good_Morning();
void Good_Afternoon();
void Good_Night();
int main()
{
    Good_Morning();
    Good_Afternoon();
    Good_Night();
    return 0;
}
void Good_Morning()
{
    printf("Good Morning\n");
}
void Good_Afternoon()
{
    printf("Good Afternoon\n");
}
void Good_Night()
{
    printf("Good Night\n");
}

                      OR

#include <stdio.h>
void Good_Morning();
void Good_Afternoon();
void Good_Night();
int main()
{
    Good_Morning();
    return 0;
}
void Good_Morning()
{
    printf("Good Morning\n");
    Good_Afternoon();
}
void Good_Afternoon()
{
    printf("Good Afternoon\n");
    Good_Night();
}
void Good_Night()
{
    printf("Good Night\n");
}
*/

/*
// Use the Library Functions to calculate the Area of a Square with side a

#include <stdio.h>
#include <math.h>
int main()
{
    int side;
    printf("Enter the Side: ");
    scanf("%d",&side);
    printf("Area is %f",pow(side,2));
    return 0;
}
*/

/*
// Write a Program using Functions to find Average of three Numbers

#include <stdio.h>
float Average(int a,int b, int c);
int main()
{
    int a,b,c;
    printf("Enter the Value of a: ");
    scanf("%d",&a);
    printf("Enter the Value of b: ");
    scanf("%d",&b);
    printf("Enter the Value of c: ");
    scanf("%d",&c);
    printf("Average = %f\n",Average(a,b,c));
    return 0;
}
float Average(int a,int b,int c)
{
    float result=(float)(a+b+c)/3;
    return result;
}
*/

/*
// Write a Function to convert Celsius Temperature to Fahrenheit

#include <stdio.h>
float Temperature(float a);
int main()
{
    float Celsius;
    printf("Enter the Tempwrature(in Celsius): ");
    scanf("%f",&Celsius);
    printf("\nTemperature(in Fahrenheit) = %f",Temperature(Celsius));
    return 0;
}
float Temperature(float Celsius)
{
    float Fahrenheit=(Celsius*9/5)+32;
    return Fahrenheit;
}
*/

/*
// Write a Program to calculate Force of Attraction on a Body of Mass m exerted by Earth (g=9.8 m/s^2)

#include <stdio.h>
const float g=9.8;
float Force(float m);
int main()
{
    float m;
    printf("Enter the Mass: ");
    scanf("%f",&m);
    printf("%f",Force(m));
}
float Force(float m)
{
    float F=m*g;
    return F;
}
*/

/*
// Write a Program to Calculate Factorial of a Number using Recursion

#include <stdio.h>
int Factorial(int n);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    if(n>33)
    {
        printf("The Factorial of the given Number is too big for Integer Value, try a lesser Number");
    }
    else
    {
        printf("Factorial of %d is = %d",n,Factorial(n));
    }
    return 0;
}
int Factorial(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n*Factorial(n-1);
    }
}
*/

/*
// Write a Program using Recursion to calculate nth Element of Fibonacci Series

#include <stdio.h>
int Fibonacci(int n);
int main()
{
    int n;
    printf("Enter the nth Number: ");
    scanf("%d",&n);
    printf("%dth Element is %d",n,Fibonacci(n));
    return 0;
}
int Fibonacci(int n)
{
    if(n<=0)
    {
        printf("Enter a Positive Number");
        return -1;
    }
    else if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}
*/

/*
// What will the following Code produce in a C Program:

// printf("%d %d %d\n",a,++a,a++);

#include <stdio.h>
int main()
{
    int a=5;
    printf("%d %d %d\n",a,++a,a++);
    return 0;
}
*/

/*
// Write a Recursive Function to Calculate Sum of first n Natural Numbers

#include <stdio.h>
int Sum(int n);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("Sum of %d Natural Numbers is %d",n,Sum(n));
    return 0;
}
int Sum(int n)
{
    if(n>0)
    {
        return n+Sum(n-1);
    }
}
*/

/*
// Write a Program using Functions to Print the following Pattern(first n lines):

// *
// * * *
// * * * * *

#include <stdio.h>
void Pattern(int n);
int main()
{
    int n;
    printf("Enter the Number of Rows: ");
    scanf("%d",&n);
    Pattern(n);
    return 0;
}
void Pattern(int n)
{
    if(n==1)
    {
        printf("*\n");
        return;
    }
    Pattern(n-1);
    for(int i=0;i<2*n-1;i++)
    {
        printf("*");
    }
    printf("\n");
}
*/

/*
// Write a Program to Print the following Pattern using Iterative Strategy using for Loop

// *
// * * *
// * * * * *

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number of Rows: ");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/

/*
// Write a Program to print the Address of a Variable. Use this Address to get the Value of a Variable

#include <stdio.h>
int main()
{
    int a=10;
    int* P=&a;
    printf("Address of a = %d\n",P);
    printf("%d",*P);
    return 0;
}
*/

/*
// Write a Program having a Variable i. Print the Address of i. Pass this Variable to a Function and print its Address. Are these Address same? Why?

#include <stdio.h>
void Address(int n);
int main()
{
    int i=10;
    printf("Address of i = %d\n",&i);
    Address(i);
    return 0;
}
void Address(int n)
{
    printf("Address of i = %d\n",&n);
}
*/

/*
// Write a Program to change the Value of a Variable to ten times of its current Value. Write a Function and pass the Value by reference. Then try by using call by value and verify that it doesn't change the value of the said Variable.

#include <stdio.h>
void Value(int* n);
int main()
{
    int a=10;
    int* P=&a;
    printf("%d\n",*P);
    Value(P);
    printf("%d",a);
    return 0;
}
void Value(int* n)
{
    *n=10**n;
}

                                           &&

/*
#include <stdio.h>
void Value(int n);
int main()
{
    int a=10;
    printf("%d\n",a);
    Value(a);
    printf("%d",a);
    return 0;
}
void Value(int n)
{
    n=10*n;
}
*/

/*
// Write a Program using a Function which calculates the Sum and Average of two numbers. Use Pointers and print the values of Sum and Average in main()

#include <stdio.h>
void Sum_and_Average(int m,int n,int* Sum,float* Average);
int main()
{
    int a=10,b=5,Sum;
    float Average;
    Sum_and_Average(a,b,&Sum,&Average);
    printf("Sum = %d\n",Sum);
    printf("Average = %f\n",Average);
    return 0;
}
void Sum_and_Average(int m,int n,int* Sum,float* Average)
{
    *Sum=m+n;
    *Average=(float)(*Sum)/2;
}
*/

/*
// Write a Program to print the value of a Variable i by using Pointer to Pointer type of Variable

#include <stdio.h>
int main()
{
    int i=10;
    int* P=&i;
    int** Q=&P;
    printf("%d",**Q);
    return 0;
}
*/

/*
// Try the following Operations on another Variable by creating Pointers in a separate Program. Demonstrate all the four Operations

// (i) Addition of a Number to a Pointer
// (ii) Subtraction of a number from a Pointer
// (iii) Subtraction of one Pointer from another Pointer
// (iv) Comparison of two Pointer Variables

#include <stdio.h>
int main()
{
    int a=10;
    int* P=&a;
    printf("%d\n",P);
    P+=1;
    printf("%d",P);
    return 0;
}

                                    &&

#include <stdio.h>
int main()
{
    int a=10;
    int* P=&a;
    printf("%d\n",P);
    P-=1;
    printf("%d",P);
    return 0;
}

                                    &&

#include <stdio.h>
int main()
{
    int a=10,b=5;
    int* P=&a;
    int* Q=&b;
    printf("%d %d\n",P,Q);
    printf("%d",P-Q);
    return 0;
}

                                 &&

#include <stdio.h>
int main()
{
    int a=10,b=5;
    int* P=&a;
    int* Q=&b;
    printf("%d %d\n",P,Q);
    printf("%d",P==Q);
    return 0;
}
*/

/*
// Create a 2-D Array by taking Input from the User. Write a Display Function to Print the Content of this 2-D Array on the Screen.

#include <stdio.h>
void Display(int m,int n,int arr[m][n])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n\n");
    }
}
int main()
{
    int m,n;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    printf("Enter the Number of Columns: ");
    scanf("%d",&n);
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the %d,%d Element: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    Display(m,n,arr);
    return 0;
}
*/

/*
// Create an Array of 10 Numbers. Verify using Pointer Arithmetic that (ptr+2) points to the third element where ptr is a Pointer pointing to the first Element of the Array.

#include <stdio.h>
int main()
{
    int arr[10];
    int* ptr=arr;
    ptr=ptr+2;
    if(ptr==&arr[2])
    {
        printf("Points to the same location");
    }
    else
    {
        printf("Does not points to the same location");
    }
    return 0;
}
*/

/*
// If S[3] is a 1-D Array of Integers then *(S+3) refers to the third Element:

// (i) True
// (ii) False
// (iii) Depends

#include <stdio.h>
int main()
{
    int S[3]={1,2,3};
    printf("%d %d",&S[2],*(S+3));
    return 0;
}
*/

/*
// Write a Program to create an Array of 10 Integers and store multiplication table of 5 in it.

#include <stdio.h>
int main()
{
    int Multiply[10];
    for(int i=0;i<10;i++)
    {
        Multiply[i]=5*(i+1);
        printf("%d ",Multiply[i]);
    }
    return 0;
}
*/

/*
// Write a Program to create an Array of 10 Integers and store multiplication table of a number n in it.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    int Multiply[n];
    for(int i=0;i<10;i++)
    {
        Multiply[i]=n*(i+1);
        printf("%d ",Multiply[i]);
    }
    return 0;
}
*/

/*
// Write a Program containing a Function which reverses the Array passed to it.

#include <stdio.h>
void Array_Reverse(int n,int arr[n])
{
    for(int i=0;i<=n/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }}
int main()
{
    int n;
    printf("Enter the Number of Elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d Element: ",i+1);
        scanf("%d",&arr[i]);
    }
    Array_Reverse(n,arr);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
*/

/*
// Write a program containing Functions which counts the number of Positive integers in an Array.

#include <stdio.h>
int Pnum(int n,int arr[n])
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=1)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n,count=0;
    printf("Enter the Number of Elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d Element: ",i+1);
        scanf("%d",&arr[i]);
    }
    count=Pnum(n,arr);
    printf("%d",count);
    return 0;
}
*/

