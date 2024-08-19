#include <stdio.h>
#include <conio.h>
void main()
{
    long double a=1.1e4932;
    long double b=1.1e4932+1;
    long double c=3.4e-4932;
    long double d=3.4e-4932+1;
    printf("%Lf\t %Lf\t %.4932Lf\t %.4932Lf",a,b,c,d);
    long double ld1=3.14;
    long double ld2=3.14159265358979323846264;
    printf("%Lf %Lf %.16Lf %.20Lf",ld1,ld2,ld2,ld2);
    getch();
}