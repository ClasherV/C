#include <stdio.h>
#include <wchar.h>
#include <conio.h>
void main()
{
    wchar_t str[100];
    printf("Enter a Wide Character: ");
    wscanf(L"%ls",str);
    wprintf(L"You Entered: %ls",str);
    getch();
}