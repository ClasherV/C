#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
  int Power;
  float Operand_1,Operand_2;
  char Operator;
  printf("The Values of Operands should be a Non-Zero Number\n");
  printf("The Operators You can choose here are Addition(+), Subtraction(-), Multiplication(*), Division(/), Modulo(%%), Square Root(R), Power(P)\n");
  printf("The Symbol for Power is P here and Symbol for Square Root is R here\n\n");
  printf("Enter the Value of Operand_1: ");
  scanf("%f",&Operand_1);
  printf("Enter an Operator: ");
  scanf(" %c",&Operator);
  if(Operator=='P')
  {
    printf("Enter the Power: ");
    scanf("%d",&Power);
  }
  if(Operator!='R'&&Operator!='P')
  {
    printf("Enter the Value of Operand_2: ");
    scanf("%f",&Operand_2);
  }
  switch(Operator)
  {
    case '+': printf("%f + %f = %f",Operand_1,Operand_2,Operand_1+Operand_2);
              break;
    case '-': printf("%f - %f = %f",Operand_1,Operand_2,Operand_1-Operand_2);
              break;
    case '*': printf("%f * %f = %f",Operand_1,Operand_2,Operand_1*Operand_2);
              break;
    case '/': if(Operand_2!=0)
              {
                printf("%f / %f = %f",Operand_1,Operand_2,Operand_1/Operand_2);
                break;
              }
              else
              {
                printf("Division by 0 is not Defined");
                break;
              }
    case '%': if(Operand_2!=0)
              {
                printf("%d Modulo %d = %d",(int)Operand_1,(int)Operand_2,(int)Operand_1%(int)Operand_2);
                break;
              }
              else
              {
                printf("Division by 0 is not Defined");
                break;
              }
    case 'R': printf("Square Root of %f = %f",Operand_1,sqrt(Operand_1));
              break;
    case 'P': printf("%f to the Power %d = %f",Operand_1,Power,pow(Operand_1,Power));
              break;
    default: printf("Enter a Valid Operator or Operand");
  }
  getch();
  return 0;
}