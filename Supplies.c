/*
//Q.1 Write a Program to check whether a given Number is Positive or Negative

#include <stdio.h>
#include <conio.h>
void main()
{
  int Number;
  printf("Enter a Number: ");
  scanf("%d",&Number);
  if(Number<0)
  {
    printf("%d is a Negative Number\n",Number);
  }
  else
  {
    printf("%d is a Positive Number\n",Number);
  }
  getch();
}

// O/p 1: Enter a Number: -5
//        -5 is a Negative Number
//
// O/p 2: Enter a Number: 5
//        5 is a Positive Number


/*
//Q.2 Write a Program to check whether a given Number is Even or Odd

#include <stdio.h>
#include <conio.h>
void main()
{
  int Number;
  printf("Enter a Number: ");
  scanf("%d",&Number);
  if(Number%2==0)
  {
    printf("%d is an Even Number\n",Number);
  }
  else
  {
    printf("%d is an Odd Number\n",Number);
  }
  getch();
}

// O/p 1: Enter a Number: 2
//        2 is an Even Number
//
// O/p 2: Enter a Number: 3
//        3 is an Odd Number
*/

/*
//Q.3 Write a Program to find the Largest among 3 Numbers

#include <stdio.h>
#include <conio.h>
void main()
{
  int Number1,Number2,Number3;
  printf("Enter the Number 1: ");
  scanf("%d",&Number1);
  printf("Enter the Number 2: ");
  scanf("%d",&Number2);
  printf("Enter the Number 3: ");
  scanf("%d",&Number3);
  if(Number1>Number2)
  {
    if(Number1>Number3)
    {
      printf("Number 1 = %d is the Largest Number",Number1);
    }
    else
    {
      printf("Number 3 = %d is the Largest Number",Number3);
    }
  }
  else
  {
    if(Number2>Number3)
    {
      printf("Number 2 = %d is the Largest Number",Number2);
    }
    else
    {
      printf("Number 3 = %d is the Largest Number",Number3);
    }
  }
  getch();
}

// O/p 1: Enter the Number 1: 10
//        Enter the Number 2: 8
//        Enter the Number 3: 6
//        Number 1 = 10 is the Largest NumberEnter 3 Numbers: 10 8 6
//
// O/p 2: Enter the Number 1: 10
//        Enter the Number 2: 6
//        Enter the Number 3: 8
//        Number 1 = 10 is the Largest NumberEnter 3 Numbers: 10 6 8
//
// O/p 3: Enter the Number 1: 8
//        Enter the Number 2: 6
//        Enter the Number 3: 10
//        Number 3 = 10 is the Largest NumberEnter 3 Numbers: 8 6 10
//
// O/p 4: Enter the Number 1: 8
//        Enter the Number 2: 10
//        Enter the Number 3: 6
//        Number 2 = 10 is the Largest NumberEnter 3 Numbers: 8 10 6
//
// O/p 5: Enter the Number 1: 6
//        Enter the Number 2: 10
//        Enter the Number 3: 8
//        Number 2 = 10 is the Largest NumberEnter 3 Numbers: 6 10 8
//
// O/p 6: Enter the Number 1: 6
//        Enter the Number 2: 8
//        Enter the Number 3: 10
//        Number 3 = 10 is the Largest NumberEnter 3 Numbers: 6 8 10
*/

/*
//Q.4 Write a Program to check whether a given Character is in Uppercase/Lowercase or a Digit

#include <stdio.h>
#include <conio.h>
void main()
{
  int n;
  char Character;
  printf("Enter a Character: ");
  scanf("%c",&Character);
  if(Character>='A'&&Character<='Z')
  {
    printf("%c is an Uppercase Character",Character);
  }
  else if(Character>='a'&&Character<='z')
  {
    printf("%c is a Lowercase Character",Character);
  }
  else if(Character>='0'&&Character<='9')
  {
    printf("Entered Character is a Digit");
  }
  else
  {
    printf("Entered Character is an Invalid Character");
  }
}

// O/p 1: Enter a Character: A
//        A is an Uppercase Character
//
// O/p 2: Enter a Character: V
//        V is an Uppercase Character
//
// O/p 3: Enter a Character: Z
//        Z is an Uppercase Character
//
// O/p 4: Enter a Character: a
//        a is a Lowercase Character
//
// O/p 5: Enter a Character: v
//        v is a Lowercase Character
//
// O/p 6: Enter a Character: z
//        z is a Lowercase Character
//
// O/p 7: Enter a Character: 0
//        Entered Character is a Digit
//
// O/p 8: Enter a Character: 5
//        Entered Character is a Digit
//
// O/p 9: Enter a Character: 9
//        Entered Character is a Digit
//
// O/p 10: Enter a Character: 10
//         Entered Character is a Digit
//
// O/p 11: Enter a Character: @
//         Entered Character is an Invalid Character
//
// O/p 12: Enter a Character: -5
//         Entered Character is an Invalid Character
*/

