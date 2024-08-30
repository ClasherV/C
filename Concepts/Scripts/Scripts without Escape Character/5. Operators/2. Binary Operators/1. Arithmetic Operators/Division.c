#include <stdio.h>
#include <conio.h>
void main()
{
    int a=10,b=5;
    float c=3.14,d=1.16;
    printf("Integer Divisions:\n\n");
    printf("a/b=%d\n",a/b);
    printf("10/5=%d\n",10/5);
    printf("10/b=%d\n",10/b);
    printf("a/5=%d\n\n",a/5);
    printf("Float Divisions:\n\n");
    printf("c/d=%f\n",c/d);
    printf("10/5=%f\n",10/5);
    printf("10.0/5.0=%f\n",10.0/5.0);
    printf("10/d=%f\n",10/d);
    printf("c/5=%f\n",c/5);
    printf("a/c=%f\n\n",a/c);
    getch();
}

// O/p: Integer Divisions:
//      
//      a/b=2
//      10/5=2
//      10/b=2
//      a/5=2
//      
//      Float Divisions:
//      
//      c/d=2.706897
//      10/5=2.706896
//      10.0/5.0=2.000000
//      10/d=8.620690
//      c/5=0.628000
//      a/c=3.184713
//      