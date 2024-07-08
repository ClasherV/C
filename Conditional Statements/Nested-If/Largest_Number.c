
//Q.3 Write a Program to find the Largest among 3 Numbers

#include <stdio.h>
#include <conio.h>
void main()
{
  int Number1,Number2,Number3;
  printf("Enter the Number 1 (Integers only): ");
  scanf("%d",&Number1);
  printf("Enter the Number 2 (Integers only): ");
  scanf("%d",&Number2);
  printf("Enter the Number 3 (Integers only): ");
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

// O/p 1: Enter the Number 1 (Integers only): 10
//        Enter the Number 2 (Integers only): 8
//        Enter the Number 3 (Integers only): 6
//        Number 1 = 10 is the Largest NumberEnter 3 Numbers: 10 8 6
//
// O/p 2: Enter the Number 1 (Integers only): 10
//        Enter the Number 2 (Integers only): 6
//        Enter the Number 3 (Integers only): 8
//        Number 1 = 10 is the Largest NumberEnter 3 Numbers: 10 6 8
//
// O/p 3: Enter the Number 1 (Integers only): 8
//        Enter the Number 2 (Integers only): 6
//        Enter the Number 3 (Integers only): 10
//        Number 3 = 10 is the Largest NumberEnter 3 Numbers: 8 6 10
//
// O/p 4: Enter the Number 1 (Integers only): 8
//        Enter the Number 2 (Integers only): 10
//        Enter the Number 3 (Integers only): 6
//        Number 2 = 10 is the Largest NumberEnter 3 Numbers: 8 10 6
//
// O/p 5: Enter the Number 1 (Integers only): 6
//        Enter the Number 2 (Integers only): 10
//        Enter the Number 3 (Integers only): 8
//        Number 2 = 10 is the Largest NumberEnter 3 Numbers: 6 10 8
//
// O/p 6: Enter the Number 1 (Integers only): 6
//        Enter the Number 2 (Integers only): 8
//        Enter the Number 3 (Integers only): 10
//        Number 3 = 10 is the Largest NumberEnter 3 Numbers: 6 8 10
