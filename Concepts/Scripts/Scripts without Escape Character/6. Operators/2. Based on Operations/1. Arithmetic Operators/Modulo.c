#include <stdio.h>
#include <conio.h>
void main()
{
    int a=10,b=5,c=7;
    printf("Remainder is 0:\n\n");
    printf("a%%b=%d\n",a%b);
    printf("10%%5=%d\n",10%5);
    printf("10%%b=%d\n",10%b);
    printf("a%%5=%d\n\n",a%5);
    printf("Remainder is Non-Zero:\n\n");
    printf("a%%c=%d\n",a%-c);
    printf("10%%7=%d\n",-10%7);
    printf("10%%c=%d\n",-10%-c);
    printf("a%%7=%d\n\n",a%7);
    getch();
}

// O/p: Remainder is 0:
//      
//      a%b=0
//      10%5=0
//      10%b=0
//      a%5=0
//      
//      Remainder is Non-Zero:
//      
//      a%c=3
//      10%7=-3
//      10%c=-3
//      a%7=3
//      