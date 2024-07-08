/* 
   * * * * *
   * * * * *
   * * * * *
   * * * * *
   * * * * *
   
#include <stdio.h>
#include <conio.h>
int main()
{
    int m,n;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    printf("Enter the Number of Columns: ");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
*/

/*
  1 2 3 4
  1 2 3 4
  1 2 3 4
  1 2 3 4

#include <stdio.h>
#include <conio.h>
int main()
{
    int m,n;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    printf("Enter the Number of Columns: ");
    scanf("%d",&n);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    getch();
    return 0;
}
*/

/*
  *
  * *
  * * *
  * * * *
  * * * * *
  
#include <stdio.h>
#include <conio.h>
int main()
{
    int m;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    printf("\n");
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
*/

/*
  * * * * *
  * * * *
  * * *
  * *
  * 

#include <stdio.h>
#include <conio.h>
int main()
{
    int m,n;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    printf("Enter the Number of Columns: ");
    scanf("%d",&n);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n+1-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
    return 0;
}

                    Or

#include <stdio.h>
#include <conio.h>
int main()
{
    int m;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    int a=n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=a;j++)
        {
            printf("* ");
        }
        a--;
        printf("\n");
    }
    getch();
    return 0;
}
*/

/*
  1
  1 2
  1 2 3
  1 2 3 4
  1 2 3 4 5

#include <stdio.h>
#include <conio.h>
int main()
{
    int m;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    printf("\n");
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    getch();
    return 0;
}
*/

/*
  1 2 3 4 5
  1 2 3 4
  1 2 3
  1 2
  1
  
#include <stdio.h>
#include <conio.h>
int main()
{
    int m,n;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    printf("Enter the Number of Columns: ");
    scanf("%d",&n);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n+1-i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    getch();
    return 0;
}
*/

/*
  1 3 5 7 9
  1 3 5 7 9
  1 3 5 7 9
  1 3 5 7 9
  1 3 5 7 9

#include <stdio.h>
#include <conio.h>
int main()
{
    int m,n;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    printf("Enter the Number of Columns: ");
    scanf("%d",&n);
    for(int i=1;i<=m;i++)
    {
        int a=1;
        for(int j=1;j<=n;j++)
        {
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");
    }
    getch();
    return 0;
}

                    Or

#include <stdio.h>
#include <conio.h>
int main()
{
    int m,n;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    printf("Enter the Number of Columns: ");
    scanf("%d",&n);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=2*n-1;j=j+2)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    getch();
    return 0;
}
*/

/*
  1
  1 3
  1 3 5
  1 3 5 7
  1 3 5 7 9

#include <stdio.h>
#include <conio.h>
int main()
{
    int m;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        int a=1;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");
    }
    getch();
    return 0;
}
*/

/*
  A B C D E
  A B C D E
  A B C D E
  A B C D E
  A B C D E

#include <stdio.h>
#include <conio.h>
int main()
{
  int m,n;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("Enter the Number of Columns: ");
  scanf("%d",&n);
  for(int i=1;i<=m;i++)
  {
    int a=1;
    for(int j=1;j<=n;j++)
    {
      int d=a+64;
      printf("%c ",d);
      if(a+64<90)
      {
        a++;
      }
      else
      {
        break;
      }
    }
    printf("\n");
  }
  getch();
  return 0;
}

                     Or

#include <stdio.h>
#include <conio.h>
int main()
{
  int m,n;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("Enter the Number of Columns: ");
  scanf("%d",&n);
  for(int i=1;i<=m;i++)
  {
    int a=1;
    for(int j=1;j<=n;j++)
    {
      int d=a+64;
      char ch=(char)d;
      printf("%c ",ch);
      if(a+64<90)
      {
        a++;
      }
      else
      {
        break;
      }
    }
    printf("\n");
  }
  getch();
  return 0;
}

                   Or

#include <stdio.h>
#include <conio.h>
int main()
{
  int m,n;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("Enter the Number of Columns: ");
  scanf("%d",&n);
  for(int i=1;i<=m;i++)
  {
    int a=1;
    for(int j=1;j<=n;j++)
    {
      char ch=(char)(a+64);
      printf("%c ",ch);
      if(a+64<90)
      {
        a++;
      }
      else
      {
        break;
      }
    }
    printf("\n");
  }
  getch();
  return 0;
}
*/

