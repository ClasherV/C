#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello\033[s World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Press Enter to See the Change\n");
    getch();
    printf("\033[u \033[5A \033[0J");
    printf("\033[1B");
    getch();
}

// O/p: Hello
//          
//      
//      
//      
//        