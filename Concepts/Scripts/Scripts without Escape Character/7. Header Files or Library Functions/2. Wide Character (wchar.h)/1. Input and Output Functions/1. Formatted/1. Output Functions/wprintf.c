#include <stdio.h>
#include <wchar.h>
#include <conio.h>
void main()
{
    wchar_t *str=L"Hello World";
    wprintf(L"%ls",str);
    getch();
}