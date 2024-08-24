#include <stdio.h>
#include <conio.h>
void main()
{
    unsigned short int a=0;
    unsigned short int b=65535;
    unsigned short int c=-32768;
    unsigned short int d=32769;
    unsigned short int e=-32769;
    unsigned short int f=65536;
    unsigned short int g=-1;
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

// O/p: 0 -1 -32768 -32767 32767 0 -1
//      
//      0 65535 32768 32769 32767 0 65535
//      
//      0 65535 32768 32769 32767 0 65535
//      
//      0 65535 32768 32769 32767 0 65535
//      
//      0 65535 32768 32769 32767 0 65535
//      
//      0 65535 32768 32769 32767 0 65535
//      
//      281470681743360 140741783355392 32767 8484162398041735167 -8320275406 -159235912433665 -9223231292924035072
//      
//      281470681743360 140741783355392 32767 8484162398041735167 18446744065389276210 18446584837797117951 9223512780785516544
//      