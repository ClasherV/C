#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    signed char Range=0;
    for(int i=0;i<=6;i++)
    {
        Range+=pow(2,i);
    }
    printf("Range os Signed Character is: %d to %d or -2^8 to 2^8 - 1",-(Range+1),Range);
    getch();
}

// O/p: Range os Signed Character is: -128 to 127 or -2^8 to 2^8 - 1