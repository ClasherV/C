#include <stdio.h>
#include <conio.h>
int main()
{
    int n,factor=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            factor++;
        }
    }
    if(factor>2)
    {
        printf("%d is not a Prime Number",n);
    }
    else
    {
        printf("%d is a Prime Number",n);
    }
    getch();
    return 0;
}