#include <stdio.h>
#include <conio.h>
void main()
{
    printf("How's the World\? ");
    printf("How's the World%c ",63);
    printf("How's the World\077 ");
    printf("How's the World\x3F ");
    getch();
}

// O/p: How's the World? How's the World? How's the World? How's the World? 