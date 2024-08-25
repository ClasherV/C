#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    unsigned int Range=0;
    for(int i=0;i<=31;i++)
    {
        Range+=pow(2,i);
    }
    printf("Range of Unsigned Integer is: %u to %u or 0 to 2^32 - 1",0,Range);
    getch();
}

// O/p: Range of Unsigned Integer is: 0 to 4294967295 or 0 to 2^32 - 1