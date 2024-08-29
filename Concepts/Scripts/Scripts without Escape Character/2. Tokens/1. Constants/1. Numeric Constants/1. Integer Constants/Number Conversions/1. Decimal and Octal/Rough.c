#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int Octal;
    printf("Enter an Octal Number: ");
    scanf("%o",&Octal);
    int Count=0,Temp=Octal;
    if(Octal==0)
    {
        Count=1;
    }
    else
    {
        while(Temp!=0)
        {
            Temp=Temp/8;
            Count++;
        }
    }
    char Str[20];
    sprintf(Str,"%o",Octal);
    int a=0;
    int Multiple=0;
    for(int i=Count-1;i>=0;i--)
    {
        Multiple+=(Str[a]-'0')*pow(8,i);
        a++;
    }
    printf("The Octal Number Represented in Decimal Number is: %d",Multiple);
    getch();
}