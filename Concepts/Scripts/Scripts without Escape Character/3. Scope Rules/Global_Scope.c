#include <stdio.h>
#include <conio.h>
int global=5;
void display()
{
    printf("%d\n",global);
}
void main()
{
    printf("Before change within main: ");
    display();
    printf("After change within main: ");
    global=10;
    display();
    getch();
}

// O/p: Before change within main: 5
//      After change within main: 10