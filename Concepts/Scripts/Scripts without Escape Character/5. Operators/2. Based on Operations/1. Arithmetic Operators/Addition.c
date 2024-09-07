#include <stdio.h>
#include <conio.h>
void main()
{
    int a=10,b=5;
    float c=3.14,d=1.16;
    printf("Integer Additions:\n\n");
    printf("a+b=%d\n",a+b);
    printf("10+5=%d\n",10+5);
    printf("10+b=%d\n",10+b);
    printf("a+5=%d\n\n",a+5);
    printf("Float Additions:\n\n");
    printf("c+d=%f\n",c+d);
    printf("10+5=%f\n",10+5);
    printf("10.0+5.0=%f\n",10.0+5.0);
    printf("10+d=%f\n",10+d);
    printf("c+5=%f\n",c+5);
    printf("a+c=%f\n\n",a+c);
    getch();
}

// O/p: Integer Additions:
//      
//      a+b=15
//      10+5=15
//      10+b=15
//      a+5=15
//      
//      Float Additions:
//      
//      c+d=4.300000
//      10+5=4.299999
//      10.0+5.0=15.000000
//      10+d=11.160000
//      c+5=8.140000
//      a+c=13.140000
//      