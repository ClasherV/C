/*
//Q.2 Write a Program to check whether a given Number is Even or Odd

#include <stdio.h>
#include <conio.h>
void main()
{
  int Number;
  printf("Enter a Number (Integers only): ");
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

// O/p 1: Enter a Number (Integers only): 2
//        2 is an Even Number
//
// O/p 2: Enter a Number (Integers only): 3
//        3 is an Odd Number
//
// O/p 3: Enter a Number (Integers only): -2
//        -2 is an Even Number
//
// O/p 4: Enter a Number (Integers only): -3
//        -3 is an Odd Number
//
// O/p 5: Enter a Number (Integers only): 0
//        0 is an Even Number
//        
*/