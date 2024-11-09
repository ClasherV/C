// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int num,remainder,digit_sum=0;
//     printf("Enter a Number (2 Digits or greater): ");
//     scanf("%d",&num);
//     for(int i=num;i!=0;i=i/10)
//     {
//         remainder=i%10;
//         int digit_fact=1;
//         for(int j=1;j<=remainder;j++)
//         {
//             digit_fact*=j;
//         }
//         digit_sum+=digit_fact;
//     }
//     if(digit_sum==num)
//     {
//         printf("\nGiven Number %d is a Strong Number",num);
//     }
//     else
//     {
//         printf("\nGiven Number %d is not a Strong Number",num);
//     }
//     getch();
//     return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int num,remainder,digit_sum=0;
//     printf("Enter a Number (2 Digits or greater): ");
//     scanf("%d",&num);
//     for(int i=num;i>0;i=i/10)
//     {
//         int digit_fact=1;
//         for(int j=1;j<=i%10;j++)
//         {
//             digit_fact*=j;
//         }
//         digit_sum+=digit_fact;
//     }
//     if(digit_sum==num)
//     {
//         printf("\nGiven Number %d is a Strong Number",num);
//     }
//     else
//     {
//         printf("\nGiven Number %d is not a Strong Number",num);
//     }
//     getch();
//     return 0;
// }