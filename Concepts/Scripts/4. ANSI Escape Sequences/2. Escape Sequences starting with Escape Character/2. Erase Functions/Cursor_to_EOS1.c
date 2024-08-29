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
    printf("\033[u \033[5A \033[J");
    printf("\033[5B");
    getch();
}

// O/p: Hello World
//      Hello World
//      Hello World
//      Hello World
//      Press Enter to See the Change
//      [ENTER]
//      [SCREEN CHANGED]
//      Hello
//           
//           
//           
//           
//           