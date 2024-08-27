#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Press Enter to See the Change\n");
    getch();
    printf("Hello \x1b[1JWorld\n");
    printf("Hello World\n");
    getch();
}

// O/p:      
//      
//      
//            World
//      Hello World