#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c,d,e;
    printf("Choose a Fruit in Your Mind and I will guess it\n");
    printf("Remember answer yes or no in 1 and 0 format only\n\n");
    printf("Choose a Fruit\n");
    printf("Apple\n");
    printf("Banana\n");
    printf("Grapes\n");
    printf("Mango\n");
    printf("Watermelon\n\n");
    printf("Section 1: Is Your Fruit here\n");
    printf("Kiwi\n");
    printf("Apple\n");
    printf("Cherry\n");
    printf("Mango\n");
    printf("Raspberry\n");
    scanf("%d",&a);
    printf("Section 2: Is Your Fruit here\n");
    printf("Grapefruit\n");
    printf("Papaya\n");
    printf("Mango\n");
    printf("Blue Berries\n");
    printf("Strawberry\n");
    scanf("%d",&b);
    printf("Section 3: Is Your Fruit here\n");
    printf("Apple\n");
    printf("Cherry\n");
    printf("Banana\n");
    printf("Papaya\n");
    printf("Watermelon\n");
    scanf("%d",&c);
    printf("Section 4: Is Your Fruit here\n");
    printf("Guava\n");
    printf("Grapes\n");
    printf("Kiwi\n");
    printf("Watermelon\n");
    printf("Melon\n");
    scanf("%d",&d);
    printf("Section 5: Is Your Fruit here\n");
    printf("Raspberry\n");
    printf("Banana\n");
    printf("Grapes\n");
    printf("Kiwi\n");
    printf("Melon\n");
    scanf("%d",&e);
    if(a==1&&c==1)
    printf("Your Fruit is Apple");
    if(c==1&&e==1)
    printf("Your Fruit is Banana");
    if(d==1&&e==1)
    printf("Your Fruit is Grapes");
    if(a==1&&b==1)
    printf("Your Fruit is Mango");
    if(c==1&&d==1)
    printf("Your Fruit is Watermelon");
    getch();
    return 0;  
}