#include <stdio.h>
// #include <conio.h>
void main()
{
    char date[]="28 September 2024";
    int day,year;
    char month[10];
    sscanf(date,"%d %s %d",&day,&month,&year);
    printf("Day: %d\nMonth: %s\nYear: %d",day,month,year);
    // getch();
}

// O/p: Day: 28
//      Month: September
//      Year: 2024