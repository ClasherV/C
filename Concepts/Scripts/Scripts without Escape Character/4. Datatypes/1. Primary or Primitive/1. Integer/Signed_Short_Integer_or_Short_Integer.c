#include <stdio.h>
#include <conio.h>
void main()
{
    signed short int a=0;
    short int b=32767;
    short int c=-32768;
    short int d=65535;
    short int e=-65535;
    short int f=32768;
    short int g=-32769;
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

// O/p: 0 32767 -32768 -1 1 -32768 32767
//      
//      0 32767 32768 65535 1 32768 32767
//      
//      0 32767 -32768 -1 1 -32768 32767
//      
//      0 32767 4294934528 4294967295 1 4294934528 32767
//      
//      0 32767 -32768 -1 1 -32768 32767
//      
//      0 32767 4294934528 4294967295 1 4294934528 32767
//      
//      140733193388032 -32768 -140737488355327 8484162398041702399 -7524343234 9223212800942309375 -9223090566172934144
//      
//      140733193388032 18446744073709518848 18446603336221196289 8484162398041702399 18446744066185208382 9223212800942309375 9223653507536617472
//      