#include <stdio.h>
#include <conio.h>
void main()
{
    int a=10,b=5;
    float c=3.14,d=1.16;
    printf("Integer Multiplications:\n\n");
    printf("a*b=%d\n",a*b);
    printf("10*5=%d\n",10*5);
    printf("10*b=%d\n",10*b);
    printf("a*5=%d\n\n",a*5);
    printf("Float Multiplications:\n\n");
    printf("c*d=%f\n",c*d);
    printf("10*5=%f\n",10*5);
    printf("10.0*5.0=%f\n",10.0*5.0);
    printf("10*d=%f\n",10*d);
    printf("c*5=%f\n",c*5);
    printf("a*c=%f\n\n",a*c);
    getch();
}

// O/p: Integer Multiplications:
//      
//      a*b=50
//      10*5=50
//      10*b=50
//      a*5=50
//      
//      Float Multiplications:
//      
//      c*d=3.642400
//      10*5=3.642399
//      10.0*5.0=50.000000
//      10*d=11.600000
//      c*5=15.700001
//      a*c=31.400001
//      