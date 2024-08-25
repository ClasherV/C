#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello%cWorld ",32);
    printf("Hello\040World ");
    printf("Hello\x20World ");
    getch();
}

// O/p: Hello World Hello World Hello World 