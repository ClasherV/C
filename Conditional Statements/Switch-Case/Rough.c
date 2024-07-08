/*//TODO
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





/*//TODO
//Q.6 Write a Program to assign the Grades according to the Marks of a Student using Switch Case

#include <stdio.h>
#include <conio.h>
void main()
{
  int marks;
  printf("Enter the Marks of the Student (between 0 to 100): ");
  scanf("%d",&marks);
  switch(marks)
  {
    case 100:
    case 99:
    case 98:
    case 97:
    case 96:
    case 95:
    case 94:
    case 93:
    case 92:
    case 91: 
    case 90:
    case 89:
    case 88:
    case 87:
    case 86:
    case 85:
    case 84:
    case 83:
    case 82:
    case 81: 
    case 80: printf("O Grade\n");
             break;
    case 79:
    case 78:
    case 77:
    case 76:
    case 75:
    case 74:
    case 73:
    case 72:
    case 71: 
    case 70: printf("A+ Grade\n");
             break;
    case 69:
    case 68:
    case 67:
    case 66:
    case 65:
    case 64:
    case 63:
    case 62:
    case 61: 
    case 60: printf("A Grade\n");
             break;
    case 59:
    case 58:
    case 57:
    case 56:
    case 55: printf("B+ Grade\n");
             break;
    case 54:
    case 53:
    case 52:
    case 51:
    case 50: printf("B Grade\n");
             break;
    case 49:
    case 48:
    case 47:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
    case 41: printf("C Grade\n");
             break;
    case 40:
    case 39:
    case 38:
    case 37:
    case 36: 
    case 35: printf("D Grade\n");
             break;
    case 34:
    case 33:
    case 32:
    case 31:
    case 30:
    case 29:
    case 28:
    case 27:
    case 26:
    case 25:
    case 24:
    case 23:
    case 22:
    case 21:
    case 20:
    case 19:
    case 18:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0: printf("F Grade");
            break;
    default: printf("Invalid Marks");
  }
  getch();
}

// O/p 1: Enter the Marks of the Student (between 0 to 100): 85
//        O Grade
//
// O/p 2: Enter the Marks of the Student (between 0 to 100): 75
//        A+ Grade
//
// O/p 3: Enter the Marks of the Student (between 0 to 100): 65
//        A Grade
//
// O/p 4: Enter the Marks of the Student (between 0 to 100): 57
//        B+ Grade
//
// O/p 5: Enter the Marks of the Student (between 0 to 100): 52
//        B Grade
//
// O/p 6: Enter the Marks of the Student (between 0 to 100): 45
//        C Grade
//
// O/p 7: Enter the Marks of the Student (between 0 to 100): 38
//        D Grade
//
// O/p 8: Enter the Marks of the Student (between 0 to 100): 102
//        Invalid Marks
*/






/*//TODO
//Q.7 Write a Program to check whether a given Character is in Uppercase/Lowercase or a Digit or a Special Character using Switch Case

#include <stdio.h>
#include <conio.h>
void main()
{
  char Character;
  printf("Enter a Character (Any Character and Positive Integers only): ");
  scanf("%c",&Character);
  switch(Character)
  {
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z': printf("%c is an Uppercase Character",Character);
              break;
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'g':
    case 'h':
    case 'i':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'o':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'u':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z': printf("%c is a Lowercase Character",Character);
              break;
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9': printf("Entered Character is a Digit");
              break;
    default: printf("%c is a Special Character",Character);
  }
  getch();
}

// O/p 1: Enter a Character (Any Character and Positive Integers only): A
//        A is an Uppercase Character
//
// O/p 2: Enter a Character (Any Character and Positive Integers only): V
//        V is an Uppercase Character
//
// O/p 3: Enter a Character (Any Character and Positive Integers only): Z
//        Z is an Uppercase Character
//
// O/p 4: Enter a Character (Any Character and Positive Integers only): a
//        a is an Lowercase Character
//
// O/p 5: Enter a Character (Any Character and Positive Integers only): v
//        v is an Lowercase Character
//
// O/p 6: Enter a Character (Any Character and Positive Integers only): z
//        z is an Lowercase Character
//
// O/p 7: Enter a Character (Any Character and Positive Integers only): 0
//        Entered Character is a Digit
//
// O/p 8: Enter a Character (Any Character and Positive Integers only): 5
//        Entered Character is a Digit
//
// O/p 9: Enter a Character (Any Character and Positive Integers only): 9
//        Entered Character is a Digit
//
// O/p 10: Enter a Character (Any Character and Positive Integers only): 10
//         Entered Character is a Digit
//
// O/p 11: Enter a Character (Any Character and Positive Integers only): @
//         @ is a Special Character
*/








/*//TODO
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