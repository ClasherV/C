/*
//Q.1 Write a Program to check whether a given Number is Positive or Negative

#include <stdio.h>
#include <conio.h>
void main()
{
  int Number;
  printf("Enter a Number (Integers only): ");
  scanf("%d",&Number);
  if(Number<0)
  {
    printf("%d is a Negative Number\n",Number);
  }
  if(Number==0)
  {
    printf("%d is neither Positive nor Negative\n",Number);
  }
  if(Number>0)
  {
    printf("%d is a Positive Number\n",Number);
  }
  getch();
}

// O/p 1: Enter a Number (Integers only): -5
//        -5 is a Negative Number
//
// O/p 2: Enter a Number (Integers only): 0
//        0 is neither Positive nor Negative
//
// O/p 3: Enter a Number (Integers only): 5
//        5 is a Positive Number
//
*/