/*
//Q.5 Write a Program to check whether a given Character is a Vowel or not

#include <stdio.h>
#include <conio.h>
void main()
{
  char Character;
  printf("Enter a Character: ");
  scanf("%c",&Character);
  switch(Character)
  {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u': printf("%c is a Vowel",Character);
              break;
    default: if((Character>='A'&&Character<='Z')||(Character>='a'&&Character<='z'))
             {
              printf("%c is not a Vowel",Character);
             }
             else
             {
              printf("Entered Character is an Invalid Character");
             }
  }
  getch();
}

// O/p 1: Enter a Character: A
//        A is a Vowel
//
// O/p 2: Enter a Character: a
//        a is a Vowel
//
// O/p 3: Enter a Character: E
//        E is a Vowel
//
// O/p 4: Enter a Character: e
//        e is a Vowel
//
// O/p 5: Enter a Character: I
//        I is a Vowel
//
// O/p 6: Enter a Character: i
//        i is a Vowel
//
// O/p 7: Enter a Character: U
//        U is a Vowel
//
// O/p 8: Enter a Character: u
//        u is a Vowel
//
// O/p 9: Enter a Character: V
//        V is not a Vowel
//
// O/p 10: Enter a Character: 12
//         Entered Character is an Invalid Character
*//*
//Q.5 Write a Program to check whether a given Character is a Vowel or not

#include <stdio.h>
#include <conio.h>
void main()
{
  char Character;
  printf("Enter a Character: ");
  scanf("%c",&Character);
  switch(Character)
  {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u': printf("%c is a Vowel",Character);
              break;
    default: if((Character>='A'&&Character<='Z')||(Character>='a'&&Character<='z'))
             {
              printf("%c is not a Vowel",Character);
             }
             else
             {
              printf("Entered Character is an Invalid Character");
             }
  }
  getch();
}

// O/p 1: Enter a Character: A
//        A is a Vowel
//
// O/p 2: Enter a Character: a
//        a is a Vowel
//
// O/p 3: Enter a Character: E
//        E is a Vowel
//
// O/p 4: Enter a Character: e
//        e is a Vowel
//
// O/p 5: Enter a Character: I
//        I is a Vowel
//
// O/p 6: Enter a Character: i
//        i is a Vowel
//
// O/p 7: Enter a Character: U
//        U is a Vowel
//
// O/p 8: Enter a Character: u
//        u is a Vowel
//
// O/p 9: Enter a Character: V
//        V is not a Vowel
//
// O/p 10: Enter a Character: 12
//         Entered Character is an Invalid Character
*/

