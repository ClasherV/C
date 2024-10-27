#include <stdio.h>
#include <conio.h>
void main()
{
    int a=10;
    int* ptr=&a;
    printf("%p",ptr);
    getch();
}

// O/p: 0061FF18