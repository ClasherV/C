#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    printf("Enter a Character: ");
    ch=getchar();
    putc(ch,stdout);
    putc('\n',stdout);
    putc('k',stdout);
    getch();
}

// O/p: Enter a Character: Vaibhav
//      V
//      k