/*
  1
  A B
  1 2 3
  A B C D
  1 2 3 4 5

#include <stdio.h>
#include <conio.h>
int main()
{
    int m;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        int a=65;
        for(int j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%c ",a);
                if(a<90)
                {
                    a=a+1;
                }
                else
                {
                    break;
                }
            }
            else
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
*/

/*
  # # * # #
  # # * # #
  * * * * * 
  # # * # #  
  # # * # #

#include <stdio.h>
#include <conio.h>
int main()
{
    int m,n;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    printf("Enter the Number of Columns: ");
    scanf("%d",&n);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==n/2+1||j==n/2+1)
            {
                printf("* ");
            }
            else
            {
                printf("# ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}

                  Or

#include <stdio.h>
#include <conio.h>
int main()
{
    int m,n;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    printf("Enter the Number of Columns: ");
    scanf("%d",&n);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
          int a=n/2+1;
            if(i==a||j==a)
            {
                printf("* ");
            }
            else
            {
                printf("# ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
*/

/*
  # # # # #
  # # # # #
  # # * # #
  # # # # #
  # # # # #

#include <stdio.h>
#include <conio.h>
int main()
{
    int m,n;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    printf("Enter the Number of Columns: ");
    scanf("%d",&n);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
          int a=n/2+1;
            if(i==a&&j==a)
            {
                printf("* ");
            }
            else
            {
                printf("# ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
*/

/*
      *
      *
  * * * * * 
      * 
      *

#include <stdio.h>
#include <conio.h>
int main()
{
    int m,n;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    printf("Enter the Number of Columns: ");
    scanf("%d",&n);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
          int a=n/2+1;
            if(i==a||j==a)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
*/

/*
  * * * * * *
  *         *
  *         *
  * * * * * *

#include <stdio.h>
#include <conio.h>
int main()
{
    int m,n;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    printf("Enter the Number of Columns: ");
    scanf("%d",&n);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1||j==1||i==m||j==n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
*/

/*
  * # # # *
  # * # * #
  # # * # #  
  # * # * # 
  * # # # *

#include <stdio.h>
#include <conio.h>
int main()
{
    int m,n;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    printf("Enter the Number of Columns: ");
    scanf("%d",&n);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j||i+j==n+1)
            {
                printf("* ");
            }
            else
            {
                printf("# ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
*/

/*
  *       *
    *   * 
      *   
    *   * 
  *       *

#include <stdio.h>
#include <conio.h>
int main()
{
    int m,n;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    printf("Enter the Number of Columns: ");
    scanf("%d",&n);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j||i+j==n+1)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
*/

/*
  1
  2 3
  4 5 6
  7 8 9 10 
  11 12 13 14 15

#include <stdio.h>
#include <conio.h>
int main()
{
  int m,a=1;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=i;j++)
    {
      printf("%d ",a);
      a++;
    }
    printf("\n");
  }
  getch();
  return 0;
}
*/

/*
  1
  0 1
  1 0 1
  0 1 0 1

#include <stdio.h>
#include <conio.h>
int main()
{
    int m,a;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
      if(i%2!=0)
      {
        a=1;
      }
      else
      {
        a=0;
      }
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a);
            if(a==0)
            {
              a=1;
            }
            else
            {
              a=0;
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}

                Or
            
#include <stdio.h>
#include <conio.h>
int main()
{
    int m,a;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
*/

/*
  ####*
  ###**
  ##***
  #****
  *****

#include <stdio.h>
#include <conio.h>
int main()
{
  int m;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=m-i;j++)
    {
      printf("#");
    }
    for(int k=1;k<=i;k++)
    {
      printf("*");
    }
    printf("\n");
  }
  getch();
  return 0;
}
*/

