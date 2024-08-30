#include <stdio.h>
#include <conio.h>
void main()
{
    int a=10,b=5;
    float c=3.14,d=1.16;
    printf("Integer Subtractions:\n\n");
    printf("a-b=%d\n",a-b);
    printf("10-5=%d\n",10-5);
    printf("10-b=%d\n",10-b);
    printf("a-5=%d\n\n",a-5);
    printf("Float Subtractions:\n\n");
    printf("c-d=%f\n",c-d);
    printf("10-5=%f\n",10-5);
    printf("10.0-5.0=%f\n",10.0-5.0);
    printf("10-d=%f\n",10-d);
    printf("c-5=%f\n",c-5);
    printf("a-c=%f\n\n",a-c);
    getch();
}

// O/p: Integer Subtractions:
//      
//      a-b=5
//      10-5=5
//      10-b=5
//      a-5=5
//      
//      Float Subtractions:
//      
//      c-d=1.980000
//      10-5=1.980000
//      10.0-5.0=5.000000
//      10-d=8.840000
//      c-5=-1.860000
//      a-c=6.860000
//      