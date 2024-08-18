#include <stdio.h>
#include <conio.h>
void main()
{
    int Decimal,Octal;
    printf("Enter a Decimal Number: ");
    scanf("%d",&Decimal);
    int Quotient1=(Decimal)/(8);
    int Remainder1=(Decimal)%(8);
    int Quotient2=(Quotient1)/(8);
    int Remainder2=(Quotient1)%(8);
    int Quotient3=(Quotient2)/(8);
    int Remainder3=(Quotient2)%(8);
    char Str[20];
    sprintf(Str,"%d%d%d",Remainder3,Remainder2,Remainder1);
    int Count=0,Temp=Decimal;
    if(Decimal==0)
    {
        Count=1;
    }
    else
    {
        while(Temp!=0)
        {
            Temp/=10;
            Count++;
        }
    }
    for(int i=0;i<=Count-1;i++)
    {
        Octal=Str[i]-'0';
    }
    printf("The Decimal Number Represented in Octal Number is: %d",Octal);
    getch();
}