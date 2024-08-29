#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Cursor is Invisible\033[?25l");
    getch();
    printf("\nCursor is Visible\033[?25h");
    getch();
}

// O/p: Cursor is Invisible[CURSOR INVISIBLE]
//      Cursor is Visible[CURSOR VISIBLE]