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