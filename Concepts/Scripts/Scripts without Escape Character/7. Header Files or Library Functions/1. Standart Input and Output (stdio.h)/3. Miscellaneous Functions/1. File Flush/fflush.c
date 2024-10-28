#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;
    char ch;
    printf("Enter a Number: ");
    scanf("%d",&a);
    fflush(stdin);
    printf("Enter a Character: ");
    scanf("%c",&ch);
    printf("Enter a Number: ");
    scanf("%d",&b);
    printf("a: %d, ch: %c, b: %d",a,ch,b);
    getch();
}

// O/p: Enter a Number: 5
//      Enter a Character: b
//      Enter a Number: 10
//      a: 5, ch: b, b: 10