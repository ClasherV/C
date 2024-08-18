#include <stdio.h>
#include <conio.h>
void main()
{
    int decimal;
    printf("Enter a Decimal Number: ");
    scanf("%d",&decimal);
    int quotient1=(decimal)/(16);
    int remainder1=(decimal)%(16);
    int quotient2=(quotient1)/(16);
    int remainder2=(quotient1)%(16);
    printf("The Decimal Number Represented in Hexadecimal is: %d%0x",remainder2,remainder1);
    getch();
}

// O/p: 15e