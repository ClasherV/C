// /*
//   * * * * *
//    * * * * *
//     * * * * *
//      * * * * *
//       * * * * *  
// */
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int m;
//     printf("Enter the Number of Rows: ");
//     scanf("%d",&m);
//     printf("\n");
//   for(int i=1;i<=m;i++)
//   {
//     for(int j=1;j<=m-i;j++)
//     {
//         printf("  ");
//     }
//     for(int k=m;k>=1;k--)
//     {
//       printf("* ");
//     }
//     printf("\n");
//   }
//   getch();
//   return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//   int m,a=1;
//   printf("Enter the Number of Rows: ");
//   scanf("%d",&m);
//   printf("\n");
//   for(int i=1;i<=m;i++)
//   {
//     for(int j=1;j<=i;j++)
//     {      
//       printf("%d",a);
//       a++;
//       for(int k=1;k<=1;k++)
//       {
//         printf(" ");
//       }
//     }
//     printf("\n");
//   }
//   getch();
//   return 0;
// }

// #include <stdio.h>
// #include <conio.h>

// int main() {
//   int m;
  
//   printf("Enter the Number of Rows: ");
//   scanf("%d", &m);
//   printf("\n");

//   // Loop for each row
//   for(int i = m; i >= 1; i--) {
//     // Loop to print leading spaces
//     for(int space = 1; space <= m - i; space++) {
//       printf("  ");
//     }
    
//     // Loop to print stars
//     for(int j = 1; j <= 2 * i - 1; j++) {
//       if (j == 1 || j == 2 * i - 1) {
//         printf("* ");
//       } else {
//         printf("  ");
//       }
//     }
//     printf("\n");
//   }

//   getch();
//   return 0;
// }