/*
//Q.8 Write a Program to make simple Calculator using Switch Case

#include <stdio.h>
#include <conio.h>
void main()
{
  printf("This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%%(Modulo)\n");
  printf("Modulo means if You Divide 2 Numbers then Modulo will give its Remainder\n");
  printf("Float means Decimal Values\n");
  printf("Operand = The Number on which You want to Perform Operations\n");
  printf("Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%%\n");
  printf("You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform\n\n");
  float Operand_1,Operand_2;
  char Operator;
  printf("Enter the Operand 1 (Integers or Float Value only): ");
  scanf("%f",&Operand_1);
  printf("Enter an Operator(+,-,*,/,%%): ");
  scanf(" %c",&Operator);
  printf("Enter the Operand 2 (Integers or Float Value only): ");
  scanf("%f",&Operand_2);
  switch(Operator)
  {
    case '+': printf("\nOperation: %f %c %f = %f",Operand_1,Operator,Operand_2,Operand_1+Operand_2);
              break;
    case '-': printf("\nOperation: %f %c %f = %f",Operand_1,Operator,Operand_2,Operand_1-Operand_2);
              break;
    case '*': printf("\nOperation: %f %c %f = %f",Operand_1,Operator,Operand_2,Operand_1*Operand_2);
              break;
    case '/': if(Operand_2!=0)
              {
                printf("\nOperation: %f %c %f = %f",Operand_1,Operator,Operand_2,Operand_1/Operand_2);
                break;
              }
              else
              {
               printf("\nDivision by 0 is not defined");
               break;
              }
    case '%': if(Operand_2!=0)
              {
                printf("\nOperation: %d %c %d = %d",(int)Operand_1,Operator,(int)Operand_2,(int)Operand_1%(int)Operand_2);
                break;
              }  
              else
              {
                printf("\nDivision by 0 is not defined");
                break;
              }
    default: printf("\nEnter a Valid Operator");               
  }
  getch();
}

// O/p 1: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//        Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//        Float means Decimal Values
//        Operand = The Number on which You want to Perform Operations
//        Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//        You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//        
//        Enter the Operand 1 (Integers or Float Value only): 10
//        Enter an Operator(+,-,*,/,%): +
//        Enter the Operand 2 (Integers or Float Value only): 5
//        
//        Operation: 10.000000 + 5.000000 = 15.000000
//
// O/p 2: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//        Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//        Float means Decimal Values
//        Operand = The Number on which You want to Perform Operations
//        Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//        You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//        
//        Enter the Operand 1 (Integers or Float Value only): 10
//        Enter an Operator(+,-,*,/,%): +
//        Enter the Operand 2 (Integers or Float Value only): 2.5
//        
//        Operation: 10.000000 + 2.500000 = 12.500000
//
// O/p 3: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//        Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//        Float means Decimal Values
//        Operand = The Number on which You want to Perform Operations
//        Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//        You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//        
//        Enter the Operand 1 (Integers or Float Value only): 5.5
//        Enter an Operator(+,-,*,/,%): +
//        Enter the Operand 2 (Integers or Float Value only): 2.75
//        
//        Operation: 5.500000 + 2.750000 = 8.250000
//
// O/p 4: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//        Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//        Float means Decimal Values
//        Operand = The Number on which You want to Perform Operations
//        Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//        You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//        
//        Enter the Operand 1 (Integers or Float Value only): 10
//        Enter an Operator(+,-,*,/,%): -
//        Enter the Operand 2 (Integers or Float Value only): 5
//        
//        Operation: 10.000000 - 5.000000 = 5.000000
//
// O/p 5: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//        Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//        Float means Decimal Values
//        Operand = The Number on which You want to Perform Operations
//        Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//        You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//        
//        Enter the Operand 1 (Integers or Float Value only): 10
//        Enter an Operator(+,-,*,/,%): -
//        Enter the Operand 2 (Integers or Float Value only): 2.5
//        
//        Operation: 10.000000 - 2.500000 = 7.500000
//
// O/p 6: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//        Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//        Float means Decimal Values
//        Operand = The Number on which You want to Perform Operations
//        Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//        You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//        
//        Enter the Operand 1 (Integers or Float Value only): 5.5
//        Enter an Operator(+,-,*,/,%): -
//        Enter the Operand 2 (Integers or Float Value only): 2.75
//        
//        Operation: 5.500000 - 2.750000 = 2.750000
//
// O/p 7: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//        Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//        Float means Decimal Values
//        Operand = The Number on which You want to Perform Operations
//        Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//        You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//        
//        Enter the Operand 1 (Integers or Float Value only): 10
//        Enter an Operator(+,-,*,/,%): *
//        Enter the Operand 2 (Integers or Float Value only): 5
//        
//        Operation: 10.000000 * 5.000000 = 50.000000
//
// O/p 8: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//        Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//        Float means Decimal Values
//        Operand = The Number on which You want to Perform Operations
//        Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//        You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//        
//        Enter the Operand 1 (Integers or Float Value only): 10
//        Enter an Operator(+,-,*,/,%): *
//        Enter the Operand 2 (Integers or Float Value only): 2.5
//        
//        Operation: 10.000000 * 2.500000 = 25.000000
//
// O/p 9: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//        Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//        Float means Decimal Values
//        Operand = The Number on which You want to Perform Operations
//        Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//        You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//        
//        Enter the Operand 1 (Integers or Float Value only): 5.5
//        Enter an Operator(+,-,*,/,%): *
//        Enter the Operand 2 (Integers or Float Value only): 2.75
//        
//        Operation: 5.500000 * 2.750000 = 15.125000
//
// O/p 10: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//         Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//         Float means Decimal Values
//         Operand = The Number on which You want to Perform Operations
//         Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//         You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//         
//         Enter the Operand 1 (Integers or Float Value only): 5
//         Enter an Operator(+,-,*,/,%): /
//         Enter the Operand 2 (Integers or Float Value only): 10
//         
//         Operation: 5.000000 / 10.000000 = 0.500000
//
// O/p 11: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//         Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//         Float means Decimal Values
//         Operand = The Number on which You want to Perform Operations
//         Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//         You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//         
//         Enter the Operand 1 (Integers or Float Value only): 10
//         Enter an Operator(+,-,*,/,%): /
//         Enter the Operand 2 (Integers or Float Value only): 2.5
//         
//         Operation: 10.000000 / 2.500000 = 4.000000
//
// O/p 12: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//         Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//         Float means Decimal Values
//         Operand = The Number on which You want to Perform Operations
//         Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//         You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//         
//         Enter the Operand 1 (Integers or Float Value only): 5.5
//         Enter an Operator(+,-,*,/,%): /
//         Enter the Operand 2 (Integers or Float Value only): 2.75
//         
//         Operation: 5.500000 / 2.750000 = 2.000000
//
// O/p 13: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//         Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//         Float means Decimal Values
//         Operand = The Number on which You want to Perform Operations
//         Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//         You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//         
//         Enter the Operand 1 (Integers or Float Value only): 10
//         Enter an Operator(+,-,*,/,%): /
//         Enter the Operand 2 (Integers or Float Value only): 0
//         
//         Division by 0 is not defined
//
// O/p 14: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//         Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//         Float means Decimal Values
//         Operand = The Number on which You want to Perform Operations
//         Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//         You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//         
//         Enter the Operand 1 (Integers or Float Value only): 10
//         Enter an Operator(+,-,*,/,%): %
//         Enter the Operand 2 (Integers or Float Value only): 5
//         
//         Operation: 10 % 5 = 0
//
// O/p 15: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//         Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//         Float means Decimal Values
//         Operand = The Number on which You want to Perform Operations
//         Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//         You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//         
//         Enter the Operand 1 (Integers or Float Value only): 10
//         Enter an Operator(+,-,*,/,%): /
//         Enter the Operand 2 (Integers or Float Value only): 3
//         
//         Operation: 10 % 3 = 1
//
// O/p 16: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//         Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//         Float means Decimal Values
//         Operand = The Number on which You want to Perform Operations
//         Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//         You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//         
//         Enter the Operand 1 (Integers or Float Value only): 5
//         Enter an Operator(+,-,*,/,%): %
//         Enter the Operand 2 (Integers or Float Value only): 10
//         
//         Operation: 5 % 10 = 5
//
// O/p 17: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//         Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//         Float means Decimal Values
//         Operand = The Number on which You want to Perform Operations
//         Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//         You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//         
//         Enter the Operand 1 (Integers or Float Value only): 10
//         Enter an Operator(+,-,*,/,%): %
//         Enter the Operand 2 (Integers or Float Value only): 0
//         
//         Division by 0 is not defined
//
// O/p 18: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//         Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//         Float means Decimal Values
//         Operand = The Number on which You want to Perform Operations
//         Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//         You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//         
//         Enter the Operand 1 (Integers or Float Value only): 10
//         Enter an Operator(+,-,*,/,%): 5
//         Enter the Operand 2 (Integers or Float Value only): 2
//         
//         Enter a Valid Operator
*/