/*
      *
     **
    ***
   ****
  *****

#include <stdio.h>
#include <conio.h>
int main()
{
  int m;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=m-i;j++)
    {
      printf(" ");
    }
    for(int k=1;k<=i;k++)
    {
      printf("*");
    }
    printf("\n");
  }
  getch();
  return 0;
}
*/

/*
          * * * * *
        * * * * *
      * * * * *
    * * * * *
  * * * * *
*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int m;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    printf("\n");
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=m-i;j++)
    {
        printf("  ");
    }
    for(int k=m;k>=1;k--)
    {
      printf("* ");
    }
    printf("\n");
  }
  getch();
  return 0;
}


/*
       A
      AB
     ABC
    ABCD
   ABCDE

#include <stdio.h>
#include <conio.h>
int main()
{
  int m;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  for(int i=1;i<=m;i++)
  {
    int a=65;
    for(int j=1;j<=m-i;j++)
    {
      printf(" ");
    }
    for(int k=1;k<=i;k++)
    {
      printf("%c",a);
      a++;
    }
    printf("\n");
  }
  getch();
  return 0;
}
*/

/*
  *
  * * *
  * * * * *
  * * * * * * *
  * * * * * * * * *

#include <stdio.h>
#include <conio.h>
int main()
{
    int m;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    printf("\n");
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
    return 0;
}

                   Or

#include <stdio.h>
#include <conio.h>
int main()
{
    int m,nst=1;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    printf("\n");
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=nst;j++)
        {
            printf("* ");
        }
        nst=nst+2;
        printf("\n");
    }
    getch();
    return 0;
}
*/

/*
          * 
        * * * 
      * * * * * 
    * * * * * * * 
  * * * * * * * * *

#include <stdio.h>
#include <conio.h>
int main()
{
  int m;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  for(int i=1;i<=m;i++)
  {
    for(int space=1;space<=m-i;space++)
    {
      printf("  ");
    }
    for(int j=1;j<=2*i-1;j++)
    {
      printf("* ");
    }
    printf("\n");
  }
  getch();
  return 0;
}

                   Or
             
#include <stdio.h>
#include <conio.h>
int main()
{
    int m,nst=1;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    printf("\n");
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m-i;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=nst;k++)
        {
            printf("* ");
        }
        nst=nst+2;
        printf("\n");
    }
    getch();
    return 0;
}

                      Or

#include <stdio.h>
#include <conio.h>
int main()
{
    int m,nst=1;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    printf("\n");
    int nsp=m-1;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=nsp;j++)
        {
            printf("  ");
        }
        nsp=nsp-1;
        for(int k=1;k<=nst;k++)
        {
            printf("* ");
        }
        nst=nst+2;
        printf("\n");
    }
    getch();
    return 0;
}
*/

/*
          1
        1 2 3
      1 2 3 4 5
    1 2 3 4 5 6 7
  1 2 3 4 5 6 7 8 9

#include <stdio.h>
#include <conio.h>
int main()
{
  int m;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=m-i;j++)
    {
      printf("  ");
    }
    for(int k=1;k<=2*i-1;k++)
    {
      printf("%d ",k);
    }
    printf("\n");
  }
  getch();
  return 0;
}
*/

/*
          A
        A B C
      A B C D E
    A B C D E F G
  A B C D E F G H I

#include <stdio.h>
#include <conio.h>
int main()
{
  int m;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  for(int i=1;i<=m;i++)
  {
    int a=65;
    for(int j=1;j<=m-i;j++)
    {
      printf("  ");
    }
    for(int k=1;k<=2*i-1;k++)
    {
      printf("%c ",a);
      a++;
    }
    printf("\n");
  }
  getch();
  return 0;
}
*/

/*
  1
  2 1
  3 2 1
  4 3 2 1
  5 4 3 2 1

#include <stdio.h>
#include <conio.h>
int main()
{
  int m;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  for(int i=1;i<=m;i++)
  {
    int a=i-1;
    for(int j=1;j<=i-1;j++)
    {
      printf("%d ",a);
      a--;
    }
    printf("\n");
  }
  getch();
  return 0;
}
*/

