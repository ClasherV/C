#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    signed int Range=0;
    for(int i=0;i<=30;i++)
    {
        Range+=pow(2,i);
    }
    printf("Range of Signed Integer is: %d to %d or -2^31 to 2^31 - 1",-(Range+1),Range);
    getch();
}

// O/p: Range of Signed Integer is: -2147483648 to 2147483647 or -2^31 to 2^31 - 1