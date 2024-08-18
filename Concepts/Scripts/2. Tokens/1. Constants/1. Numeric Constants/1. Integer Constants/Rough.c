#include <stdio.h>
void main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    int q1=n/8;
    int r1=n%8;
    printf("q1=%d r1=%d\n",q1,r1);
    int q2=q1/8;
    int r2=r1%8;
    printf("q2=%d r2=%d\n",q2,r2);
}