#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello World\n");
    printf("Hello World\n");
    printf("%c[2B2 Lines Down\n",27);
    printf("%c[2BHello World\n",27);
    printf("Hello World\n");
    getch();
}

// O/p: Hello World 
//      Hello World 
//      
//      
//      2 Lines Down
//      
//      
//      Hello World 
//      Hello World 