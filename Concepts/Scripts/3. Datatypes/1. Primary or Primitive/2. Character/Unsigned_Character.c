#include <stdio.h>
#include <conio.h>
void main()
{
    unsigned char a=0;
    unsigned char b=255;
    unsigned char c=-128;
    unsigned char d=129;
    unsigned char e=-129;
    unsigned char f=256;
    unsigned char g=-1;
    printf("%d %d %d %d %d %d %d\n\n",a,b,c,d,e,f,g);
    printf("%u %u %u %u %u %u %u\n\n",a,b,c,d,e,f,g);
    printf("%c %c %c %c %c %c %c\n\n",a,b,c,d,e,f,g);
    getch();
}

// O/p: 0 255 128 129 127 0 255
//      
//      0 255 128 129 127 0 255
//      
//         Ç ü ⌂   
//      