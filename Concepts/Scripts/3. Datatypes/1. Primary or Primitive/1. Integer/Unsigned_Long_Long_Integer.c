#include <stdio.h>
#include <conio.h>
void main()
{
    unsigned long long int a=0;
    unsigned long long int b=18446744073709551615;
    unsigned long long int c=-9223372036854775808;
    unsigned long long int d=9223372036854775809;
    unsigned long long int e=-9223372036854775809;
    unsigned long long int f=18446744073709551616;
    unsigned long long int g=-1;
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

// O/p: 0 0 -1 -1 0 0 1
//      
//      0 0 65535 65535 0 0 1
//      
//      0 0 -1 -1 0 -2147483648 1
//      
//      0 0 4294967295 4294967295 0 2147483648 1
//      
//      0 0 -1 -1 0 -2147483648 1
//      
//      0 0 4294967295 4294967295 0 2147483648 1
//      
//      0 -1 -9223372036854775808 -9223372036854775807 9223372036854775807 0 -1
//      
//      0 18446744073709551615 9223372036854775808 9223372036854775809 9223372036854775807 0 18446744073709551615
//      