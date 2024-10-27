#include <stdio.h>
#include <conio.h>
void main()
{
    char string[100];
    int age=18;
    char name[]="Vaibhav Raikwar";
    sprintf(string,"Name: %s, Age: %d\n",name,age);
    printf("%s",string);
    printf("%s",string);
    getch();
}

// O/p: Name: Vaibhav Raikwar, Age: 18
//      Name: Vaibhav Raikwar, Age: 18