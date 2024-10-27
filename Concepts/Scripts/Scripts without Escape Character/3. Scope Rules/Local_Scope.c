#include <stdio.h>
#include <conio.h>
void main()
{
    int x=10,y=20;
    {
        printf("x=%d, y=%d\n",x,y);
        {
            int y=40;
            x=x+1;
            y=y+1;
            printf("x=%d, y=%d\n",x,y);
        }
        printf("x=%d, y=%d",x,y);
    }
    getch();
}

// O/p: x=10, y=20
//      x=11, y=41
//      x=11, y=20