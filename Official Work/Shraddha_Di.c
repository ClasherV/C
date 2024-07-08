/*//Calculate the Area of a Square (Sides are given)

#include <stdio.h>
#include <conio.h>
int main()
{
    int Side=8;
    printf("Enter the Side of Square:");
    scanf("%d",&Side);
    printf("Area of Square is:%d",Side*Side);
    getch();
    return 0;
}*/

/*//Calculate the Area of a Circle(Radius of the Circle is given)

#include <stdio.h>
#include <conio.h>
int main()
{
    int Radius;
    float pi=3.14;
    printf("Enter the Radius of Circle:");
    scanf("%d",&Radius);
    printf("Area of the Circle is:%f",pi*Radius*Radius);
    getch();
    return 0;
}*/

/*//Write a Program to find Perimeter of a Rectangle(Take Lenth and Breadth of the Rectangle from the User)

#include <stdio.h>
#include <conio.h>
int main()
{
    int Length,Breadth;
    printf("Enter Length of the Rectangle:");
    scanf("%d",&Length);
    printf("Enter Breadth of the Rectangle:");
    scanf("%d",&Breadth);
    printf("The Perimeter of the Rectangle is:%d",2*(Length+Breadth));
    getch();
    return 0;
}*/
 
/*//Take a Number n from the User and print is Cube

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n,Cube;
    printf("Enter the Value of n:");
    scanf("%d",&n);
    Cube=pow(n,3);
    printf("Cube of n is:%d",Cube);
    getch();
    return 0;
}*/

/*//Solve Type Converion in int a=1.999999

#include <stdio.h>
int main()
{
    int a=1.999999;
    printf("%d",a);
    return 0;
}*/

/*//Solve the given Arithmetic problems: 1. 5*2-2*3, 2. 5*2/2*3, 3. 5*(2/2)*3, 4. 5+2/2*3

#include <stdio.h>
int main()
{
    printf("%d %d %d %d",5*2-2*3,5*2/2*3,5*(2/2)*3,5+2/2*3);
}*/

/*//Write a Program to check if a Number is divisible by 2 or not

#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter a Number:");
    scanf("%d",&a);
    printf("%d",a%2==0);
    getch();
    return 0;
}*/

/*//Write a Program to check if a Number is Even or Odd

#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter a Number:");
    scanf("%d",&a);
    printf("%d",a%2==0);
    getch();
    return 0;
}*/

/*Print 1(true) or 0(false) for the following:
  
  (a) if its Sunday and its snowing = True
  (b) if its Monday or its raining = True
  (c) if a number is greater than 9 and less than 100 (2 digit number) = True

  #include <stdio.h>
  #include <conio.h>
  int main()
  {
    int its_Sunday,its_snowing,its_Monday,its_raining,n;
    printf("Is it Sunday:");
    scanf("%d",&its_Sunday);
    printf("Is it snowing:");
    scanf("%d",&its_snowing);
    printf("Is it Monday:");
    scanf("%d",&its_Monday);
    printf("Is it Raining:");
    scanf("%d",&its_raining);
    printf("Enter the Value of n:");
    scanf("%d",&n);
    printf("%d\n",its_Sunday&&its_snowing);
    printf("%d\n",its_Monday||its_raining);
    printf("%d",n>9&&n<100);
    getch();
    return 0;
  }*/

/*//Write a Program to print the average of 3 Numbers

#include <stdio.h>
#include <conio.h>
int main()
{   
    int a,b,c;
    printf("Enter Number 1:");
    scanf("%d",&a);
    printf("Enter Number 2:");
    scanf("%d",&b);
    printf("Enter Number 3:");
    scanf("%d",&c);
    printf("%d",(a+b+c)/3);
    getch();
    return 0;
}*/

/*Write a Program to check if given character is a digit or not

#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    printf("Enter a Character:");
    scanf("%c",&ch);
    printf("%c is %s",ch,(ch>='0'&&ch<='9')?"a Digit":"not a Digit");
    getch();
    return 0;
}*/

/*Write a Program to print the smallest Number of two

#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b;
    printf("Enter Value of a:");
    scanf("%d",&a);
    printf("Enter Value of b:");
    scanf("%d",&b);
    printf("%s",(a>b)?"a is greatest":"b is greatest");
    getch();
    return 0;
}*/

/*Write a Program to check if a Student is Pass or Fail(Marks>30 is Pass and Marks<=30 is Fail)

#include <stdio.h>
#include <conio.h>
int main()
{
    int marks;
    printf("Enter the Marks of the Student(between 0 to 100):");
    scanf("%d",&marks);
    if(marks>30&&marks<100)
    {
        printf("The Student is Passed");
    }
    else if(marks<=30&&>=0)
    {
        printf("The Student is Failed");
    }
    else
    {
        printf("Wrong Marks");
    }
    getch();
    return 0;
}*/

/*Write a Program to give Grades to a Student(marks<30 is C,30<=marks<70 is B,70<=marks<90 is A,90<=marks<=100 is A+)

#include <stdio.h>
#include <conio.h>
int main()
{
    int marks;
    printf("Enter the Marks of the Student(between 0 to 100):");
    scanf("%d",&marks);
    if(marks<30)
    {
        printf("Your Grade is C");
    }
    else if(30<=marks<70)
    {
        printf("Your Grade is B");
    }
    else if(70<=marks<90)
    {
        printf("Your Grade is A");
    }
    else if(90<=marks<=100)
    {
        printf("Your Grade is A+");
    }
    getch();
    return 0;
}*/

