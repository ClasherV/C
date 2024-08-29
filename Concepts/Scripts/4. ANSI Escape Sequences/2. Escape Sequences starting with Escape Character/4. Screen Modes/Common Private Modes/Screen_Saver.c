#include <stdio.h>
#include <conio.h>
void main()
{
    printf("\e[?47hScreen Saved");
    getch();
    printf("\e[?47l\nScreen Restored");
    getch();
}

// O/p: Screen Saved
//      [ENTER]
//      [SCREEN CHANGED]
//      Screen Restored