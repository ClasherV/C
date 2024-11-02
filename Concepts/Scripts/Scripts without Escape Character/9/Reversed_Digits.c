// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int num,remainder,digit=0;
//     printf("Enter a Number (2 Digit or greater): ");
//     scanf("%d",&num);
//     int temp=num;
//     for(int i=1;i<=temp;i*=10)
//     {
//         remainder=num%10;
//         digit=digit*10+remainder;
//         num/=10;
//     }
//     printf("%d in Reversed is: %d",temp,digit);
//     getch();
//     return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int num,remainder,digit=0;
//     printf("Enter a Number (2 Digit or greater): ");
//     scanf("%d",&num);
//     int temp=num;
//     for(int i=num;num!=0;num=num/10)
//     {
//         remainder=num%10;
//         digit=digit*10+remainder;
//     }
//     printf("%d in Reversed is: %d",temp,digit);
//     getch();
//     return 0;
// }