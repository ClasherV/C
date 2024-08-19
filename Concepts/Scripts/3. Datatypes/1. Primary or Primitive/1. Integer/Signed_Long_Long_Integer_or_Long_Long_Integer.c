#include <stdio.h>
#include <conio.h>
void main()
{
    signed long long int a=9223372036854775807;
    long long int b=-9223372036854775808;
    long long int c=18446744073709551615;
    printf("%lld %lld %lld",a,b,c);
    getch();
}

// O/p: 9223372036854775807 -9223372036854775808 -1