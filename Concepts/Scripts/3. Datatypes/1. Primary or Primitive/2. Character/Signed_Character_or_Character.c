#include <stdio.h>
#include <conio.h>
void main()
{
    signed char a=0;
    char b=127;
    char c=-128;
    char d=255;
    char e=-255;
    char f=128;
    char g=-129;
    printf("%d %d %d %d %d %d %d\n\n",a,b,c,d,e,f,g);
    printf("%u %u %u %u %u %u %u\n\n",a,b,c,d,e,f,g);
    printf("%c %c %c %c %c %c %c\n\n",a,b,c,d,e,f,g);
    getch();
}

// O/p: 0 127 -128 -1 1 -128 127
//      
//      0 127 4294967168 4294967295 1 4294967168 127
//      
//       ⌂ Ç   ☺ Ç ⌂
//      