#include <stdio.h>
#include <conio.h>
void main()
{
    char a='a';
    printf("Right Justified:\n%5c %c",a,'b');
    printf("\n\nLeft Justified:\n%-5c %c",a,a);
    printf("\n\nRight Justified:\n%05c %c",a,'b');
    printf("\n\nLeft Justified:\n%-05c %c",a,a);
    getch();
}

// O/p: Right Justified:
//          a b
//      
//      Left Justified:
//      a     a
//      
//      Right Justified:
//      0000a b
//      
//      Left Justified:
//      a     a