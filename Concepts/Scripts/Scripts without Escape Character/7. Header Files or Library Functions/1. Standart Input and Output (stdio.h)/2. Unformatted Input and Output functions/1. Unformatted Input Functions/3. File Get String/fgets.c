#include <stdio.h>
#include <conio.h>
void main()
{
    char str[10];
    printf("Available Size of String: %d\n\n",sizeof(str));
    printf("Enter a Name: ");
    fgets(str,12,stdin);
    printf("Your Name is: %s",str);
    getch();
}

// O/p: Available Size of String: 10
//      
//      Enter a Name: Vaibhav Raikwar
//      Your Name is: Vaibhav Rai