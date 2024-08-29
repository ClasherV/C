#include <stdio.h>
#include <conio.h>
void main()
{
    printf("\e[?1049hAlternative Buffer Enabled");
    getch();
    printf("\e[?1049l\nAlternative Buffer Disabled");
    getch();
}

// O/p: Alternative Buffer Enabled
//      [ENTER]
//      [SCREEN CHANGED]
//      Alternative Buffer Disabled