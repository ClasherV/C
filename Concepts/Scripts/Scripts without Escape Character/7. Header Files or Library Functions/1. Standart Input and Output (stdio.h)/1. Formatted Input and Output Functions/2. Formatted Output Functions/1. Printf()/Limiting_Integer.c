#include <stdio.h>
#include <conio.h>
void main()
{
    int a=1234,b=12345678;
    printf("Right Justified:\n%6d %6d",a,b);
    printf("\n\nLeft Justified:\n%-6d%-6d %d",a,b,a);
    printf("\n\nRight Justified:\n%06d %06d",a,b);
    printf("\n\nLeft Justified:\n%-06d%-06d %d",a,b,a);
    getch();
}

// O/p: Right Justified:
//        1234 12345678
//      
//      Left Justified:
//      1234  12345678 1234
//      
//      Right Justified:
//      001234 12345678
//      
//      Left Justified:
//      1234  12345678 1234