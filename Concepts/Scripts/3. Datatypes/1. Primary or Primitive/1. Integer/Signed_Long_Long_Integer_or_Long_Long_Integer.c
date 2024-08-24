#include <stdio.h>
#include <conio.h>
void main()
{
    signed long long int a=0;
    long long int b=9223372036854775807;
    long long int c=-9223372036854775808;
    long long int d=18446744073709551615;
    long long int e=-18446744073709551615;
    long long int f=9223372036854775808;
    long long int g=-9223372036854775809;
    printf("%hd %hd %hd %hd %hd %hd %hd\n\n",a,b,c,d,e,f,g);
    printf("%hu %hu %hu %hu %hu %hu %hu\n\n",a,b,c,d,e,f,g);
    printf("%d %d %d %d %d %d %d\n\n",a,b,c,d,e,f,g);
    printf("%u %u %u %u %u %u %u\n\n",a,b,c,d,e,f,g);
    printf("%ld %ld %ld %ld %ld %ld %ld\n\n",a,b,c,d,e,f,g);
    printf("%lu %lu %lu %lu %lu %lu %lu\n\n",a,b,c,d,e,f,g);
    printf("%lld %lld %lld %lld %lld %lld %lld\n\n",a,b,c,d,e,f,g);
    printf("%llu %llu %llu %llu %llu %llu %llu\n\n",a,b,c,d,e,f,g);
    getch();
}

// O/p: 0 0 -1 -1 0 0 -1
//      
//      0 0 65535 65535 0 0 65535
//      
//      0 0 -1 2147483647 0 -2147483648 -1
//      
//      0 0 4294967295 2147483647 0 2147483648 4294967295
//      
//      0 0 -1 2147483647 0 -2147483648 -1
//      
//      0 0 4294967295 2147483647 0 2147483648 4294967295
//      
//      0 9223372036854775807 -9223372036854775808 -1 1 -9223372036854775808 9223372036854775807
//      
//      0 9223372036854775807 9223372036854775808 18446744073709551615 1 9223372036854775808 9223372036854775807
//      