/*
//Q.9 Write a Program to check whether a given Numbeer is Prime or not

#include <stdio.h>
#include <conio.h>
void main()
{
  int Number,Factor=0;
  printf("Enter a Number (Integer only): ");
  scanf("%d",&Number);
  for(int i=1;i<=Number;i++)
  {
    if(Number%i==0)
    {
      Factor++;
    }
  }
  if(Number==0||Number==1)
  {
    printf("\n%d is neither Prime nor Composite Number",Number);
  }
  else if(Factor<=2)
  {
    printf("\n%d is a Prime Number",Number);
  }
  else
  {
    printf("\n%d is not a Prime Number or We can say %d is a Composite Number",Number,Number);
  }
  getch();
}

// O/p 1: Enter a Number (Integer only): 0
//
//        0 is neither Prime nor Composite Number
//
// O/p 2: Enter a Number (Integer only): 1
//
//        1 is neither Prime nor Composite Number
//
// O/p 3: Enter a Number (Integer only): 2
//
//        2 is a Prime Number
//
// O/p 4: Enter a Number (Integer only): 3
//
//        3 is a Prime Number
//
// O/p 5: Enter a Number (Integer only): 4
//
//        4 is a Composite Number
//
// O/p 6: Enter a Number (Integer only): -2
//
//        -2 is a Prime Number
//
// O/p 7: Enter a Number (Integer only): -4
//
//        -4 is a Composite Number
//
*/

/*
//Q.10 Write a Program to Print Table of a Number

#include <stdio.h>
#include <conio.h>
void main()
{
  int n;
  printf("Enter a Number (Integer Only): ");
  scanf("%d",&n);
  printf("\n");
  for(int i=1;i<=10;i++)
  {
    printf("%d * %d = %d\n",n,i,n*i);
  }
  getch();
}

// O/p: Enter a Number (Integer only): 2
//
//      2 * 1 = 2
//      2 * 2 = 4
//      2 * 3 = 6
//      2 * 4 = 8
//      2 * 5 = 10
//      2 * 6 = 12
//      2 * 7 = 14
//      2 * 8 = 16
//      2 * 9 = 18
//      2 * 10 = 20
//
//      Enter a Number (Integer Only): -2
//      
//      -2 * 1 = -2
//      -2 * 2 = -4
//      -2 * 3 = -6
//      -2 * 4 = -8
//      -2 * 5 = -10
//      -2 * 6 = -12
//      -2 * 7 = -14
//      -2 * 8 = -16
//      -2 * 9 = -18
//      -2 * 10 = -20
*/