/*
  1
  1 2 *
  1 2 3 * *
  1 2 3 4 * * *
  1 2 3 4 5 * * * *

#include <stdio.h>
#include <conio.h>
int main()
{
  int m;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=i;j++)
    {
      printf("%d ",j);
    }
    for(int k=1;k<=i-1;k++)
    {
      printf("* ",);
    }
    printf("\n");
  }
  getch();
  return 0;
}
*/

/*
  1
  1 2 1
  1 2 3 2 1
  1 2 3 4 3 2 1
  1 2 3 4 5 4 3 2 1

#include <stdio.h>
#include <conio.h>
int main()
{
  int m;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=i;j++)
    {
      printf("%d ",j);
    }
    int a=i-1;
    for(int k=1;k<=i-1;k++)
    {
      printf("%d ",a);
      a--;
    }
    printf("\n");
  }
  getch();
  return 0;
}
*/

/*
          1
        1 2 *
      1 2 3 * *
    1 2 3 4 * * *
  1 2 3 4 5 * * * *

#include <stdio.h>
#include <conio.h>
int main()
{
  int m;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  int nsp=m-1;
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=nsp;j++)
    {
      printf("  ");
    }
    nsp--;
    for(int k=1;k<=i;k++)
    {
      printf("%d ",k);
    }
    for(int l=1;l<=i-1;l++)
    {
      printf("* ");
    }
    printf("\n");
  }
  getch();
  return 0;
}
*/

/*
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
  1 2 3 4 5 4 3 2 1

#include <stdio.h>
#include <conio.h>
int main()
{
  int m;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  int nsp=m-1;
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=nsp;j++)
    {
      printf("  ");
    }
    nsp--;
    for(int k=1;k<=i;k++)
    {
      printf("%d ",k);
    }
    int a=i-1;
    for(int l=1;l<=i-1;l++)
    {
      printf("%d ",a);
      a--;
    }
    printf("\n");
  }
  getch();
  return 0;
}
*/

/*
          A
        A B A
      A B C B A
    A B C D C B A
  A B C D E D C B A

#include <stdio.h>
#include <conio.h>
int main()
{
  int m;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  for(int i=1;i<=m;i++)
  {
    int a=i-1;
    for(int j=1;j<=m-i;j++)
    {
      printf("  ");
    }
    for(int k=1;k<=i;k++)
    {
      char ch=(char)(k+64);
      printf("%c ",ch);
    }
    for(int l=1;l<=i-1;l++)
    {
      char ch=(char)(a+64);
      printf("%c ",ch);
      a--;
    }
    printf("\n");
  }
  getch();
  return 0;
}  
*/

/*
          *
        * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          * 

#include <stdio.h>
#include <conio.h>
int main()
{
    int m,nst=1;
    printf("Enter the Number of Rows: ");
    scanf("%d",&m);
    printf("\n");
    int nsp=m/2,ml=(m/2)+1;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=nsp;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=nst;k++)
        {
            printf("* ");
        }
        if(i<ml)
        {
          nsp--;
          nst+=2;
        }
        else
        {
          nsp++;
          nst-=2;
        }
        printf("\n");
    }
    getch();
    return 0;
}
*/

/*
  * * * * *
    * * * *
      * * * 
        * *
          *

#include <stdio.h>
#include <conio.h>
int main()
{
  int m;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  int nst=m,nsp=0;
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=nsp;j++)
    {
      printf("  ");
    }
    nsp++;
    for(int k=1;k<=nst;k++)
    {
      printf("* ");
    }
    nst--;
    printf("\n");
  }
  getch();
  return 0;
}
*/

