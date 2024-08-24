#include <stdio.h>
#include <conio.h>
void main()
{
    signed long int a=0;
    long int b=2147483647;
    long int c=-2147483648;
    long int d=4294967295;
    long int e=-4294967295;
    long int f=2147483648;
    long int g=-2147483649;
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

// O/p: 0 -1 0 -1 1 0 -1
//      
//      0 65535 0 65535 1 0 65535
//      
//      0 2147483647 -2147483648 -1 1 -2147483648 2147483647
//      
//      0 2147483647 2147483648 4294967295 1 2147483648 2147483647
//      
//      0 2147483647 -2147483648 -1 1 -2147483648 2147483647
//      
//      0 2147483647 2147483648 4294967295 1 2147483648 2147483647
//      
//      9223372032559808512 -2147483648 -9223372036854775807 8484059514247577599 -9223372034707292161 -4294967295 9223372034707292160
//      
//      9223372032559808512 18446744071562067968 9223372036854775809 8484059514247577599 9223372039002259455 18446744069414584321 9223372034707292160
//      