/*Write a Program to find if a Character entered by the User is Uppercase or not

#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    printf("Enter the Character:");
    scanf("%c",&ch);
    if('A'<=ch&&ch<='Z')
    {
        printf("Given Character is in Uppercase");
    }
    else
    {
        printf("Given Character is in Lowercase");
    }
    getch();
    return 0;
}*/

/*Write a Program to find if the given Number is an Armstrong Number or not

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int number, originalNumber, n = 0;
    int digit1, digit2, digit3;

    // Input the number from the user
    printf("Enter a three-digit integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // Count the number of digits
    n = (number > 99 && number < 1000) ? 3 : 0;

    // Calculate the sum of cubes of digits
    digit1 = number / 100;
    digit2 = (number / 10) % 10;
    digit3 = number % 10;

    int result = (pow(digit1, n) + pow(digit2, n) + pow(digit3, n));

    // Check if the number is an Armstrong number
    if (result == originalNumber)
        printf("%d is an Armstrong number.\n", originalNumber);
    else
        printf("%d is not an Armstrong number.\n", originalNumber);
    getch();
    return 0;
}*/

/*Write a Program to check if the given Number is a Natural Number or not

#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter the Number:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("Given Number is a Natural Number");
    }
    else
    {
        printf("Given Number is not a Natural Number");
    }
    getch();
    return 0;
}*/

/*Print the Numbers from 0 to 10

#include <stdio.h>
#include <conio.h>
int main()
{
    for(int i=0;i<=10;i=i+1)
    {
        printf("%d\n",i);
    }
    getch();
    return 0;
}*/

/*Print the Numbers from 0 to n if n is given by the User(n=4)

#include <stdio.h>
#include <conio.h>
int main()
{
    int i=0,n;
    printf("Enter the Value of n:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    getch();
    return 0;
}*/

//Print the Sum of first n Natural Numbers(n=4) also Print them in Reverse

/*#include <stdio.h>
#include <conio.h>
int main()
{
    int Sum=0,n;
    printf("Enter the Value of n:");
    scanf("%d",&n);

    // for(int i=1;i<=n;i++)
    // {
    //     Sum=Sum+i;
    // }
    // printf("Sum is %d\n",Sum);
    // for(int i=n;i>=1;i--)
    // {
    //     printf("%d",i);
    // }

    // for(int i=1,j=n;i<=n&&j>=1;i++,j--)
    // {
    //     Sum=Sum+i;
    //     printf("%d\n",j);
    // }
    // printf("Sum is %d",Sum);

    for(int j=n;j>=1;j--)
    {
        Sum=Sum+j;
        printf("%d\n",j);
    }
    printf("Sum is %d",Sum);
getch();
return 0;
}*/

/*Print the Table of a Number input by the User(n=2)

#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter the Value of n:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        printf("%d\n",i*n);
    }
    getch();
    return 0;
}*/

/*Keep taking Numbers as Input from User until User Enters an Odd Number

#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    // for(int i=1;;i++)
    // {
    //     printf("Enter a Number:");
    //     scanf("%d",&n);
    //     if(n%2!=0)
    //     break;
    // }
    // printf("You can only Enter Even Numbers, Ram Ram");
    do
    {
        printf("Enter a Number:");
        scanf("%d",&n);
        if(n%2!=0)
        {
            break;
        }
    }
    while(1);
    printf("Ram Ram Bhai sareya ne");
    getch();
    return 0;
}*/

/*Keep taking Numbers as Input from User until User Enters a Number which is Multiple of 7

#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    do
    {
        printf("Enter a Number:");
        scanf("%d",&n);
        if(n%7==0)
        {
            break;
        }
    }while(1);
    printf("Radhe Radhe");
    getch();
    return 0;
}*/

/*Print all Numbers from 1 to 10 except 6

#include <stdio.h>
#include <conio.h>
int main()
{
    for(int i=1;i<=10;i++)
    {
        if(i==6)
        {
            continue;
        }
        printf("%d\n",i);
    }
    getch();
    return 0;
}*/

/*Print all the Odd Numbers from 5 to 50

#include <stdio.h>
#include <conio.h>
int main()
{
    // for(int i=5;i<=50;i++)
    // {
    //     if(i%2==0)
    //     {
    //         continue;
    //     }
    //     printf("%d\n",i);  
    // }

    for(int i=5;i<=50;i++)
    {
        if(i%2!=0)
        {
            printf("%d",i);
        }
    }
    getch();
    return 0;
}*/

/*Print the Factorial of a Number

#include <stdio.h>
#include <conio.h>
int main()
{
    int n,Factorial=1;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        Factorial=Factorial*i;
    }
    printf("Final Factorial is %d",Factorial);
    getch();
    return 0;
}*/

/*Print Reverse of the for a Number n

#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&
    n);
    for(int i=10;i>=1;i--)
    {
        printf("%d\n",i*n);
    }
    getch();
    return 0;
}*/

/*Calculate the Sum of all Numbers between 5 and 50(including 5 and 50)

#include <stdio.h>
#include <conio.h>
int main()
{
    int Sum=0;
    for(int i=5;i<=50;i++)
    {
        Sum+=i;
    }
    printf("Sum is %d",Sum);
    getch();
    return 0;
}*/

/*Search on what a Nested Loop is and Print a Star Pattern using it

#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter the Number of Rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%c",'*');
        }
        printf("\n");
    }
    getch();
    return 0;
}*/

//Write a Program to check if a Number is Prime or not

#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i;
    printf("Enter a Number:");
    scanf("%d",&n);
    for( i=2;i<n;i++)
    
   {     if( n%i==0)
        {
            printf("Given Number is not a Prime Number");
            break;
            
        }
        else
        {
            printf("Given Number is a Prime no");
            break ;
        }
    
 }   getch();
    return 0;
}

//Write a Program to Print Prime Numbers in a Range