/*
  * * * * *   * * * * *
  * * * *       * * * *
  * * *           * * *
  * *               * *
  *                   *

#include <stdio.h>
#include <conio.h>
int main()
{
  int m;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  int nst=m,nsp=1;
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=nst;j++)
    {
      printf("* ");
    }
    for(int k=1;k<=nsp;k++)
    {
      printf("  ");
    }
    for(int l=1;l<=nst;l++)
    {
      printf("* ");
    }
    nst--;
    nsp+=2;
    printf("\n");
  }
  getch();
  return 0;
}
*/

/*
  * * * * * * * * * * *
  * * * * *   * * * * *
  * * * *       * * * *
  * * *           * * *
  * *               * *
  *                   *

#include <stdio.h>
#include <conio.h>
int main()
{
  int m;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  int nst=m,nsp=1;
  for(int i=1;i<=2*m+1;i++)
  {
    printf("* ");
  }
  printf("\n");
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=nst;j++)
    {
      printf("* ");
    }
    for(int k=1;k<=nsp;k++)
    {
      printf("  ");
    }
    for(int l=1;l<=nst;l++)
    {
      printf("* ");
    }
    nst--;
    nsp+=2;
    printf("\n");
  }
  getch();
  return 0;
}
*/

/*
  1 2 3 4 5 6 7 8 9
  1 2 3 4   1 2 3 4
  1 2 3       1 2 3
  1 2           1 2
  1               1

#include <stdio.h>
#include <conio.h>
int main()
{
  int m;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  int nst=m,nsp=1;
  for(int i=1;i<=2*m+1;i++)
  {
    printf("%d ",i);
  }
  printf("\n");
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=nst;j++)
    {
      printf("%d ",j);
    }
    for(int k=1;k<=nsp;k++)
    {
      printf("  ");
    }
    for(int l=1;l<=nst;l++)
    {
      printf("%d ",l);
    }
    nst--;
    nsp+=2;
    printf("\n");
  }
  getch();
  return 0;
}
*/

/*
  1 2 3 4 5 6 7 8 9
  1 2 3 4   5 6 7 8
  1 2 3       6 7 8
  1 2           7 8
  1               8

#include <stdio.h>
#include <conio.h>
int main()
{
  int m;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  int nst=m,nsp=1;
  for(int i=1;i<=2*m+1;i++)
  {
    printf("%d ",i);
  }
  printf("\n");
  for(int i=1;i<=m;i++)
  {
    int a=1;
    for(int j=1;j<=nst;j++)
    {
      printf("%d ",a);
      a++;
    }
    for(int k=1;k<=nsp;k++)
    {
      printf("  ");
    }
    for(int l=1;l<=nst;l++)
    {
      printf("%d ",a);
      a++;
    }
    nst--;
    nsp+=2;
    printf("\n");
  }
  getch();
  return 0;
}
*/

/*
  1 2 3 4 5 6 7 8 9
  1 2 3 4   6 7 8 9
  1 2 3       7 8 9
  1 2           8 9
  1               9

#include <stdio.h>
#include <conio.h>
int main()
{
  int m;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  int nst=m,nsp=1;
  for(int i=1;i<=2*m+1;i++)
  {
    printf("%d ",i);
  }
  printf("\n");
  for(int i=1;i<=m;i++)
  {
    int a=1;
    for(int j=1;j<=nst;j++)
    {
      printf("%d ",a);
      a++;
    }
    for(int k=1;k<=nsp;k++)
    {
      printf("  ");
      a++;
    }
    for(int l=1;l<=nst;l++)
    {
      printf("%d ",a);
      a++;
    }
    nst--;
    nsp+=2;
    printf("\n");
  }
  getch();
  return 0;
}
*/

/*
  A B C D E F G H I
  A B C D   F G H I
  A B C       G H I
  A B           H I
  A               I

#include <stdio.h>
#include <conio.h>
int main()
{
  int m,a=65;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  int nst=m;nsp=1;
  for(int i=1;i<=2*m+1;i++)
  {
    printf("%c ",a);
    a++;
  }
  printf("\n");
  for(int i=1;i<=m;i++)
  {
    a=65;
    for(int j=1;j<=nst;j++)
    {
      printf("%c ",a);
      a++;
    }
    for(int k=1;k<=nsp;k++)
    {
      printf("  ");
      a++;
    }
    for(int l=1;l<=nst;l++)
    {
      printf("%c ",a);
      a++;
    }
    printf("\n");
    nst--;
    nsp+=2;
  }
  getch();
  return 0;
}
*/

