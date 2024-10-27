#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Hello \0World");
    printf("Hello \000World");
    printf("Nothing=%c ",0);
    printf("Hello \x00World");
    getch();
}

// O/p: Hello Hello Nothing= Hello 