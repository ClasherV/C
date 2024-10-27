#include <stdio.h>
#include <conio.h>
void main()
{
    char ch[20];
    printf("Enter a String: ");
    gets(ch);
    fputs(ch,stdout);
    fputs("Raikwar",stdout);
    getch();
}

// O/p: Enter a String: Vaibhav
//      VaibhavRaikwar