/*
  5 4 3 2 1
  5 4 3 2
  5 4 3
  5 4
  5

#include <stdio.h>
#include <conio.h>
int main()
{
  int m;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  int nst=m;
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=nst;j++)
    {
      printf("%d ",j);
    }
    nst--;
    printf("\n");
  }
  getch();
  return 0;
}
*/

/*
  1 2 3 4 5 4 3 2 1
  1 2 3 4   4 3 2 1
  1 2 3       3 2 1
  1 2           2 1
  1               1

#include <stdio.h>
#include <conio.h>
int main()
{
  int m;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  int nst=m,nsp=1;
  for(int i=1;i<=2*m+1;i++)
  {
    if(i<=(2*m+1)/2+1)
    {
      printf("%d ",i);
    }
    else
    {
      printf("%d ",(2*m+1)+1-i);
    }
  }
  printf("\n");
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=nst;j++)
    {
      printf("%d ",j);
    }
    for(int k=1;k<=nsp;k++)
    {
      printf("  ");
    }
    for(int l=nst;l>=1;l--)
    {
      printf("%d ",l);
    }
    nst--;
    nsp+=2;
    printf("\n");
  }
  getch();
  return 0;
}
*/

/*
  1 1 1 1 1
  1 2 2 2 2
  1 2 3 3 3
  1 2 3 4 4
  1 2 3 4 5

#include <stdio.h>
#include <conio.h>
int main()
{
  int m,min=0;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=m;j++)
    {
      if(i<j)
      {
        min=i;
      }
      else
      {
        min=j;
      }
      printf("%d ",min);
    }
    printf("\n");
  }
  getch();
  return 0;
}
*/

/*
  1 1 1 1 1 1 1 1 1
  1 2 2 2 2 2 2 2 1
  1 2 3 3 3 3 3 2 1
  1 2 3 4 4 4 3 2 1
  1 2 3 4 5 4 3 2 1
  1 2 3 4 4 4 3 2 1
  1 2 3 3 3 3 3 2 1
  1 2 2 2 2 2 2 2 1
  1 1 1 1 1 1 1 1 1

#include <stdio.h>
#include <conio.h>
int main()
{
  int m,min=0;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  for(int i=1;i<=2*m-1;i++)
  {
    for(int j=1;j<=2*m-1;j++)
    {
      int a=i,b=j;
      if(i>m)
      {
        a=2*m-i;
      }
      if(b>m)
      {
        b=2*m-j;
      }
      if(a<b)
      {
        min=a;
      }
      else
      {
        min=b;
      }
      printf("%d ",min);
    }
    printf("\n");
  }
  getch();
  return 0;
}
*/

/*
  5 5 5 5 5 5 5 5 5
  5 4 4 4 4 4 4 4 5 
  5 4 3 3 3 3 3 4 5
  5 4 3 2 2 2 3 4 5
  5 4 3 2 1 2 3 4 5
  5 4 3 2 2 2 3 4 5
  5 4 3 3 3 3 3 4 5
  5 4 4 4 4 4 4 4 5
  5 5 5 5 5 5 5 5 5

#include <stdio.h>
#include <conio.h>
int main()
{
  int m,min=0;
  printf("Enter the Number of Rows: ");
  scanf("%d",&m);
  printf("\n");
  for(int i=1;i<=2*m-1;i++)
  {
    for(int j=1;j<=2*m-1;j++)
    {
      int a=i,b=j;
      if(i>m)
      {
        a=2*m-i;
      }
      if(b>m)
      {
        b=2*m-j;
      }
      if(a<b)
      {
        min=a;
      }
      else
      {
        min=b;
      }
      printf("%d ",m+1-min);
    }
    printf("\n");
  }
  getch();
  return 0;
}
*/

