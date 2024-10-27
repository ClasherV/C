#include <stdio.h>
#include <conio.h>
void main()
{
    float a=1234.3456,b=1234.3456789101112;
    printf("Right Justified:\n%10.2f %10.10f %5.2f",a,b,a);
    printf("\n\nLeft Justified:\n%-10.2f%-10.10f %-5.2f %f",a,b,a,a);
    printf("\n\nRight Justified:\n%010.2f %010.10f %05.2f",a,b,a);
    printf("\n\nLeft Justified:\n%-010.2f%-010.10f %-05.2f %f",a,b,a,a);
    getch();
}

// O/p: Right Justified:
//         1234.35 1234.3457031250 1234.35
//      
//      Left Justified:
//      1234.35   1234.3457031250 1234.35 1234.345581
//      
//      Right Justified:
//      0001234.35 1234.3457031250 1234.35
//      
//      Left Justified:
//      1234.35   1234.3457031250 1234.35 1234.345581