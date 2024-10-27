#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    unsigned char Range=0;
    for(int i=0;i<=7;i++)
    {
        Range+=pow(2,i);
    }
    printf("Range of Unsigned Character is: 0 to %d or 0 to 2^8 - 1",Range);
    getch();
}

// O/p: Range of Unsigned Character is: 0 to 255 or 0 to 2^8 - 1