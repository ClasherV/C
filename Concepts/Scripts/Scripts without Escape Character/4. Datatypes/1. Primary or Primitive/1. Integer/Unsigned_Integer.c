#include <stdio.h>
#include <conio.h>
void main()
{
    unsigned int a=0;
    unsigned int b=4294967295;
    unsigned int c=-2147483648;
    unsigned int d=2147483649;
    unsigned int e=-2147483649;
    unsigned int f=4294967296;
    unsigned int g=-1;
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

// O/p: 0 -1 0 1 -1 0 -1
//      
//      0 65535 0 1 65535 0 65535
//      
//      0 -1 -2147483648 -2147483647 2147483647 0 -1
//      
//      0 4294967295 2147483648 2147483649 2147483647 0 4294967295
//      
//      0 -1 -2147483648 -2147483647 2147483647 0 -1
//      
//      0 4294967295 2147483648 2147483649 2147483647 0 4294967295
//      
//      -4294967296 -9223372030412324864 2147483647 8484059516395061247 4294967295 -9223372030412324865 -2147483648
//      
//      18446744069414584320 9223372043297226752 2147483647 8484059516395061247 4294967295 9223372043297226751 18446744071562067968       
//      