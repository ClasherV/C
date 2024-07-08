/*...........................................................................................

....................................Introduction.............................................

...........................................................................................*/

/*
#include <stdio.h>
#include <conio.h>
void main()
{
  printf("Hello World");
  getch();
}

// O/p: Hello World
*/

/*
#include <stdio.h>
#include <conio.h>
#define Max 100
int a=50;
void display();
void main()
{
  printf("Hello\n");
  display();
  getch();
}
void display()
{
  printf("Jenny's Lectures");
}

// O/p: Hello
//      Jenny's Lectures
*/

/*
#include <stdio.h>
void main()
{
  int a=10,b=-10,c=010,d=0x10,e=0X10,f=0x7F;
  printf("%d %o %x\n",a,a,a);
  printf("%d %o %x\n",b,b,b);
  printf("%d %o %x\n",c,c,c);
  printf("%d %o %x\n",d,d,d);
  printf("%d %o %x\n",e,e,e);
  printf("%d %o %x\n",f,f,f);  
}

// O/p: 10 12 a
//      -10 37777777766 fffffff6
//      8 10 8
//      16 20 10
//      16 20 10
//      127 177 7f
*/

/*
#include <stdio.h>
void main()
{
  char a='a',b='5',c='/0',d=',',e='@',f='A';
  printf("%d\n",a);
  printf("%c\n",a);
  printf("%c %c %c %c %C %C",a,b,c,d,e,f);
}

// O/p: 7
//      a
//      a 5 0 , @ A
*/

/*
#include <stdio.h>
void main()
{
  printf("a\n");
  printf("Vaibhav\n");
  printf("ab$\n");
  printf("12345");
}

// O/p: a
//      Vaibhav
//      ab$
//      12345
*/

/*
#include <stdio.h>
void main()
{
  const int a=10;
  printf("%d",a);
}

// O/p: 10
*/

/*
#include <stdio.h>
void main()
{
  int a=1,abc=2,_ab=3,a_b=4,a1=5,A=6;
  printf("%d %d %d %d %d %d",a,abc,_ab,a_b,a1,A);
}

// O/p: 1 2 3 4 5 6
*/

/*
#include <stdio.h>
void main()
{
  typedef int Jenny;
  Jenny a=2;
  printf("%d",a);
}

// O/p: 2
*/

/*...........................................................................................

....................................Datatypes................................................
....................................Integer..................................................

...........................................................................................*/

/*
#include <stdio.h>
void main()
{
  int a=10,b=-10;
  short int c=10,d=-10;
  long int e=10,f=-10;
  printf("%d %i %u %hd %hu %ld %lu %d\n",a,a,a,a,a,a,a,sizeof(int));  
  printf("%d %i %u %hd %hu %ld %lu %d\n",b,b,b,b,b,b,b,sizeof(int));
  printf("%d %i %u %hd %hu %ld %lu %d\n",c,c,c,c,c,c,c,sizeof(short int));
  printf("%d %i %u %hd %hu %ld %lu %d\n",d,d,d,d,d,d,d,sizeof(short int));
  printf("%d %i %u %hd %hu %ld %lu %d\n",e,e,e,e,e,e,e,sizeof(long int));
  printf("%d %i %u %hd %hu %ld %lu %d\n",f,f,f,f,f,f,f,sizeof(long int));
}

// O/p: 10 10 10 10 10 10 10 4
//      -10 -10 4294967286 -10 65526 -10 4294967286 4
//      10 10 10 10 10 10 10 2
//      -10 -10 4294967286 -10 65526 -10 4294967286 2
//      10 10 10 10 10 10 10 4
//      -10 -10 4294967286 -10 65526 -10 4294967286 4
*/

/*
#include <stdio.h>
void main()
{
  printf("%c",98);
}

// O/p: b
*/

/*...........................................................................................

....................................Datatypes................................................
....................................Float....................................................

...........................................................................................*/

/*
#include <stdio.h>
void main()
{
  float a=12.2222222222;
  double b=12.2222222222;
  long double c=12.2222222222;
  printf("%f %lf %Lf %e %E %d\n",a,a,a,a,a,sizeof(float));
  printf("%f %lf %Lf %E %d\n",b,b,b,b,sizeof(double));
  printf("%f %lf %Lf %E %d\n",c,c,c,c,sizeof(long double));
}

// O/p: 12.222222 12.222222 12.222222 1.222222e+001 1.222222E+001 4
//      12.222222 12.222222 12.222222 1.222222E+001 8
//      -272217576656732160.000000 -0.000000 12.125021 -2.722176E+017 16386
*/

/*...........................................................................................

....................................Datatypes................................................
....................................Signed,Unsigned,Short,Long Int...........................

...........................................................................................*/

/*
#include <stdio.h>
#include <conio.h>
void main()
{
  int a=32767,b=32768,c=32770;
  short int d=32768;
  long int e=32777777;
  unsigned int f=-32767;
  printf("%d %u %d %u %d %u %d %u %d %u %d %u\n",a,a,b,b,c,c,d,d,e,e,f,f);
  printf("%hd %hu %hd %hu %hd %hu %hd %hu %hd %hu %hd %hu\n",a,a,b,b,c,c,d,d,e,e,f,f);
  printf("%ld %lu %ld %lu %ld %lu %ld %lu %ld %lu %ld %lu",a,a,b,b,c,c,d,d,e,e,f,f);
  getch();
}

// O/p: 32767 32767 32768 32768 32770 32770 -32768 4294934528 32777777 32777777 -32767 4294934529
//      32767 32767 -32768 32768 -32766 32770 -32768 32768 9777 9777 -32767 32769
//      32767 32767 32768 32768 32770 32770 -32768 4294934528 32777777 32777777 -32767 4294934529
*/

/*...........................................................................................

....................................Datatypes................................................
....................................Character................................................

...........................................................................................*/

/*
#include <stdio.h>
#include <conio.h>
void main()
{
  char a='a';
  char b=98;
  char c='z';
  char d=130;
  unsigned char e=-130;
  unsigned char f=-129;
  printf("%c %c %c %c %c %c\n",a,b,c,d,e,f);
  printf("%d %d %d %d %d %u %d %u\n",a,b,c,d,e,e,f,f);
  getch();
}

// O/p: a b z é ~ ⌂
//      97 98 122 -126 126 126 127 127
*/

/*...........................................................................................

....................................Operators................................................
....................................Unary Operators..........................................
....................................Unary Minus..............................................

...........................................................................................*/

/*
#include <stdio.h>
void main()
{
  int a=10,b=5;
  int c=a+(-b);
  printf("%d\n",c);
  printf("%d\n",a+-b);
  a=-b;
  printf("%d",a);
}

// O/p: 5
//      5
//      -5
*/

/*...........................................................................................

....................................Operators................................................
....................................Unary Operators..........................................
....................................Postfix and Prefix Increment,Decrement...................

...........................................................................................*/

/*
#include <stdio.h>
void main()
{
  int x=11,y=10;
  y=x++;
  printf("x=%d\n",x);
  printf("y=%d\n",y);
  y=x--;
  printf("x=%d\n",x);
  printf("y=%d",y);
}

// O/p: x=12
//      y=11
//      x=11
//      y=12
*/

/*
#include <stdio.h>
void main()
{
  int x=11,y=10;
  y=++x;
  printf("x=%d\n",x);
  printf("y=%d\n",y);
  y=--x;
  printf("x=%d\n",x);
  printf("y=%d",y);
}

// O/p: x=12
//      y=12
//      x=11
//      y=11
*/

/*...........................................................................................

....................................Operators................................................
....................................Unary Operators..........................................
....................................Logical Not..............................................

...........................................................................................*/

/*
#include <stdio.h>
void main()
{
  int x=11,y=10;
  printf("%d\n",!(x>y));
  printf("%d",!(y>x));
}

// O/p: 0
//      1
*/

/*...........................................................................................

....................................Operators................................................
....................................Unary Operators..........................................
....................................Sizeof Operator..........................................

...........................................................................................*/

/*
#include <stdio.h>
void main()
{
  int a=10;
  char ch='a';
  printf("%d %d %d %d",sizeof(a),sizeof(ch),sizeof(int),sizeof(char));
}

// O/p: 4 1 4 1
*/

/*...........................................................................................

....................................Operators................................................
....................................Ternary Operator.........................................

...........................................................................................*/

/*
#include <stdio.h>
void main()
{
  int a=10,b=5;
  printf("%d\n",(a>b)?a:b);
  printf("%d\n",(a<b)?a:b);
}

// O/p: 10
//      5
*/

/*
#include <stdio.h>
void main()
{
  int a=10,b=5;
  if(a<b)
  {
    printf("%d",a);
  }
  else
  {
    printf("%d",b);
  }
}

// O/p: 5
*/

/*...........................................................................................

....................................Operators................................................
....................................Binary Operators.........................................
....................................Arithmetical Operators...................................

...........................................................................................*/

/*
#include <stdio.h>
#include <conio.h>
void main()
{
  int a=10,b=7,c=-10,d=-7;
  float e=7.5;
  printf("%d\n",a+b);  
  printf("%d\n",a-b);
  printf("%d\n",a*b);
  printf("%d\n",a/b);
  printf("%d\n",a%b);
  printf("%d\n",a%d);
  printf("%f\n",a%b);
  printf("%d\n",c%b);
  printf("%d\n",a%c);
  printf("%d\n",a+e);
  printf("%f\n",a+e);
  getch();  
}

// O/p: 17
//      3
//      70
//      1
//      3
//      3
//      -1.#QNAN0
//      -3
//      0
//      0
//      17.500000
*/

/*
#include <stdio.h>
void main()
{
  int a=10,b=8,c=6,d=4;
  printf("%d",a+b-c*d);
}

// O/p: -6
*/

/*...........................................................................................

....................................Operators................................................
....................................Binary Operators.........................................
....................................Assignment Operators.....................................

...........................................................................................*/

/*
#include <stdio.h>
void main()
{
  int a=5,b=4,c,d;
  a=5*4;
  a=a+b;
  a=b=c=d=10;
  a=a+1;
  a+=1;
  a=a-2;
  a-=2;
  a=a%10;
  a%=10;
  a=b+(c*10);
  a=a+(c*10);
  a+=c*10;
  printf("%d %d %d %d",a,b,c,d);
}

// O/p: 310 10 10 10
*/

/*...........................................................................................

....................................Operators................................................
....................................Unary Operators..........................................
....................................Postfix and Prefix Increment,Decrement...................

...........................................................................................*/

/*
#include <stdio.h>
void main()
{
  int x=10,y;
  y=++x;
  printf("%d\n",x);
  printf("%d\n",y);
}

// O/p: 11 11
*/

/*
#include <stdio.h>
void main()
{
  int x=10,y;
  y=x++;
  printf("%d\n",x);
  printf("%d\n",y);
}

// O/p: 11 10
*/

/*
#include <stdio.h>
void main()
{
  int x=10,y;
  y=x--;
  printf("%d\n",x);
  printf("%d\n",y);
}

// O/p: 9 10
*/

/*
#include <stdio.h>
void main()
{
  int x=10,y;
  y=--x;
  printf("%d\n",x);
  printf("%d\n",y);
}

// O/p: 9 9
*/

/*
#include <stdio.h>
void main()
{
  int a=5,b,c,d;
  b=++a;
  c=a++;
  d=++a;
  printf("%d %d %d %d\n",a,b,c,d);
}

// O/p: 8 6 6 8
*/

/*
#include <stdio.h>
void main()
{
  int a=5,b,c,d;
  b=++a + ++a;
  c=a++;
  d=++a;
  printf("%d %d %d %d\n",a,b,c,d);
}

// O/p: 9 14 7 9
*/

/*
#include <stdio.h>
void main()
{
  int a=5,b,c,d;
  b=++a - a++;
  c=a++;
  d=++a;
  printf("%d %d %d %d\n",a,b,c,d);
}

// O/p: 9 1 7 9
*/

/*...........................................................................................

....................................Operators................................................
....................................Binary Operators.........................................
....................................Relational Operators.....................................

...........................................................................................*/

/*
#include <stdio.h>
void main()
{
  int a=10,b=5,c=7;
  printf("%d %d",a<b,a+b<b+c);
}

// O/p: 1 0
*/

/*
#include <stdio.h>
void main()
{
  int a='a',b='b';
  printf("%d\n",a<b);
  printf("%d\n","Jenny's"<"Lectures");
}

// O/p: 1
//      1
*/

/*
#include <stdio.h>
void main()
{
  int a=-14;
  float b=4.5;
  printf("%d %d\n",a>3,b>4);
}

// O/p: 0 1
*/

/*
#include <stdio.h>
#include <conio.h>
void main()
{
  int a=18,b=9;
  printf("%d\n",a<b);
  printf("%d\n",'c'<'b');
  getch();
}

// O/p: 0
//      0
*/

/*
#include <stdio.h>
#include <conio.h>
void main()
{
  int a=18,b=9;
  printf("%d\n",a==b);
  printf("%d\n",a!=b);
  getch();
}

// O/p: 0
//      1
*/

/*
#include <stdio.h>
#include <conio.h>
void main()
{
  int a=18,b=9,c,d,e=10;
  c=b++;
  d=b;
  printf("%d\n",a<b<c>d);
  printf("%d\n",b==e);
  printf("%d\n",c+1>e);
  printf("%d\n",a+c==b>e<c+d);
  getch();
}

// O/p: 0
//      1
//      0
//      0
*/

/*
#include <stdio.h>
#include <conio.h>
void main()
{
  int a=18,b=9,c,d,e=10,f;
  c=b++;
  d=b;
  f=a>b>d<c;
  printf("%d\n",f!=1);
}

// O/p: 0
*/

/*
#include <stdio.h>
void main()
{
  float f=2.2,g=2.22,f1=2.00001,g1=2.000001;
  printf("%d\n",f==g);
  printf("%d\n",f1==g1);
}

// O/p: 0
//      0
*/

/*
#include <stdio.h>
void main()
{
  int a=18,b=9,c,d,e=10;
  c=b++;
  d=b;
  printf("%d\n",a+c==b>=e<c+d!=1);
}

// O/p: 1
*/

/*
#include <stdio.h>
void main()
{
  printf("%d %d\n",'+'=='+','<'>'>');
}

// O/p: 1 0
*/

/*...........................................................................................

....................................Operators................................................
....................................Binary Operators.........................................
....................................Logical Operators........................................

...........................................................................................*/

/*
#include <stdio.h>
void main()
{
  int a=10,b=5;
  int result=a>b&&b!=10&&b<11&&a<5;
  printf("%d\n",result);
  printf("%d\n",a<b||b==4);
  printf("%d\n",a>b||b==4);
  printf("%d\n",!5);
  printf("%d\n",!0);
  printf("%d\n",!(a>b));
}

// O/p: 0
//      0
//      1
//      0
//      1
//      0
*/

/*
#include <stdio.h>
void main()
{
  int a=4,b=6;
  int result=a>b&&printf("Jenny");
  printf("%d\n",result);
  int result1=a>b&&printf("Jenny")||printf("Lectures");
  printf("%d\n",result1);
  int result2=a>b&&printf("Jenny")||printf("Lectures")&&printf("JK");
  printf("%d\n",result2);
}

// O/p: 0
//      Lectures1
//      LecturesJK1
*/

/*
#include <stdio.h>
void main()
{
  int a=4,b=6;
  printf("%d\n",4&&!0);
  printf("%d\n",4&&0);
}

// O/p: 1
//      0
*/

/*
#include <stdio.h>
void main()
{
  int a=10,b=5,result;
  result=a>b&&a++;
  printf("%d\n",result);
  printf("%d\n",a);
}

// O/p: 1
//      11
*/

/*
#include <stdio.h>
void main()
{
  int a=10,b=5,result;
  result=(a<b)||a++;
  printf("%d\n",result);
  printf("%d\n",a);
}

// O/p: 1
//      11
*/

/*
#include <stdio.h>
void main()
{
  int a=10,b=5,result;
  result=(a>b)||a++;
  printf("%d\n",result);
  printf("%d\n",a);
}

// O/p: 1
//      10
*/

/*
#include <stdio.h>
void main()
{
  int a=1,b=6,c=1,d=6,result1,result2;
  result1=a--&&++b;
  result2=--c&&++d;
  printf("%d %d %d\n%d %d %d\n",result1,a,b,result2,c,d);
}

// O/p: 1 0 7
//      0 0 6
*/

/*...........................................................................................

....................................Operators................................................
....................................Binary Operators.........................................
....................................Bitwise Operators........................................

...........................................................................................*/

/*
#include <stdio.h>
void main()
{
  int a=10,b=6;
  printf("%d\n",a&b);
  printf("%d\n",a|b);
  printf("%d\n",a^b);
  printf("%d\n",a&b&&b+1||0);
  printf("%d\n",a&b&&b+1||0||b++);
  printf("%d\n",b);
  printf("%d\n",a&b&&b+1||0&&b++);
  printf("%d\n",b);
}

// O/p: 2
//      14
//      12
//      1
//      1
//      6
//      1
//      6
*/

/*
#include <stdio.h>
void main()
{
  int a=10,a1=5,b,c,d,e,f,g;
  b=a<<2;
  c=a<<4;
  d=a>>2;
  e=a>>4;
  f=~a1;
  g=~a;
  printf("%d %d %d %d %d %d %d %d %d %d %d %d %d\n",b,c,d,e,f,g,~5,~10,5<<1,10>>2,(a+1)<<2,(a+2)>>1,~(a+3));
}

// O/p: 40 160 2 0 -6 -11 -6 -11 10 2 44 6 -14
*/

/*...........................................................................................

....................................Operators................................................
....................................Special Operators........................................
....................................Comma Operators..........................................

...........................................................................................*/

/*
#include <stdio.h>
void main()
{
  int a,b,c=(5,4);
  a=5,4;
  b=(5,4);
  printf("%d %d %d\n",a,b,c);
}

// O/p: 5 4 4
*/

/*
#include <stdio.h>
void main()
{
  int a,b,c,d;
  a=(printf("Jenny"),2);
  printf("%d\n",a);
  b=(printf("Jenny"),2,3);
  printf("%d\n",b);
  c=(printf("Jenny"),2,3,4);
  printf("%d\n",c);
  d=printf("Jenny"),2,3,4;
  printf("%d\n",d);
}

// O/p: Jenny2
//      Jenny3
//      Jenny4
//      Jenny5
*/

/*
#include <stdio.h>
void main()
{
  int a=8,b;
  b=(a++,++a);
  printf("%d %d\n",a,b);
  b=(a++,++a,a>>2);
  printf("%d %d\n",a,b);
  b=a++,++a;
  printf("%d %d\n",a,b);
}

// O/p: 10 10
//      12 3
//      14 12
*/

/*...........................................................................................

..............................Formatted and Unformatted Input Output Functions...............

...........................................................................................*/

/*
#include <stdio.h>
void main()
{
  printf("%d %d %d %d %d",2+3*4,2+3*4/2*12,3*4%5/2,3*(4%5)/2,3*4+5*6);
}

// O/p: 14 74 1 6 42
*/

/*
#include <stdio.h>
void main()
{
  int a=0,b=1,c=-1;
  printf("%d",--a*(5+b)/2-c++*b);
}

// O/p: -2
*/

/*
#include <stdio.h>
#include <conio.h>
void main()
{
  int a,b,sum;
  printf("Enter the Value of a: ");
  scanf("%d",&a);
  printf("Enter the Value of b: ");
  scanf("%d",&b);
  sum=a+b;
  printf("Sum of a+b is %d",sum);
  getch();
}

// O/p: Enter the Value of a: 10
//      Enter the Value of b: 5
//      Sum of a+b is 15
*/

/*
#include <stdio.h>
#include <conio.h>
void main()
{
  int a,b,sum;
  printf("Enter 2 Numbers: ");
  scanf("%4d %d",&a,&b);
  sum=a+b;
  printf("Sum is: %d",sum);
  getch();
}

// O/p: Enter 2 Numbers: 12345 16
//      Sum is: 1250

/*
#include <stdio.h>
#include <conio.h>
void main()
{
  int a;
  float b;
  char c;
  printf("Enter 3 Values: ");
  scanf("%d %f %c",&a,&b,&c);
  printf("%d %f %c",a,b,c);
  getch();
}

// O/p: Enter 3 Values: 12 15.233 V
//      12 15.233000 V
*/

/*
#include <stdio.h>
#include <conio.h>
void main()
{
  int a,b,sum,x;
  printf("Enter 2 Numbers: ");
  x=scanf("%d %d",&a,&b);
  sum=a+b;
  printf("%d\n",sum);
  printf("%d",x);
  getch();
}

// O/p: Enter 2 Numbers: 10 5
//      15
//      2
*/

/*
#include <stdio.h>
#include <conio.h>
void main()
{
  int a,b,sum;
  printf("Enter two Numbers: ");
  scanf("%d %d",&a,&b);
  sum=a+b;
  printf("a=%d, b=%d\nSum=%d",a,b,sum);
  getch();
}

// O/p: Enter two Numbers: 10 5
//      a=10, b=5
//      Sum=15
*/

/*
#include <stdio.h>
#include <conio.h>
void main()
{
  int a=1234;
  printf("%6d\n",a);
  printf("%-6d\n",a);
  printf("%06d",a);
  getch();
}

// O/p:   1234
//      1234  
//      001234
*/

/*
#include <stdio.h>
#include <conio.h>
void main()
{
  float a=1234.3456;
  printf("%10.2f\n",a);
  printf("%5.2f",a);
  getch();
}

// O/p:    1234.35
//      1234.35
*/

/*
#include <stdio.h>
#include <conio.h>
void main()
{
  float a=1234.345678999;
  printf("%10.2e\n",a);
  printf("%5.2e",a);
  getch();
}

// O/p:  1.23e+003
//      1.23e+003
*/

/*
#include <stdio.h>
#include <conio.h>
void main()
{
  char ch='V';
  printf("%10c\n",ch);
  printf("%5c",ch);
  getch();
}

// O/p:          V
//          V
*/

/*
#include <stdio.h>
void main()
{
  char ch;
  ch=getchar();
  printf("ch=%c",ch);
}

// O/p: Vaibhav
//      ch=V
*/

/*
#include <stdio.h>
#include <conio.h>
void main()
{
  char ch=getch();
  printf("ch=%c",ch);
}

// O/p: ch=V
*/

/*
#include <stdio.h>
#include <conio.h>
void main()
{
  char ch=getche();
  printf("\nch=%c",ch);
}

// O/p: V
//      ch=V
*/

/*
#include <stdio.h>
void main()
{
  char ch[10];
  gets(ch);
  printf("ch=%s",ch);
}

// O/p: Vaibhav Raikwar
//      ch=Vaibhav Raikwar
*/

/*
#include <stdio.h>
void main()
{
  char ch;
  printf("Enter a Character: ");
  ch=getchar();
  putchar(ch);
  putchar('\n');
  putchar('R');
}

// O/p: Enter a Character: V
//      V
//      R
*/

/*
#include <stdio.h>
#include <conio.h>
void main()
{
  char ch;
  printf("Enter a Character: ");
  ch=getchar();
  putch(ch);
  putch('\n');
  putch('R');
}

// O/p: Enter a Character: V
//      V
//      R
*/

/*
#include <stdio.h>
void main()
{
  char ch[10];
  printf("Enter a String: ");
  gets(ch);
  puts(ch);
}

// O/p: Enter a String: Vaibhav Raikwar
//      Vaibhav Raikwar
*/

/*...........................................................................................

..................................Conditional Statements.....................................

...........................................................................................*/

/*
#include <stdio.h>
void main()
{
  int a;
  printf("Enter the Value of a: ");
  scanf("%d",&a);
  if(a)
  printf("Inside if Block\n");
  printf("Outside if Block");
  
}

// O/p 1: Enter the Value of a: 5 
//        Inside if Block
//        Outside if Block
//
// O/p 2: Enter the Value of a: 0
//        Outside if Block
*/

/*
#include <stdio.h>
void main()
{
  int a;
  printf("Enter the Value of a: ");
  scanf("%d",&a);
  if(a)
  {
    printf("Inside if Block\n");
    printf("Value of a=%d\n",a);
  }
  printf("Outside if Block");
}

// O/p 1: Enter the Value of a: 5
//        Inside if Block
//        Value of a=5
//        Outside if Block
//
// O/p 2: Enter the Value of a: 0
//        Outside if Block
*/

/*
#include <stdio.h>
void main()
{
  int a;
  printf("Enter the Value of a: ");
  scanf("%d",&a);
  if(a)
  printf("Inside if Block\n");
  printf("Value of a=%d\n",a);
  printf("Outside if Block");
}

// O/p 1: Enter the Value of a: 5
//        Inside if Block
//        Value of a=5
//        Outside if Block
//
// O/p 2: Enter the Value of a: 0
//        Value of a=0
//        Outside if Block
*/

/*
#include <stdio.h>
void main()
{
  int a;
  printf("Enter the Value of a: ");
  scanf("%d",&a);
  if(a);
  {
    printf("Inside if Block\n");
    printf("Value of a=%d\n",a);
  }
  printf("Outside if Block");
}

// O/p 1: Enter the Value of a: 5
//        Inside if Block
//        Value of a=5
//        Outside if Block
//
// O/p 2: Enter the Value of a: 0
//        Inside if Block
//        Value of a=0
//        Outside if Block
*/

/*
#include <stdio.h>
void main()
{
  int age;
  printf("Enter Your Age: ");
  scanf("%d",&age);
  if(age>20)
  {
    printf("Your Age is %d\n",age);
    printf("You can go Coffee with Me\n");
  }
  printf("It's Time to go Home");
}

// O/p 1: Enter Your Age: 25
//        Your Age is 25
//        You can go Coffee with Me
//        It's Time to go Home
//
// O/p 2: Enter Your Age: 18
//        It's Time to go Home
*/

/*
#include <stdio.h>
void main()
{
  int age;
  printf("Enter Your Age: ");
  scanf("%d",&age);
  if(age==25)
  {
    printf("Your Age is %d\n",age);
    printf("You can go Coffee with Me\n");
  }
  printf("It's Time to go Home");
}

// O/p 1: Enter Your Age: 25
//        Your Age is 25
//        You can go Coffee with Me
//        It's Time to go Home
//
// O/p 2: Enter Your Age: 18
//        It's Time to go Home
*/

/*
#include <stdio.h>
void main()
{
  int age;
  printf("Enter Your Age: ");
  scanf("%d",&age);
  if(age=25)
  {
    printf("Your Age is %d\n",age);
    printf("You can go Coffee with Me\n");
  }
  printf("It's Time to go Home");
}

// O/p 1: Enter Your Age: 25
//        Your Age is 25
//        You can go Coffee with Me
//        It's Time to go Home
//
// O/p 2: Enter Your Age: 18
//        Your Age is 25
//        You can go Coffee with Me
//        It's Time to go Home
//
// O/p 3: Enter Your Age: 0
//        Your Age is 25
//        You can go Coffee with Me
//        It's Time to go Home
*/

/*
#include <stdio.h>
void main()
{
  int age;
  printf("Enter Your Age: ");
  scanf("%d",&age);
  if(!age)
  {
    printf("Your Age is %d\n",age);
    printf("You can go Coffee with Me\n");
  }
  printf("It's Time to go Home");
}

// O/p 1: Enter Your Age: 0
//        Your Age is 0
//        You can go Coffee with Me
//        It's Time to go Home
//
// O/p 2: Enter Your Age: 18
//        It's Time to go Home
*/

/*
#include <stdio.h>
void main()
{
  int age;
  printf("Enter Your Age: ");
  scanf("%d",&age);
  if(age>20&&age<30)
  {
    printf("Your Age is %d\n",age);
    printf("You can go Coffee with Me\n");
  }
  if(age>15)
  {
    printf("Your Age is %d\n",age);
    printf("It's Time to go Home\n");
  }
}

// O/p 1: Enter Your Age: 25
//        Your Age is 25
//        You can go Coffee with Me
//        Your Age is 25
//        It's Time to go Home
//
// O/p 2: Enter Your Age: 30
//        Your Age is 30
//        It's Time to go Home
//
// O/p 3: Enter Your Age: 18
//        Your Age is 18
//        It's Time to go Home
//
// O/p 4: Enter Your Age: 14
*/

/*
#include <stdio.h>
void main()
{
  int age;
  printf("Enter Your Age: ");
  scanf("%d",&age);
  if(age>20&&age<30)
  {
    printf("Your Age is %d\n",age);
    printf("You can go Coffee with Me\n");
  }
  else
  {
    printf("Your Age is %d\n",age);
    printf("It's Time to go Home\n");
  }
  printf("Out of if-ele Blocks\n");
}

// O/p 1: Enter Your Age: 25
//        Your Age is 25
//        You can go Coffee with Me
//        Out of if-ele Blocks
//
// O/p 2: Enter Your Age: 32
//        Your Age is 32
//        It's Time to go Home
//        Out of if-ele Blocks
//
// O/p 3: Enter Your Age: 18
//        Your Age is 18
//        It's Time to go Home
//        Out of if-ele Blocks
*/

/*
#include <stdio.h>
void main()
{
  int age;
  printf("Enter Your Age: ");
  scanf("%d",&age);
  if(age>20&&age<30)
  {
    printf("Your Age is %d\n",age);
    printf("You can go Coffee with Me\n");
  }
  else
  printf("Your Age is %d\n",age);
  printf("It's Time to go Home\n");
  printf("Out of if-ele Blocks\n");
}

// O/p 1: Enter Your Age: 25
//        Your Age is 25
//        You can go Coffee with Me
//        It's Time to go Home
//        Out of if-ele Blocks
//
// O/p 2: Enter Your Age: 32
//        Your Age is 32
//        It's Time to go Home
//        Out of if-ele Blocks
//
// O/p 3: Enter Your Age: 18
//        Your Age is 18
//        It's Time to go Home
//        Out of if-ele Blocks
*/

/*...........................................................................................

....................................Questions................................................

...........................................................................................*/

/*
//Q.1 Write a Program to check whether a given Number is Positive or Negative

#include <stdio.h>
#include <conio.h>
void main()
{
  int Number;
  printf("Enter a Number (Integers only): ");
  scanf("%d",&Number);
  if(Number<0)
  {
    printf("%d is a Negative Number\n",Number);
  }
  if(Number==0)
  {
    printf("%d is neither Positive nor Negative\n",Number);
  }
  if(Number>0)
  {
    printf("%d is a Positive Number\n",Number);
  }
  getch();
}

// O/p 1: Enter a Number (Integers only): -5
//        -5 is a Negative Number
//
// O/p 2: Enter a Number (Integers only): 0
//        0 is neither Positive nor Negative
//
// O/p 3: Enter a Number (Integers only): 5
//        5 is a Positive Number
//
*/

/*
//Q.2 Write a Program to check whether a given Number is Even or Odd

#include <stdio.h>
#include <conio.h>
void main()
{
  int Number;
  printf("Enter a Number (Integers only): ");
  scanf("%d",&Number);
  if(Number%2==0)
  {
    printf("%d is an Even Number\n",Number);
  }
  else
  {
    printf("%d is an Odd Number\n",Number);
  }
  getch();
}

// O/p 1: Enter a Number (Integers only): 2
//        2 is an Even Number
//
// O/p 2: Enter a Number (Integers only): 3
//        3 is an Odd Number
//
// O/p 3: Enter a Number (Integers only): -2
//        -2 is an Even Number
//
// O/p 4: Enter a Number (Integers only): -3
//        -3 is an Odd Number
// O/p 5: Enter a Number (Integers only): 0
//        0 is an Even Number
//   
*/

/*
#include <stdio.h>
void main()
{
  int age,salary;
  printf("Enter Your Age: ");
  scanf("%d",&age);
  printf("Enter Your Salary: ");
  scanf("%d",&salary);
  if(age>50)
  {
    if(salary<60000)
    {
      salary=salary+10000;
    }
    else
    {
      salary+=5000;
    }
  }
  else
  {
    salary+=3000;
  }
  printf("Updated Salary=%d\n",salary);
  printf("End of Program");
}

// O/p 1: Enter Your Age: 55
//        Enter Your Salary: 55000
//        Updated Salary=65000
//        End of Program
//
// O/p 2: Enter Your Age: 55
//        Enter Your Salary: 65000
//        Updated Salary=70000
//        End of Program
//
// O/p 3: Enter Your Age: 18
//        Enter Your Salary: 35000
//        Updated Salary=38000
//        End of Program
*/

/*
#include <stdio.h>
void main()
{
  int age,salary;
  printf("Enter Your Age: ");
  scanf("%d",&age);
  printf("Enter Your Salary: ");
  scanf("%d",&salary);
  if(age>50&&salary<60000)
  {
    salary=salary+10000;
  }
  else 
  {
    if(age>50&&!(salary<60000))
    {
      salary+=5000;
    }
    else
    {
      salary+=3000;
    }
  }
  printf("Updated Salary=%d\n",salary);
  printf("End of Program");
}

// O/p 1: Enter Your Age: 55
//        Enter Your Salary: 55000
//        Updated Salary=65000
//        End of Program
//
// O/p 2: Enter Your Age: 55
//        Enter Your Salary: 65000
//        Updated Salary=70000
//        End of Program
//
// O/p 3: Enter Your Age: 18
//        Enter Your Salary: 65000
//        Updated Salary=68000
//        End of Program
//
// O/p 4: Enter Your Age: 18
//        Enter Your Salary: 55000
//        Updated Salary=58000
//        End of Program
*/

/*...........................................................................................

....................................Questions................................................

...........................................................................................*/

/*//TODO
//Q.3 Write a Program to find the Largest among 3 Numbers

#include <stdio.h>
#include <conio.h>
void main()
{
  int Number1,Number2,Number3;
  printf("Enter the Number 1 (Integers only): ");
  scanf("%d",&Number1);
  printf("Enter the Number 2 (Integers only): ");
  scanf("%d",&Number2);
  printf("Enter the Number 3 (Integers only): ");
  scanf("%d",&Number3);
  if(Number1>Number2)
  {
    if(Number1>Number3)
    {
      printf("Number 1 = %d is the Largest Number",Number1);
    }
    else
    {
      printf("Number 3 = %d is the Largest Number",Number3);
    }
  }
  else
  {
    if(Number2>Number3)
    {
      printf("Number 2 = %d is the Largest Number",Number2);
    }
    else
    {
      printf("Number 3 = %d is the Largest Number",Number3);
    }
  }
  getch();
}

// O/p 1: Enter the Number 1 (Integers only): 10
//        Enter the Number 2 (Integers only): 8
//        Enter the Number 3 (Integers only): 6
//        Number 1 = 10 is the Largest NumberEnter 3 Numbers: 10 8 6
//
// O/p 2: Enter the Number 1 (Integers only): 10
//        Enter the Number 2 (Integers only): 6
//        Enter the Number 3 (Integers only): 8
//        Number 1 = 10 is the Largest NumberEnter 3 Numbers: 10 6 8
//
// O/p 3: Enter the Number 1 (Integers only): 8
//        Enter the Number 2 (Integers only): 6
//        Enter the Number 3 (Integers only): 10
//        Number 3 = 10 is the Largest NumberEnter 3 Numbers: 8 6 10
//
// O/p 4: Enter the Number 1 (Integers only): 8
//        Enter the Number 2 (Integers only): 10
//        Enter the Number 3 (Integers only): 6
//        Number 2 = 10 is the Largest NumberEnter 3 Numbers: 8 10 6
//
// O/p 5: Enter the Number 1 (Integers only): 6
//        Enter the Number 2 (Integers only): 10
//        Enter the Number 3 (Integers only): 8
//        Number 2 = 10 is the Largest NumberEnter 3 Numbers: 6 10 8
//
// O/p 6: Enter the Number 1 (Integers only): 6
//        Enter the Number 2 (Integers only): 8
//        Enter the Number 3 (Integers only): 10
//        Number 3 = 10 is the Largest NumberEnter 3 Numbers: 6 8 10
*/

/*...........................................................................................

....................................Questions................................................

...........................................................................................*/

/*
#include <stdio.h>
void main()
{
  int marks;
  printf("Enter the Mark (between 0 t0 100)s: ");
  scanf("%d",&marks);
  if(marks>80)
  {
    printf("A Grade");
  }
  else if(marks>70)
  {
    printf("B Grade");
  }
  else if(marks>60)
  {
    printf("C Grade");
  }
  else
  {
    printf("D Grade");
  }
  printf("\nEnd of Program");
}

// O/p 1: Enter the Marks: 85
//        A Grade
//        End of Program 
//
// O/p 2: Enter the Marks: 75
//        B Grade
//        End of Program 
//
// O/p 3: Enter the Marks: 65
//        C Grade
//        End of Program 
//
// O/p 4: Enter the Marks: 55
//        D Grade
//        End of Program 
*/

/*...........................................................................................

....................................Questions................................................

...........................................................................................*/

/*//TODO
//Q.4 Write a Program to check whether a given Character is in Uppercase/Lowercase or a Digit

#include <stdio.h>
#include <conio.h>
void main()
{
  int n;
  char Character;
  printf("Enter a Character: ");
  scanf("%c",&Character);
  if(Character>='A'&&Character<='Z')
  {
    printf("%c is an Uppercase Character",Character);
  }
  else if(Character>='a'&&Character<='z')
  {
    printf("%c is a Lowercase Character",Character);
  }
  else if(Character>='0'&&Character<='9')
  {
    printf("Entered Character is a Digit");
  }
  else
  {
    printf("Entered Character is an Invalid Character");
  }
}

// O/p 1: Enter a Character: A
//        A is an Uppercase Character
//
// O/p 2: Enter a Character: V
//        V is an Uppercase Character
//
// O/p 3: Enter a Character: Z
//        Z is an Uppercase Character
//
// O/p 4: Enter a Character: a
//        a is a Lowercase Character
//
// O/p 5: Enter a Character: v
//        v is a Lowercase Character
//
// O/p 6: Enter a Character: z
//        z is a Lowercase Character
//
// O/p 7: Enter a Character: 0
//        Entered Character is a Digit
//
// O/p 8: Enter a Character: 5
//        Entered Character is a Digit
//
// O/p 9: Enter a Character: 9
//        Entered Character is a Digit
//
// O/p 10: Enter a Character: 10
//         Entered Character is a Digit
//
// O/p 11: Enter a Character: @
//         Entered Character is an Invalid Character
//
// O/p 12: Enter a Character: -5
//         Entered Character is an Invalid Character
*/

/*
#include <stdio.h>
void main()
{
  int a;
  printf("Enter a Number: ");
  scanf("%d",&a);
  switch(a)
  {
    case 1: printf("JK"\n);
            break;
    case 2: printf("Jenny\n");
            break;
    default: printf("Bye\n");
  }
  printf("Go to Home");
}

// O/p 1: Enter a Number: 0
//        Bye
//        Go to Home
//
// O/p 2: Enter a Number: 1
//        JK
//        Go to Home
//
// O/p 3: Enter a Number: 2
//        Jenny
//        Go to Home
//
// O/p 4: Enter a Number: 3
//        Bye
//        Go to Home
*/

/*
#include <stdio.h>
void main()
{
  int a;
  printf("Enter a Number: ");
  scanf("%d",&a);
  switch(a*2)
  {
    case 1: printf("JK\n");
            break;
    case 2: printf("Jenny\n");
            break;
    default: printf("Bye\n");
  }
  printf("Go to Home");
}

// O/p 1: Enter a Number: 0
//        Bye
//        Go to Home
//
// O/p 2: Enter a Number: 1
//        Jenny
//        Go to Home
//
// O/p 3: Enter a Number: 2
//        Bye
//        Go to Home
//
// O/p 4: Enter a Number: 3
//        Bye
//        Go to Home
*/

/*
#include <stdio.h>
void main()
{
  int a,b,c;
  printf("Enter 3 Numbers: ");
  scanf("%d %d %d",&a,&b,&c);
  switch(a+b*c)
  {
    case 1: printf("JK\n");
            break;
    case 2: printf("Jenny\n");
            break;
    default: printf("Bye\n");
  }
  printf("Go to Home");
}

// O/p 1: Enter a Number: 0
//        Bye
//        Go to Home
//
// O/p 2: Enter a Number: 1
//        Bye
//        Go to Home
//
// O/p 3: Enter a Number: 2
//        Bye
//        Go to Home
//
// O/p 4: Enter a Number: 3
//        Bye
//        Go to Home
*/

/*
#include <stdio.h>
void main()
{
  switch(1+2*3/4)
  {
    case 1: printf("JK\n");
            break;
    case 2: printf("Jenny\n");
            break;
    default: printf("Bye\n");
  }
  printf("Go to Home");
}

// O/p : Enter a Number: 0
//       Jenny
//       Go to Home
//
*/

/*
#include <stdio.h>
void main()
{
  int a;
  printf("Enter a Number: ");
  scanf("%d",&a);
  switch(a)
  {
    case 10: printf("JK\n");
            break;
    case 3: printf("Jenny\n");
            break;
    default: printf("Bye\n");
  }
  printf("Go to Home");
}

// O/p 1: Enter a Number: 15
//        Bye
//        Go to Home
//
// O/p 2: Enter a Number: 10
//        JK
//        Go to Home
//
// O/p 3: Enter a Number: 3
//        Jenny
//        Go to Home
//
// O/p 4: Enter a Number: 0
//        Bye
//        Go to Home
*/

/*
#include <stdio.h>
void main()
{
  int a;
  printf("Enter a Number: ");
  scanf("%d",&a);
  switch(a)
  {
    case 1: printf("JK\n");
    case 2: printf("Jenny\n");
            break;
    default: printf("Bye\n");
  }
  printf("Go to Home");
}

// O/p 1: Enter a Number: 0
//        Bye
//        Go to Home
//
// O/p 2: Enter a Number: 1
//        JK
//        Jenny
//        Go to Home
//
// O/p 3: Enter a Number: 2
//        Jenny
//        Go to Home
//
// O/p 4: Enter a Number: 3
//        Bye
//        Go to Home
*/

/*
#include <stdio.h>
void main()
{
  int a;
  printf("Enter a Number: ");
  scanf("%d",&a);
  switch(a)
  {
    default: printf("Bye\n");
    case 1: printf("JK\n");
            break;
    case 2: printf("Jenny\n");
            break;
  }
  printf("Go to Home");
}

// O/p 1: Enter a Number: 0
//        Bye
//        Go to Home
//
// O/p 2: Enter a Number: 1
//        JK
//        Go to Home
//
// O/p 3: Enter a Number: 2
//        Jenny
//        Go to Home
//
// O/p 4: Enter a Number: 3
//        Bye
//        Go to Home
*/

/*
#include <stdio.h>
void main()
{
  int a;
  printf("Enter a Number: ");
  scanf("%d",&a);
  switch(a)
  {
    case 1: printf("JK\n");
            break;
    case 2: printf("Jenny\n");
            break;
  }
  printf("Go to Home");
}

// O/p 1: Enter a Number: 0
//        Go to Home
//
// O/p 2: Enter a Number: 1
//        JK
//        Go to Home
//
// O/p 3: Enter a Number: 2
//        Jenny
//        Go to Home
//
// O/p 4: Enter a Number: 3
//        Go to Home
*/

/*
#include <stdio.h>
void main()
{
  char a;
  printf("Enter a Characterr: ");
  scanf("%c",&a);
  switch(a)
  {
    case 'a': printf("JK\n");
              break;
    case '2': printf("Jenny\n");
              break;
    default: printf("Bye\n");
    
  }
  printf("Go to Home");
}

// O/p 1: Enter a Character: a
//        JK
//        Go to Home
//
// O/p 2: Enter a Character: 2
//        Jenny
//        Go to Home
//
// O/p 3: Enter a Character: v
//        Bye
//        Go to Home
*/

/*...........................................................................................

....................................Questions................................................

...........................................................................................*/

/*//TODO
//Q.5 Write a Program to check whether a given Character is a Vowel or not

#include <stdio.h>
#include <conio.h>
void main()
{
  char Character;
  printf("Enter a Character: ");
  scanf("%c",&Character);
  switch(Character)
  {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u': printf("%c is a Vowel",Character);
              break;
    default: if((Character>='A'&&Character<='Z')||(Character>='a'&&Character<='z'))
             {
              printf("%c is not a Vowel",Character);
             }
             else
             {
              printf("Entered Character is an Invalid Character");
             }
  }
  getch();
}

// O/p 1: Enter a Character: A
//        A is a Vowel
//
// O/p 2: Enter a Character: a
//        a is a Vowel
//
// O/p 3: Enter a Character: E
//        E is a Vowel
//
// O/p 4: Enter a Character: e
//        e is a Vowel
//
// O/p 5: Enter a Character: I
//        I is a Vowel
//
// O/p 6: Enter a Character: i
//        i is a Vowel
//
// O/p 7: Enter a Character: U
//        U is a Vowel
//
// O/p 8: Enter a Character: u
//        u is a Vowel
//
// O/p 9: Enter a Character: V
//        V is not a Vowel
//
// O/p 10: Enter a Character: 12
//         Entered Character is an Invalid Character
*/

/*//TODO
//Q.6 Write a Program to assign the Grades according to the Marks of a Student using Switch Case

#include <stdio.h>
#include <conio.h>
void main()
{
  int marks;
  printf("Enter the Marks of the Student (between 0 to 100): ");
  scanf("%d",&marks);
  switch(marks)
  {
    case 100:
    case 99:
    case 98:
    case 97:
    case 96:
    case 95:
    case 94:
    case 93:
    case 92:
    case 91: 
    case 90:
    case 89:
    case 88:
    case 87:
    case 86:
    case 85:
    case 84:
    case 83:
    case 82:
    case 81: 
    case 80: printf("O Grade\n");
             break;
    case 79:
    case 78:
    case 77:
    case 76:
    case 75:
    case 74:
    case 73:
    case 72:
    case 71: 
    case 70: printf("A+ Grade\n");
             break;
    case 69:
    case 68:
    case 67:
    case 66:
    case 65:
    case 64:
    case 63:
    case 62:
    case 61: 
    case 60: printf("A Grade\n");
             break;
    case 59:
    case 58:
    case 57:
    case 56:
    case 55: printf("B+ Grade\n");
             break;
    case 54:
    case 53:
    case 52:
    case 51:
    case 50: printf("B Grade\n");
             break;
    case 49:
    case 48:
    case 47:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
    case 41: printf("C Grade\n");
             break;
    case 40:
    case 39:
    case 38:
    case 37:
    case 36: 
    case 35: printf("D Grade\n");
             break;
    case 34:
    case 33:
    case 32:
    case 31:
    case 30:
    case 29:
    case 28:
    case 27:
    case 26:
    case 25:
    case 24:
    case 23:
    case 22:
    case 21:
    case 20:
    case 19:
    case 18:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0: printf("F Grade");
            break;
    default: printf("Invalid Marks");
  }
  getch();
}

// O/p 1: Enter the Marks of the Student (between 0 to 100): 85
//        O Grade
//
// O/p 2: Enter the Marks of the Student (between 0 to 100): 75
//        A+ Grade
//
// O/p 3: Enter the Marks of the Student (between 0 to 100): 65
//        A Grade
//
// O/p 4: Enter the Marks of the Student (between 0 to 100): 57
//        B+ Grade
//
// O/p 5: Enter the Marks of the Student (between 0 to 100): 52
//        B Grade
//
// O/p 6: Enter the Marks of the Student (between 0 to 100): 45
//        C Grade
//
// O/p 7: Enter the Marks of the Student (between 0 to 100): 38
//        D Grade
//
// O/p 8: Enter the Marks of the Student (between 0 to 100): 102
//        Invalid Marks
*/

/*//TODO
//Q.7 Write a Program to check whether a given Character is in Uppercase/Lowercase or a Digit or a Special Character using Switch Case

#include <stdio.h>
#include <conio.h>
void main()
{
  char Character;
  printf("Enter a Character (Any Character and Positive Integers only): ");
  scanf("%c",&Character);
  switch(Character)
  {
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z': printf("%c is an Uppercase Character",Character);
              break;
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'g':
    case 'h':
    case 'i':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'o':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'u':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z': printf("%c is a Lowercase Character",Character);
              break;
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9': printf("Entered Character is a Digit");
              break;
    default: printf("%c is a Special Character",Character);
  }
  getch();
}

// O/p 1: Enter a Character (Any Character and Positive Integers only): A
//        A is an Uppercase Character
//
// O/p 2: Enter a Character (Any Character and Positive Integers only): V
//        V is an Uppercase Character
//
// O/p 3: Enter a Character (Any Character and Positive Integers only): Z
//        Z is an Uppercase Character
//
// O/p 4: Enter a Character (Any Character and Positive Integers only): a
//        a is an Lowercase Character
//
// O/p 5: Enter a Character (Any Character and Positive Integers only): v
//        v is an Lowercase Character
//
// O/p 6: Enter a Character (Any Character and Positive Integers only): z
//        z is an Lowercase Character
//
// O/p 7: Enter a Character (Any Character and Positive Integers only): 0
//        Entered Character is a Digit
//
// O/p 8: Enter a Character (Any Character and Positive Integers only): 5
//        Entered Character is a Digit
//
// O/p 9: Enter a Character (Any Character and Positive Integers only): 9
//        Entered Character is a Digit
//
// O/p 10: Enter a Character (Any Character and Positive Integers only): 10
//         Entered Character is a Digit
//
// O/p 11: Enter a Character (Any Character and Positive Integers only): @
//         @ is a Special Character
*/

/*//TODO
//Q.8 Write a Program to make simple Calculator using Switch Case

#include <stdio.h>
#include <conio.h>
void main()
{
  printf("This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%%(Modulo)\n");
  printf("Modulo means if You Divide 2 Numbers then Modulo will give its Remainder\n");
  printf("Float means Decimal Values\n");
  printf("Operand = The Number on which You want to Perform Operations\n");
  printf("Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%%\n");
  printf("You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform\n\n");
  float Operand_1,Operand_2;
  char Operator;
  printf("Enter the Operand 1 (Integers or Float Value only): ");
  scanf("%f",&Operand_1);
  printf("Enter an Operator(+,-,*,/,%%): ");
  scanf(" %c",&Operator);
  printf("Enter the Operand 2 (Integers or Float Value only): ");
  scanf("%f",&Operand_2);
  switch(Operator)
  {
    case '+': printf("\nOperation: %f %c %f = %f",Operand_1,Operator,Operand_2,Operand_1+Operand_2);
              break;
    case '-': printf("\nOperation: %f %c %f = %f",Operand_1,Operator,Operand_2,Operand_1-Operand_2);
              break;
    case '*': printf("\nOperation: %f %c %f = %f",Operand_1,Operator,Operand_2,Operand_1*Operand_2);
              break;
    case '/': if(Operand_2!=0)
              {
                printf("\nOperation: %f %c %f = %f",Operand_1,Operator,Operand_2,Operand_1/Operand_2);
                break;
              }
              else
              {
               printf("\nDivision by 0 is not defined");
               break;
              }
    case '%': if(Operand_2!=0)
              {
                printf("\nOperation: %d %c %d = %d",(int)Operand_1,Operator,(int)Operand_2,(int)Operand_1%(int)Operand_2);
                break;
              }  
              else
              {
                printf("\nDivision by 0 is not defined");
                break;
              }
    default: printf("\nEnter a Valid Operator");               
  }
  getch();
}

// O/p 1: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//        Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//        Float means Decimal Values
//        Operand = The Number on which You want to Perform Operations
//        Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//        You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//        
//        Enter the Operand 1 (Integers or Float Value only): 10
//        Enter an Operator(+,-,*,/,%): +
//        Enter the Operand 2 (Integers or Float Value only): 5
//        
//        Operation: 10.000000 + 5.000000 = 15.000000
//
// O/p 2: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//        Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//        Float means Decimal Values
//        Operand = The Number on which You want to Perform Operations
//        Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//        You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//        
//        Enter the Operand 1 (Integers or Float Value only): 10
//        Enter an Operator(+,-,*,/,%): +
//        Enter the Operand 2 (Integers or Float Value only): 2.5
//        
//        Operation: 10.000000 + 2.500000 = 12.500000
//
// O/p 3: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//        Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//        Float means Decimal Values
//        Operand = The Number on which You want to Perform Operations
//        Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//        You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//        
//        Enter the Operand 1 (Integers or Float Value only): 5.5
//        Enter an Operator(+,-,*,/,%): +
//        Enter the Operand 2 (Integers or Float Value only): 2.75
//        
//        Operation: 5.500000 + 2.750000 = 8.250000
//
// O/p 4: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//        Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//        Float means Decimal Values
//        Operand = The Number on which You want to Perform Operations
//        Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//        You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//        
//        Enter the Operand 1 (Integers or Float Value only): 10
//        Enter an Operator(+,-,*,/,%): -
//        Enter the Operand 2 (Integers or Float Value only): 5
//        
//        Operation: 10.000000 - 5.000000 = 5.000000
//
// O/p 5: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//        Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//        Float means Decimal Values
//        Operand = The Number on which You want to Perform Operations
//        Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//        You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//        
//        Enter the Operand 1 (Integers or Float Value only): 10
//        Enter an Operator(+,-,*,/,%): -
//        Enter the Operand 2 (Integers or Float Value only): 2.5
//        
//        Operation: 10.000000 - 2.500000 = 7.500000
//
// O/p 6: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//        Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//        Float means Decimal Values
//        Operand = The Number on which You want to Perform Operations
//        Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//        You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//        
//        Enter the Operand 1 (Integers or Float Value only): 5.5
//        Enter an Operator(+,-,*,/,%): -
//        Enter the Operand 2 (Integers or Float Value only): 2.75
//        
//        Operation: 5.500000 - 2.750000 = 2.750000
//
// O/p 7: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//        Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//        Float means Decimal Values
//        Operand = The Number on which You want to Perform Operations
//        Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//        You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//        
//        Enter the Operand 1 (Integers or Float Value only): 10
//        Enter an Operator(+,-,*,/,%): *
//        Enter the Operand 2 (Integers or Float Value only): 5
//        
//        Operation: 10.000000 * 5.000000 = 50.000000
//
// O/p 8: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//        Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//        Float means Decimal Values
//        Operand = The Number on which You want to Perform Operations
//        Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//        You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//        
//        Enter the Operand 1 (Integers or Float Value only): 10
//        Enter an Operator(+,-,*,/,%): *
//        Enter the Operand 2 (Integers or Float Value only): 2.5
//        
//        Operation: 10.000000 * 2.500000 = 25.000000
//
// O/p 9: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//        Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//        Float means Decimal Values
//        Operand = The Number on which You want to Perform Operations
//        Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//        You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//        
//        Enter the Operand 1 (Integers or Float Value only): 5.5
//        Enter an Operator(+,-,*,/,%): *
//        Enter the Operand 2 (Integers or Float Value only): 2.75
//        
//        Operation: 5.500000 * 2.750000 = 15.125000
//
// O/p 10: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//         Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//         Float means Decimal Values
//         Operand = The Number on which You want to Perform Operations
//         Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//         You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//         
//         Enter the Operand 1 (Integers or Float Value only): 5
//         Enter an Operator(+,-,*,/,%): /
//         Enter the Operand 2 (Integers or Float Value only): 10
//         
//         Operation: 5.000000 / 10.000000 = 0.500000
//
// O/p 11: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//         Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//         Float means Decimal Values
//         Operand = The Number on which You want to Perform Operations
//         Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//         You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//         
//         Enter the Operand 1 (Integers or Float Value only): 10
//         Enter an Operator(+,-,*,/,%): /
//         Enter the Operand 2 (Integers or Float Value only): 2.5
//         
//         Operation: 10.000000 / 2.500000 = 4.000000
//
// O/p 12: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//         Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//         Float means Decimal Values
//         Operand = The Number on which You want to Perform Operations
//         Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//         You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//         
//         Enter the Operand 1 (Integers or Float Value only): 5.5
//         Enter an Operator(+,-,*,/,%): /
//         Enter the Operand 2 (Integers or Float Value only): 2.75
//         
//         Operation: 5.500000 / 2.750000 = 2.000000
//
// O/p 13: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//         Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//         Float means Decimal Values
//         Operand = The Number on which You want to Perform Operations
//         Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//         You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//         
//         Enter the Operand 1 (Integers or Float Value only): 10
//         Enter an Operator(+,-,*,/,%): /
//         Enter the Operand 2 (Integers or Float Value only): 0
//         
//         Division by 0 is not defined
//
// O/p 14: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//         Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//         Float means Decimal Values
//         Operand = The Number on which You want to Perform Operations
//         Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//         You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//         
//         Enter the Operand 1 (Integers or Float Value only): 10
//         Enter an Operator(+,-,*,/,%): %
//         Enter the Operand 2 (Integers or Float Value only): 5
//         
//         Operation: 10 % 5 = 0
//
// O/p 15: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//         Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//         Float means Decimal Values
//         Operand = The Number on which You want to Perform Operations
//         Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//         You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//         
//         Enter the Operand 1 (Integers or Float Value only): 10
//         Enter an Operator(+,-,*,/,%): /
//         Enter the Operand 2 (Integers or Float Value only): 3
//         
//         Operation: 10 % 3 = 1
//
// O/p 16: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//         Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//         Float means Decimal Values
//         Operand = The Number on which You want to Perform Operations
//         Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//         You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//         
//         Enter the Operand 1 (Integers or Float Value only): 5
//         Enter an Operator(+,-,*,/,%): %
//         Enter the Operand 2 (Integers or Float Value only): 10
//         
//         Operation: 5 % 10 = 5
//
// O/p 17: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//         Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//         Float means Decimal Values
//         Operand = The Number on which You want to Perform Operations
//         Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//         You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//         
//         Enter the Operand 1 (Integers or Float Value only): 10
//         Enter an Operator(+,-,*,/,%): %
//         Enter the Operand 2 (Integers or Float Value only): 0
//         
//         Division by 0 is not defined
//
// O/p 18: This is a basic Calculator which will perform basic Operations like +(Addition),-(Subtraction),*(Multiplication),/(Division),%(Modulo)
//         Modulo means if You Divide 2 Numbers then Modulo will give its Remainder
//         Float means Decimal Values
//         Operand = The Number on which You want to Perform Operations
//         Operator = The Symbol You want to choose which will perform Operations like +,-,*,/,%
//         You have to Enter 2 Numbers and the Opertaor of the Operation You want to perform
//         
//         Enter the Operand 1 (Integers or Float Value only): 10
//         Enter an Operator(+,-,*,/,%): 5
//         Enter the Operand 2 (Integers or Float Value only): 2
//         
//         Enter a Valid Operator
*/

/*...........................................................................................

........................................Loops................................................
........................................For..................................................

...........................................................................................*/

/*
#include <stdio.h>
void main()
{
  for(int i=1;i<=10;i++)
  {
    printf("%d ",i);
  }
  printf("\nJK");
}

// O/p: 1 2 3 4 5 6 7 8 9 10 
//      JK
*/

/*
#include <stdio.h>
void main()
{
  
  for(int i=10;i<10;i++)
  {
    printf("%d ",i);
  }
}

// O/p:
*/

/*
#include <stdio.h>
void main()
{
  
  for(; ;)
  {
    printf("Hello");
  }
}

// O/p: HelloHelloHelloHelloHello //and so on infinite times
*/

/*
#include <stdio.h>
void main()
{
  int i=1;
  for(;i<=5;i++)
  {
    printf("%d ",i);
  }
}

// O/p: 1 2 3 4 5
*/

/*
#include <stdio.h>
void main()
{
  int i;
  for(;i<=5;i++)
  {
    printf("%d ",i);
  }
}

// O/p:
*/

/*
#include <stdio.h>
void main()
{
  for(int i=1,j=0;i<=5;i++)
  {
    printf("%d %d\n",i,j);
  }
}

// O/p: 1 0
//      2 0
//      3 0
//      4 0
//      5 0
*/

/*
#include <stdio.h>
void main()
{
  int i=1,j=0;
  for(;i<=5;i++)
  {
    printf("%d %d\n",i,j);
  }
}

// O/p: 1 0
//      2 0
//      3 0
//      4 0
//      5 0
*/

/*
#include <stdio.h>
void main()
{
  int i,j=0;
  for(;i<=5;i++)
  {
    printf("%d %d\n",i,j);
  }
}

// O/p:
*/

/*
#include <stdio.h>
void main()
{
  int i,j;

  for(i=1,j=0;;i++)
  {
    printf("%d %d\n",i,j);
  }
}

// O/p: 1 0
//      2 0
//      3 0
//      4 0
//      5 0
//      6 0
//      7 0
//      8 0
//      9 0
//      10 0 //and so on infinite times
*/

/*
#include <stdio.h>
void main()
{
  int i,j;
  for(i=1,j=0;i<=5,j<3;i++)
  {
    printf("%d %d\n",i,j);
  }
}

// O/p: 1 0
//      2 0
//      3 0
//      4 0
//      5 0
//      6 0
//      7 0
//      8 0
//      9 0
//      10 0 //and so on infinite times
*/

/*
#include <stdio.h>
void main()
{
  int i,j;
  for(i=1,j=0;i<=5,j<3;i++,j++)
  {
    printf("%d %d\n",i,j);
  }
}

// O/p: 1 0
//      2 1
//      3 2
*/

/*
#include <stdio.h>
void main()
{
  int i,j;
  for(i=1,j=0;i<=100,j<3;i++,j++)
  {
    printf("%d %d\n",i,j);
  }
}

// O/p: 1 0
//      2 1
//      3 2
*/

/*
#include <stdio.h>
void main()
{
  int i,j;
  for(i=1,j=0;i==10;i++,j++)
  {
    printf("%d %d\n",i,j);
  }
}

// O/p: 
*/

/*
#include <stdio.h>
void main()
{
  int i,j;
  for(i=1,j=0;i<=100&&j<3;i++,j++)
  {
    printf("%d %d\n",i,j);
  }
}

// O/p: 1 0
//      2 1
//      3 2
*/

/*
#include <stdio.h>
void main()
{
  int i,j;
  for(i=1,j=0;i<=100||j<3;i++,j++)
  {
    printf("%d %d\n",i,j);
  }
}

// O/p: 1 0
//      2 1
//      3 2
//      4 3
//      5 4
//      6 5
//      7 6
//      8 7
//      9 8
//      10 9
//      11 10
//      12 11
//      13 12
//      14 13
//      15 14
//      16 15
//      17 16
//      18 17
//      19 18
//      20 19
//      21 20
//      22 21
//      23 22
//      24 23
//      25 24
//      26 25
//      27 26
//      28 27
//      29 28
//      30 29
//      31 30
//      32 31
//      33 32
//      34 33
//      35 34
//      36 35
//      37 36
//      38 37
//      39 38
//      40 39
//      41 40
//      42 41
//      43 42
//      44 43
//      45 44
//      46 45
//      47 46
//      48 47
//      49 48
//      50 49
//      51 50
//      52 51
//      53 52
//      54 53
//      55 54
//      56 55
//      57 56
//      58 57
//      59 58
//      60 59
//      61 60
//      62 61
//      63 62
//      64 63
//      65 64
//      66 65
//      67 66
//      68 67
//      69 68
//      70 69
//      71 70
//      72 71
//      73 72
//      74 73
//      75 74
//      76 75
//      77 76
//      78 77
//      79 78
//      80 79
//      81 80
//      82 81
//      83 82
//      84 83
//      85 84
//      86 85
//      87 86
//      88 87
//      89 88
//      90 89
//      91 90
//      92 91
//      93 92
//      94 93
//      95 94
//      96 95
//      97 96
//      98 97
//      99 98
//      100 99
*/

/*
#include <stdio.h>
void main()
{
  int i,j;
  for(i=1,j=0;i<=100,j<3;)
  {
    printf("%d %d\n",i,j);
  }
}

// O/p: 1 0
//      1 0
//      1 0
//      1 0
//      1 0 //and so on infinite times
*/

/*
#include <stdio.h>
void main()
{
  int i,j;
  for(i=1,j=0;i<=100,j<3;)
  {
    printf("%d %d\n",i,j);
    i++;
  }
}

// O/p: 1 0
//      2 0
//      3 0
//      4 0
//      5 0
//      6 0
//      7 0
//      8 0
//      9 0
//      10 0 //and so on infinite times
*/

/*
#include <stdio.h>
void main()
{
  int i,j;
  for(i=1,j=0;i<=100,j<3;)
  {
    printf("%d %d\n",i,j);
    j++;
  }
}

// O/p: 1 0
//      1 1
//      1 2
*/

/*
#include <stdio.h>
void main()
{
  int i,a=5,b=6;
  for(i=(a+b)/2;i>0;i=i/2)
  {
    printf("%d ",i);
  }
}

// O/p: 5 2 1 
*/

/*
#include <stdio.h>
void main()
{
  int i,a=5,b=6;
  for(i=(a+b)/2;i<=25;i=i+=2)
  {
    printf("%d ",i);
  }
}

// O/p: 5 7 9 11 13 15 17 19 21 23 25
*/

/*
#include <stdio.h>
void main()
{
  int i,a=5,b=6;
  for(i=(a+b)/2;i<=25;i=i*=2)
  {
    printf("%d ",i);
  }
}

// O/p: 5 10 20
*/

/*
#include <stdio.h>
void main()
{
  int i,a=5,b=6;
  for(i=(a+b)/2;i<=25;i=i+=a)
  {
    printf("%d ",i);
  }
}

// O/p: 5 10 15 20 25
*/

/*
#include <stdio.h>
void main()
{
  int i,a=5,b=6;
  for(i=(a+b)/2;i<=25;i=i+=b)
  {
    printf("%d ",i);
  }
}

// O/p: 5 11 17 23 
*/

/*
#include <stdio.h>
void main()
{
  int i=1;
  for(;i<5;)
  {
    printf("Jenny\n");
    i++;
  }
}

// O/p: Jenny
//      Jenny
//      Jenny
//      Jenny
*/

/*
#include <stdio.h>
void main()
{
  for(int i=10;i>0;i--)
  {
    printf("%d ",i);
  }
}

// O/p: 10 9 8 7 6 5 4 3 2 1 
*/

/*
#include <stdio.h>
void main()
{
  int i,j;
  for(i=1,j=0;i<=5,j<=6;i++,j++);
  {
    printf("%d %d\n",i,j);
  }
}

// O/p: 8 7
*/

/*
#include <stdio.h>
void main()
{
  int i,j;
  for(i=1,j=0;i<=5,j<=6;i++);
  {
    printf("%d %d\n",i,j);
    j++;
  }
}

// O/p:   //and so on infinite times
*/

/*
#include <stdio.h>
void main()
{
  int i,j;
  for(i=1,j=0;i<=5,j<=6;j++);
  {
    printf("%d %d\n",i,j);
    i++;
  }
}

// O/p: 1 7
*/

/*
#include <stdio.h>
int main()
{
  for(int i=1,j=0,k=3;i<=5,j<=6,k>1;i++,j++,k--)
  {
    printf("%d %d %d\n",i,j,k);
  }
}

// O/p: 1 0 3
//      2 1 2
*/

/*...........................................................................................

....................................Questions................................................

...........................................................................................*/

/*//TODO
//Q.9 Write a Program to check whether a given Numbeer is Prime or not

#include <stdio.h>
#include <conio.h>
void main()
{
  int Number,Factor=0;
  printf("Enter a Number (Integer only): ");
  scanf("%d",&Number);
  for(int i=1;i<=Number;i++)
  {
    if(Number%i==0)
    {
      Factor++;
    }
  }
  if(Number==0||Number==1)
  {
    printf("\n%d is neither Prime nor Composite Number",Number);
  }
  else if(Factor<=2)
  {
    printf("\n%d is a Prime Number",Number);
  }
  else
  {
    printf("\n%d is not a Prime Number or We can say %d is a Composite Number",Number,Number);
  }
  getch();
}

// O/p 1: Enter a Number (Integer only): 0
//
//        0 is neither Prime nor Composite Number
//
// O/p 2: Enter a Number (Integer only): 1
//
//        1 is neither Prime nor Composite Number
//
// O/p 3: Enter a Number (Integer only): 2
//
//        2 is a Prime Number
//
// O/p 4: Enter a Number (Integer only): 3
//
//        3 is a Prime Number
//
// O/p 5: Enter a Number (Integer only): 4
//
//        4 is a Composite Number
//
// O/p 6: Enter a Number (Integer only): -2
//
//        -2 is a Prime Number
//
// O/p 7: Enter a Number (Integer only): -4
//
//        -4 is a Composite Number
//
*/

/*//TODO
//Q.10 Write a Program to Print Table of a Number

#include <stdio.h>
#include <conio.h>
void main()
{
  int n;
  printf("Enter a Number (Integer Only): ");
  scanf("%d",&n);
  printf("\n");
  for(int i=1;i<=10;i++)
  {
    printf("%d * %d = %d\n",n,i,n*i);
  }
  getch();
}

// O/p: Enter a Number (Integer only): 2
//
//      2 * 1 = 2
//      2 * 2 = 4
//      2 * 3 = 6
//      2 * 4 = 8
//      2 * 5 = 10
//      2 * 6 = 12
//      2 * 7 = 14
//      2 * 8 = 16
//      2 * 9 = 18
//      2 * 10 = 20
//
//      Enter a Number (Integer Only): -2
//      
//      -2 * 1 = -2
//      -2 * 2 = -4
//      -2 * 3 = -6
//      -2 * 4 = -8
//      -2 * 5 = -10
//      -2 * 6 = -12
//      -2 * 7 = -14
//      -2 * 8 = -16
//      -2 * 9 = -18
//      -2 * 10 = -20
*/

/*
#include <stdio.h>
void main()
{
  int i=1;
  while(i<=10)
  {
    printf("%d ",i);
    i++;
  }
}

// O/p: 1 2 3 4 5 6 7 8 9 10
*/

/*
#include <stdio.h>
void main()
{
  int i=1;
  while(i<10)
  {
    printf("%d ",i);
    i++;
  }
}

// O/p: 1 2 3 4 5 6 7 8 9
*/

/*
#include <stdio.h>
void main()
{
  int i=1;
  while(i==1)
  {
    printf("%d\n",i);
    ++i;
  }
  printf("End of Program");
}

// O/p: 1
//      End of Program
*/

/*
#include <stdio.h>
void main()
{
  int i=1;
  while(i=1)
  {
    printf("%d\n",i);
    ++i;
  }
  printf("End of Program");
}

// O/p: 1
//      1
//      1
//      1
//      1 //and so on infinite times
*/

/*
#include <stdio.h>
void main()
{
  int i=1;
  while(1)
  {
    printf("%d\n",i);
    ++i;
  }
  printf("End of Program");
}

// O/p: 1
//      2
//      3
//      4
//      5
//      6
//      7
//      8
//      9
//      10 //and so on infinite times
*/

/*
#include <stdio.h>
void main()
{
  int i=1;
  while(i)
  {
    printf("%d\n",i);
    ++i;
  }
  printf("End of Program");
}

// O/p: 1
//      2
//      3
//      4
//      5
//      6
//      7
//      8
//      9
//      10 //and so on till i becomes 0
//      End of Program
*/

/*
#include <stdio.h>
void main()
{
  int i=1;
  while(i)
  {
    printf("%d\n",i);
  }
  printf("End of Program");
}

// O/p: 1
//      2
//      3
//      4
//      5
//      6
//      7
//      8
//      9
//      10 //and so on till infinite times
*/

/*
#include <stdio.h>
void main()
{
  int i;
  while(i<=10)
  {
    printf("%d\n",i);
    i++;
  }
  printf("End of Program");
}

// O/p: End of Program 
*/

/*
#include <stdio.h>
void main()
{
  int i=0;
  while(i++)
  {
    printf("%d\n",i);
  }
  printf("End of Program");
}

// O/p: End of Program
*/

/*
#include <stdio.h>
void main()
{
  int i=0;
  while(++i)
  {
    printf("%d\n",i);
  }
  printf("End of Program");
}

// O/p: 1
//      2
//      3
//      4
//      5
//      6
//      7
//      8
//      9
//      10 //and so on till i becomes 0
//      End of Program
*/

/*
#include <stdio.h>
void main()
{
  int i=0;
  while(++i);
  {
    printf("%d\n",i);
  }
  printf("End of Program");
}

// O/p: 0
//      End of Program
*/

/*
#include <stdio.h>
void main()
{
  char ch='a';
  while(ch)
  {
    printf("%d\n",ch);
    ch++;
  }
}

// O/p: 97
//      98
//      99
//      100
//      101
//      102
//      103
//      104
//      105
//      106
//      107
//      108
//      109
//      110
//      111
//      112
//      113
//      114
//      115
//      116
//      117
//      118
//      119
//      120
//      121
//      122
//      123
//      124
//      125
//      126
//      127
//      -128
//      -127
//      -126
//      -125
//      -124
//      -123
//      -122
//      -121
//      -120
//      -119
//      -118
//      -117
//      -116
//      -115
//      -114
//      -113
//      -112
//      -111
//      -110
//      -109
//      -108
//      -107
//      -106
//      -105
//      -104
//      -103
//      -102
//      -101
//      -100
//      -99
//      -98
//      -97
//      -96
//      -95
//      -94
//      -93
//      -92
//      -91
//      -90
//      -89
//      -88
//      -87
//      -86
//      -85
//      -84
//      -83
//      -82
//      -81
//      -80
//      -79
//      -78
//      -77
//      -76
//      -75
//      -74
//      -73
//      -72
//      -71
//      -70
//      -69
//      -68
//      -67
//      -66
//      -65
//      -64
//      -63
//      -62
//      -61
//      -60
//      -59
//      -58
//      -57
//      -56
//      -55
//      -54
//      -53
//      -52
//      -51
//      -50
//      -49
//      -48
//      -47
//      -46
//      -45
//      -44
//      -43
//      -42
//      -41
//      -40
//      -39
//      -38
//      -37
//      -36
//      -35
//      -34
//      -33
//      -32
//      -31
//      -30
//      -29
//      -28
//      -27
//      -26
//      -25
//      -24
//      -23
//      -22
//      -21
//      -20
//      -19
//      -18
//      -17
//      -16
//      -15
//      -14
//      -13
//      -12
//      -11
//      -10
//      -9
//      -8
//      -7
//      -6
//      -5
//      -4
//      -3
//      -2
//      -1
*/

/*
#include <stdio.h>
void main()
{
  char ch='a';
  while(ch)
  {
    printf("%c\n",ch);
    ch++;
  }
}

// O/p: a
//      b
//      c
//      d
//      e
//      f
//      g
//      h
//      i
//      j
//      k
//      l
//      m
//      n
//      o
//      p
//      q
//      r
//      s
//      t
//      u
//      v
//      w
//      x
//      y
//      z
//      {
//      |
//      }
//      ~
//      ⌂
//      Ç
//      ü
//      é
//      â
//      ä
//      à
//      å
//      ç
//      ê
//      ë
//      è
//      ï
//      î
//      ì
//      Ä
//      Å
//      É
//      æ
//      Æ
//      ô
//      ö
//      ò
//      û
//      ù
//      ÿ
//      Ö
//      Ü
//      ¢
//      £
//      ¥
//      ₧
//      ƒ
//      á
//      í
//      ó
//      ú
//      ñ
//      Ñ
//      ª
//      º
//      ¿
//      ⌐
//      ¬
//      ½
//      ¼
//      ¡
//      «
//      »
//      ░
//      ▒
//      ▓
//      │
//      ┤
//      ╡
//      ╢
//      ╖
//      ╕
//      ╣
//      ║
//      ╗
//      ╝
//      ╜
//      ╛
//      ┐
//      └
//      ┴
//      ┬
//      ├
//      ─
//      ┼
//      ╞
//      ╟
//      ╚
//      ╔
//      ╩
//      ╦
//      ╠
//      ═
//      ╬
//      ╧
//      ╨
//      ╤
//      ╥
//      ╙
//      ╘
//      ╒
//      ╓
//      ╫
//      ╪
//      ┘
//      ┌
//      █
//      ▄
//      ▌
//      ▐
//      ▀
//      α
//      ß
//      Γ
//      π
//      Σ
//      σ
//      µ
//      τ
//      Φ
//      Θ
//      Ω
//      δ
//      ∞
//      φ
//      ε
//      ∩
//      ≡
//      ±
//      ≥
//      ≤
//      ⌠
//      ⌡
//      ÷
//      ≈
//      °
//      ∙
//      ·
//      √
//      ⁿ
//      ²
//      ■
//       
*/

/*
#include <stdio.h>
void main()
{
  char ch='a';
  while(ch)
  {
    printf("%c\n",ch);
    ch--;
  }
}

// O/p: a
//      `
//      _
//      ^
//      ]
//      \
//      [
//      Z
//      Y
//      X
//      W
//      V
//      U
//      T
//      S
//      R
//      Q
//      P
//      O
//      N
//      M
//      L
//      K
//      J
//      I
//      H
//      G
//      F
//      E
//      D
//      C
//      B
//      A
//      @
//      ?
//      >
//      =
//      <
//      ;
//      :
//      9
//      8
//      7
//      6
//      5
//      4
//      3
//      2
//      1
//      0
//      /
//      .
//      -
//      ,
//      +
//      *
//      )
//      (
//      '
//      &
//      %
//      $
//      #
//      "
//      !
//      
//      ▼
//      ▲
//      ↔
//      ∟
//      
//      →
//      ↓
//      ↑
//      ↨
//      ▬
//      §
//      ¶
//      ‼
//      ↕
//      ◄
//      ►
//      ☼
//      ♫
//      
//      ♀
//      ♂
//      
//      
//      
//      
//      
//      ♠
//      ♣
//      ♦
//      ♥
//      ☻
//      ☺
*/

/*
#include <stdio.h>
void main()
{
  char ch='a';
  while(ch)
  {
    printf("%d\n",ch);
    ch--;
  }
}

// O/p: 97
//      96
//      95
//      94
//      93
//      92
//      91
//      90
//      89
//      88
//      87
//      86
//      85
//      84
//      83
//      82
//      81
//      80
//      79
//      78
//      77
//      76
//      75
//      74
//      73
//      72
//      71
//      70
//      69
//      68
//      67
//      66
//      65
//      64
//      63
//      62
//      61
//      60
//      59
//      58
//      57
//      56
//      55
//      54
//      53
//      52
//      51
//      50
//      49
//      48
//      47
//      46
//      45
//      44
//      43
//      42
//      41
//      40
//      39
//      38
//      37
//      36
//      35
//      34
//      33
//      32
//      31
//      30
//      29
//      28
//      27
//      26
//      25
//      24
//      23
//      22
//      21
//      20
//      19
//      18
//      17
//      16
//      15
//      14
//      13
//      12
//      11
//      10
//      9
//      8
//      7
//      6
//      5
//      4
//      3
//      2
//      1
*/

/*
#include <stdio.h>
void main()
{
  char ch='a';
  while(-1)
  {
    printf("%c\n",ch);
    ch--;
  }
}

// O/p: a
//      `
//      _
//      ^
//      ]
//      \
//      [
//      Z
//      Y
//      X
//      W //and so on infinite times
*/

/*
#include <stdio.h>
void main()
{
  char ch='a';
  while(0)
  {
    printf("%c\n",ch);
    ch--;
  }
}

// O/p:
*/

/*
#include <stdio.h>
void main()
{
  int i=0;
  char ch='a';
  while(ch<127&&i==0)
  {
    printf("%d\n",ch);
    ch--;
  }
}

// O/p: 97
//      96
//      95
//      94
//      93
//      92
//      91
//      90
//      89
//      88
//      87
//      86
//      85
//      84
//      83
//      82
//      81
//      80
//      79
//      78
//      77
//      76
//      75
//      74
//      73
//      72
//      71
//      70
//      69
//      68
//      67
//      66
//      65
//      64
//      63
//      62
//      61
//      60
//      59
//      58
//      57
//      56
//      55
//      54
//      53
//      52
//      51
//      50
//      49
//      48
//      47
//      46
//      45
//      44
//      43
//      42
//      41
//      40
//      39
//      38
//      37
//      36
//      35
//      34
//      33
//      32
//      31
//      30
//      29
//      28
//      27
//      26
//      25
//      24
//      23
//      22
//      21
//      20
//      19
//      18
//      17
//      16
//      15
//      14
//      13
//      12
//      11
//      10
//      9
//      8
//      7
//      6
//      5
//      4
//      3
//      2
//      1
//      0
//      -1
//      -2
//      -3
//      -4
//      -5
//      -6
//      -7
//      -8
//      -9
//      -10
//      -11
//      -12
//      -13
//      -14
//      -15
//      -16
//      -17
//      -18
//      -19
//      -20
//      -21
//      -22
//      -23
//      -24
//      -25
//      -26
//      -27
//      -28
//      -29
//      -30
//      -31
//      -32
//      -33
//      -34
//      -35
//      -36
//      -37
//      -38
//      -39
//      -40
//      -41
//      -42
//      -43
//      -44
//      -45
//      -46
//      -47
//      -48
//      -49
//      -50
//      -51
//      -52
//      -53
//      -54
//      -55
//      -56
//      -57
//      -58
//      -59
//      -60
//      -61
//      -62
//      -63
//      -64
//      -65
//      -66
//      -67
//      -68
//      -69
//      -70
//      -71
//      -72
//      -73
//      -74
//      -75
//      -76
//      -77
//      -78
//      -79
//      -80
//      -81
//      -82
//      -83
//      -84
//      -85
//      -86
//      -87
//      -88
//      -89
//      -90
//      -91
//      -92
//      -93
//      -94
//      -95
//      -96
//      -97
//      -98
//      -99
//      -100
//      -101
//      -102
//      -103
//      -104
//      -105
//      -106
//      -107
//      -108
//      -109
//      -110
//      -111
//      -112
//      -113
//      -114
//      -115
//      -116
//      -117
//      -118
//      -119
//      -120
//      -121
//      -122
//      -123
//      -124
//      -125
//      -126
//      -127
//      -128
*/

/*
#include <stdio.h>
void main()
{
  int i=1;
  char ch='a';
  while(ch<127&&i==0)
  {
    printf("%d\n",ch);
    ch--;
  }
}

// O/p: 
*/

/*
#include <stdio.h>
void main()
{
  int i=0;
  do
  {
    printf("Jenny\n");
  }while(i>0);
  printf("Out of Loop");
}

// O/p: Jenny
//      Out of Loop
*/

/*
#include <stdio.h>
void main()
{
  int i=0;
  while(i>0)
  {
    printf("Jenny\n");
  }
  printf("Out of Loop");
}

// O/p: Out of Loop
*/

/*
#include <stdio.h>
void main()
{
  int i=0;
  while(i>0);
  {
    printf("Jenny\n");
  }
  printf("Out of Loop");
}

// O/p: Jenny
//      Out of Loop
*/

/*
#include <stdio.h>
void main()
{
  int i=0;
  do
  {
    printf("Jenny\n");
    i++;
  }while(i>0);
  printf("Out of Loop");
}

// O/p: Jenny
//      Jenny
//      Jenny
//      Jenny
//      Jenny //and so on till i becomes 0
*/

/*
#include <stdio.h>
void main()
{
  int a,i,sum=0;
  for(i=1;i<=5;i++)
  {
    printf("Enter a Number: ");
    scanf("%d",&a);
    if(a<0)
    {
      break;
    }
    sum+=a;
  }
  printf("\nSum=%d",sum);
}

// O/p 1: Enter a Number: 1
//        Enter a Number: 2
//        Enter a Number: 3
//        Enter a Number: 4
//        Enter a Number: 5
//        
//        Sum=15
//
// O/p 2: Enter a Number: 1
//        Enter a Number: 2
//        Enter a Number: -3
//        
//        Sum=3
*/

/*
#include <stdio.h>
void main()
{
  int a,sum=0;
  while(1)
  {
    printf("Enter a Number: ");
    scanf("%d",&a);
    if(a<0)
    {
      break;
    }
    sum+=a;
  }
  printf("\nSum=%d",sum);
}

// O/p 1: Enter a Number: 1
//        Enter a Number: 2
//        Enter a Number: 3
//        Enter a Number: 4
//        Enter a Number: 5
//        Enter a Number: 6
//        Enter a Number: 7
//        Enter a Number: 8
//        Enter a Number: 9
//        Enter a Number: 10 //and so on infinite times
//
// O/p 2: Enter a Number: 1
//        Enter a Number: 2
//        Enter a Number: 3
//        Enter a Number: 4
//        Enter a Number: 5
//        Enter a Number: -6
//        
//        Sum=15
*/

/*
#include <stdio.h>
void main()
{
  int a,sum=0;
  do
  {
    printf("Enter a Number: ");
    scanf("%d",&a);
    if(a<0)
    {
      break;
    }
    sum=sum+a;
  }while(1);
  printf("\n%d",sum);
}

// O/p 1: Enter a Number: 1
//        Enter a Number: 2
//        Enter a Number: 3
//        Enter a Number: 4
//        Enter a Number: 5
//        Enter a Number: 6
//        Enter a Number: 7
//        Enter a Number: 8
//        Enter a Number: 9
//        Enter a Number: 10 //and so on infinite times
//
// O/p 2: Enter a Number: 1
//        Enter a Number: 2
//        Enter a Number: 3
//        Enter a Number: 4
//        Enter a Number: 5
//        Enter a Number: -6
//        
//        Sum=15
*/

/*
#include <stdio.h>
void main()
{
  for(int j=1;j<=6;j++)
  {
    for(int i=1;i<=5;i++)
    {
      printf("*");
    }
    printf("\n");
  }
}

// O/p: *****
//      *****
//      *****
//      *****
//      *****
//      *****
*/

/*
#include <stdio.h>
void main()
{
  int i=0,j=1;
  while(i<3)
  {
    while(j<=3)
    {
      printf("%d",j++);
    }
    printf("%d",i++);
  }
}

// O/p: 123012
*/

/*
#include <stdio.h>
void main()
{
  int i=0,j=1;
  while(i<3)
  {
    while(j<=3)
    {

    }
  }   
  printf("%d %d",++i,++j);
}

// O/p: 
*/

/*
#include <stdio.h>
void main()
{
  int i=1,j=3;
  do
  {
    do
    {
      printf("%d",j);
      j--;
    }while(j>0);
    i++;
    printf("%d",i);
  }while(i<4);
}

// O/p: 321203-14
*/

/*
#include <stdio.h>
void main()
{
  int i=1,j=3;
  do
  {
    do
    {
      printf("%d",j--);
    }while(j>0);
    printf("%d",i++);
  }while(i<4);
}

// O/p: 321102-13
*/

/*...........................................................................................

....................................Loops....................................................
....................................For......................................................
....................................Pattern Printing.........................................
....................................Questions................................................

...........................................................................................*/

//Q.11 Print the following Patterns://FIXME

/*
//Q.11 (i) * * * * *
//         * * * * *
//         * * * * *
//         * * * * *
//         * * * * *

#include <stdio.h>
#include <conio.h>
void main()
{
  int m,n,choice;
  do
  {
    do
    {
      printf("Enter the Number of Rows (Positive only): ");
      scanf("%d",&m);
      if(m<=0)
      {
        printf("\nInvalid Number of Rows\n\n");
      }
    }while(m<=0);
    do
    {
      printf("Enter the Number of Columns (Positive only): ");
      scanf("%d",&n);
      if(n<=0)
      {
        printf("\nInvalid Number of Columns\n\n");
      }
    }while(n<=0);
    printf("\n");
    for(int i=1;i<=m;i++)
    {
      for(int j=1;j<=n;j++)
      {
        printf("* ");  
      }
      printf("\n");
    }
    printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
    scanf("%d",&choice);
    printf("\n");
  }while(choice);
  getch();
}

// O/p 1: Enter the Number of Rows (Positive only): 5
//        Enter the Number of Columns (Positive only): 5
//        
//        * * * * *
//        * * * * *
//        * * * * *
//        * * * * *
//        * * * * *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0es): 0
//
//           
//
// O/p 2: Enter the Number of Rows (Positive only): 4
//        Enter the Number of Columns (Positive only): 8
//        
//        * * * * * * * *
//        * * * * * * * *
//        * * * * * * * *
//        * * * * * * * *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//
//
// O/p 3: Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): //and so on till the user enter a positive number of rows
//        Enter the Number of Columns (Positive only): -5
//        
//        Invalid Number of Columns
//        
//        Enter the Number of Columns (Positive only): -4
//        
//        Invalid Number of Columns
//
//        Enter the Number of Columns (Positive only): 0
//        
//        Invalid Number of Columns
//        
//        Enter the Number of Columns (Positive only): //and so on till the user enter positive number of columns
//
// O/p 4: Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 5
//        Enter the Number of Columns (Positive only): -5
//        
//        Invalid Number of Columns
//        
//        Enter the Number of Columns (Positive only): 5
//        
//        * * * * *
//        * * * * *
//        * * * * *
//        * * * * *
//        * * * * *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Enter the Number of Rows (Positive only): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 4
//        Enter the Number of Columns (Positive only): -8
//        
//        Invalid Number of Columns
//        
//        Enter the Number of Columns (Positive only): 8
//        
//        * * * * * * * *
//        * * * * * * * *
//        * * * * * * * *
//        * * * * * * * *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
*/

/*
//Q.11 (ii) *
//          * *
//          * * *
//          * * * *
//          * * * * *

#include <stdio.h>
#include <conio.h>
void main()
{
  int m,n,choice;
  do
  {
    do
    {
      printf("Enter the Number of Rows (Positive only): ");
      scanf("%d",&m);
      if(m<=0)
      {
        printf("\nInvalid Number of Rows\n\n");
      }
    }while(m<=0);
    printf("\n");
    for(int i=1;i<=m;i++)
    {
      for(int j=1;j<=i;j++)
      {
        printf("* ");  
      }
      printf("\n");
    }
    printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
    scanf("%d",&choice);
    printf("\n");
  }while(choice);
  getch();
}

// O/p 1: Enter the Number of Rows (Positive only): 5
//        
//        *
//        * *
//        * * *
//        * * * *
//        * * * * *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//        
// O/p 2: Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): //and so on till the user enter positive number of rows
//        
// O/p 3: Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        *
//        * *
//        * * *
//        * * * *
//        * * * * *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Enter the Number of Rows (Positive only): -6
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 6
//        
//        *
//        * *
//        * * *
//        * * * *
//        * * * * *
//        * * * * * *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
*/

/*
//Q.11 (iii) * * * * *
//           * * * *
//           * * *
//           * *
//           * 

#include <stdio.h>
#include <conio.h>
void main()
{
  int m,n,choice;
  do
  {
    do
    {
      printf("Enter the Number of Rows (Positive only): ");
      scanf("%d",&m);
      if(m<=0)
      {
        printf("\nInvalid Number of Rows\n\n");
      }
    }while(m<=0);
    printf("\n");
    for(int i=1;i<=m;i++)
    {
      for(int j=m;j>=i;j--)
      {
        printf("* ");  
      }
      printf("\n");
    }
    printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
    scanf("%d",&choice);
    printf("\n");
  }while(choice);
  getch();
}

// O/p 1: Enter the Number of Rows (Positive only): 5 
//        
//        * * * * *
//        * * * *
//        * * *
//        * *
//        *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//        
// O/p 2: Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): //and so on till user enter positive number of rows
//     
// O/p 3: Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        * * * * *
//        * * * *
//        * * *
//        * *
//        *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Enter the Number of Rows (Positive only): -6
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 6
//        
//        * * * * * *
//        * * * * *
//        * * * *
//        * * *
//        * *
//        *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
*/

/*
//Q.11 (iv) 1
//          1 2
//          1 2 3
//          1 2 3 4
//          1 2 3 4 5

#include <stdio.h>
#include <conio.h>
void main()
{
  int m,n,choice,Integer;
  do
  {
    printf("Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): ");
    scanf("%d",&Integer);
    printf("\n");
    switch(Integer)
    {
      case 1: do
              {
                printf("Enter the Number of Rows (Positive only): ");
                scanf("%d",&m);
                if(m<=0)
                {
                  printf("\nInvalid Number of Rows\n\n");
                }
              }while(m<=0);
              printf("\n");
              for(int i=1;i<=m;i++)
              {
                for(int j=1;j<=i;j++)
                {
                  printf("%d ",j);  
                }
                printf("\n");
              }
              printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
              scanf("%d",&choice);
              printf("\n");
              break;
      case 2: do
              {
                printf("Enter the Number of Rows (Positive only): ");
                scanf("%d",&m);
                if(m<=0)
                {
                  printf("\nInvalid Number of Rows\n\n");
                }
              }while(m<=0);
              printf("\n");
              for(int i=1;i<=m;i++)
              {
                for(int j=1;j<=i;j++)
                {
                  printf("%d ",-j);  
                }
                printf("\n");
              }
              printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
              scanf("%d",&choice);
              printf("\n");
              break;
      default: printf("Enter a valid Choice for type of Integer\n\n");        
    }
  }while(choice);
  getch();
}

// O/p 1: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 1
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        1
//        1 2
//        1 2 3
//        1 2 3 4
//        1 2 3 4 5
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//        
// O/p 2: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 2
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        -1
//        -1 -2
//        -1 -2 -3
//        -1 -2 -3 -4
//        -1 -2 -3 -4 -5
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//
// O/p 3: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 1
//        
//        Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): //and so on till user enter positive number of rows
//
// O/p 4: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 2
//        
//        Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): //and so on till user enter positive number of rows
//
// O/p 5: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 0
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 3
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): //and so on till user enter a valid choice
//        
// O/p 6: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 0
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 3
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 1
//        
//        Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        1
//        1 2
//        1 2 3
//        1 2 3 4
//        1 2 3 4 5
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 0
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 4
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 2
//        
//        Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        -1
//        -1 -2
//        -1 -2 -3
//        -1 -2 -3 -4
//        -1 -2 -3 -4 -5
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
*/

/*
//Q.11 (v) 1 2 3 4 5
//         1 2 3 4
//         1 2 3
//         1 2
//         1

#include <stdio.h>
#include <conio.h>
void main()
{
  int m,n,choice,Integer;
  do
  {
    printf("Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): ");
    scanf("%d",&Integer);
    printf("\n");
    switch(Integer)
    {
      case 1: do
              {
                printf("Enter the Number of Rows (Positive only): ");
                scanf("%d",&m);
                if(m<=0)
                {
                  printf("\nInvalid Number of Rows\n\n");
                }
              }while(m<=0);
              printf("\n");
              for(int i=m;i>=1;i--)
              {
                for(int j=1;j<=i;j++)
                {
                  printf("%d ",j);  
                }
                printf("\n");
              }
              printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
              scanf("%d",&choice);
              printf("\n");
              break;
      case 2: do
              {
                printf("Enter the Number of Rows (Positive only): ");
                scanf("%d",&m);
                if(m<=0)
                {
                  printf("\nInvalid Number of Rows\n\n");
                }
              }while(m<=0);
              printf("\n");
              for(int i=m;i>=1;i--)
              {
                for(int j=1;j<=i;j++)
                {
                  printf("%d ",-j);  
                }
                printf("\n");
              }
              printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
              scanf("%d",&choice);
              printf("\n");
              break;
      default: printf("Enter a valid Choice for type of Integer\n\n");        
    }
  }while(choice);
  getch();
}

// O/p 1: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 1
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        1 2 3 4 5
//        1 2 3 4
//        1 2 3
//        1 2
//        1
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//        
// O/p 2: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 2
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        -1 -2 -3 -4 -5
//        -1 -2 -3 -4
//        -1 -2 -3
//        -1 -2
//        -1
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//
// O/p 3: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 1
//        
//        Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): //and so on till user enter positive number of rows
//    
// O/p 4: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 2
//        
//        Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): //and so on till user enter positive number of rows
//
// O/p 5: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 0
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 3
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): //and so on till user enter a valid choice
// 
// O/p 6: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 0
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 3
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 1
//        
//        Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        1 2 3 4 5
//        1 2 3 4
//        1 2 3
//        1 2
//        1
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 0
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 3
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 2
//        
//        Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        -1 -2 -3 -4 -5
//        -1 -2 -3 -4
//        -1 -2 -3
//        -1 -2
//        -1
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
*/

/*
//Q.11 (vi) 5 4 3 2 1
//          5 4 3 2
//          5 4 3
//          5 4
//          5

#include <stdio.h>
#include <conio.h>
void main()
{
  int m,n,choice,Integer;
  do
  {
    printf("Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): ");
    scanf("%d",&Integer);
    printf("\n");
    switch(Integer)
    {
      case 1: do
              {
                printf("Enter the Number of Rows (Positive only): ");
                scanf("%d",&m);
                if(m<=0)
                {
                  printf("\nInvalid Number of Rows\n\n");
                }
              }while(m<=0);
              printf("\n");
              for(int i=1;i<=m;i++)
              {
                for(int j=m;j>=i;j--)
                {
                  printf("%d ",j);  
                }
                printf("\n");
              }
              printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
              scanf("%d",&choice);
              printf("\n");
              break;
      case 2: do
              {
                printf("Enter the Number of Rows (Positive only): ");
                scanf("%d",&m);
                if(m<=0)
                {
                  printf("\nInvalid Number of Rows\n\n");
                }
              }while(m<=0);
              printf("\n");
              for(int i=1;i<=m;i++)
              {
                for(int j=m;j>=i;j--)
                {
                  printf("%d ",-j);  
                }
                printf("\n");
              }
              printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
              scanf("%d",&choice);
              printf("\n");
              break;
      default: printf("Enter a valid Choice for type of Integer\n\n");        
    }
  }while(choice);
  getch();
}

// O/p 1: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 1
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        5 4 3 2 1
//        5 4 3 2
//        5 4 3
//        5 4
//        5
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//        
// O/p 2: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 2
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        -5 -4 -3 -2 -1
//        -5 -4 -3 -2
//        -5 -4 -3
//        -5 -4
//        -5
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//
// O/p 3: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 1
//        
//        Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): //and so on till user enter positive number of rows
//
// O/p 4: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 2
//        
//        Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): //and so on till user enter positive number of rows
//
// O/p 5: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 0
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 3
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): //and so on till user enter a valid choice
// 
// O/p 6: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 0
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 3
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 1
//        
//        Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        5 4 3 2 1
//        5 4 3 2
//        5 4 3
//        5 4
//        5
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 0
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 3
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 2
//        
//        Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        -5 -4 -3 -2 -1
//        -5 -4 -3 -2
//        -5 -4 -3
//        -5 -4
//        -5
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
*/

/*
//Q.11 (vii)         *
//                 * *
//               * * *
//             * * * *
//           * * * * *

#include <stdio.h>
#include <conio.h>
void main()
{
  int m,n,choice;
  do
  {
    do
    {
      printf("Enter the Number of Rows (Positive only): ");
      scanf("%d",&m);
      if(m<=0)
      {
        printf("\nInvalid Number of Rows\n\n");
      }
    }while(m<=0);
    printf("\n");
    for(int i=1;i<=m;i++)
    {
      for(int j=1;j<=m;j++)
      {
        if(i+j<=m)
        {
          printf("  ");
        }
        else
        {
          printf("* ");
        }
      }
      printf("\n");
    }
    printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
    scanf("%d",&choice);
    printf("\n");
  }while(choice);
  getch();
}

// O/p 1: Enter the Number of Rows (Positive only): 5
//        
//                *
//              * *
//            * * *
//          * * * *
//        * * * * *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//             
// O/p 2: Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): //and so on till user enter positive number of rows
//    
// O/p 3: Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 5
//        
//                *
//              * *
//            * * *
//          * * * *
//        * * * * *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Enter the Number of Rows (Positive only): -6
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 6
//        
//                  *
//                * *
//              * * *
//            * * * *
//          * * * * *
//        * * * * * *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
*/

/*
//Q.11 (viii) 1
//            2 2
//            3 3 3
//            4 4 4 4
//            5 5 5 5 5

#include <stdio.h>
#include <conio.h>
void main()
{
  int m,n,choice,Integer;
  do
  {
    printf("Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): ");
    scanf("%d",&Integer);
    printf("\n");
    switch(Integer)
    {
      case 1: do
              {
                printf("Enter the Number of Rows (Positive only): ");
                scanf("%d",&m);
                if(m<=0)
                {
                  printf("\nInvalid Number of Rows\n\n");
                }
              }while(m<=0);
              printf("\n");
              for(int i=1;i<=m;i++)
              {
                for(int j=1;j<=i;j++)
                {
                  printf("%d ",i);  
                }
                printf("\n");
              }
              printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
              scanf("%d",&choice);
              printf("\n");
              break;
      case 2: do
              {
                printf("Enter the Number of Rows (Positive only): ");
                scanf("%d",&m);
                if(m<=0)
                {
                  printf("\nInvalid Number of Rows\n\n");
                }
              }while(m<=0);
              printf("\n");
              for(int i=1;i<=m;i++)
              {
                for(int j=1;j<=i;j++)
                {
                  printf("%d ",-i);  
                }
                printf("\n");
              }
              printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
              scanf("%d",&choice);
              printf("\n");
              break;
      default: printf("Enter a valid Choice for type of Integer\n\n");        
    }
  }while(choice);
  getch();
}

// O/p 1: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 1
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        1
//        2 2
//        3 3 3
//        4 4 4 4
//        5 5 5 5 5
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//        
// O/p 2: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 2
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        -1
//        -2 -2
//        -3 -3 -3
//        -4 -4 -4 -4
//        -5 -5 -5 -5 -5
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//
// O/p 3: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 1
//        
//        Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): //and so on till user enter positive number of rows
//
// O/p 4: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 2
//        
//        Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): //and so on till user enter positive number of rows
//
// O/p 5: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 0
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 3
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): //and so on till user enter a valid choice
// 
// O/p 6: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 0
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 3
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 1
//        
//        Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        1
//        2 2
//        3 3 3
//        4 4 4 4
//        5 5 5 5 5
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 0
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 3
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 2
//        
//        Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        -1
//        -2 -2
//        -3 -3 -3
//        -4 -4 -4 -4
//        -5 -5 -5 -5 -5
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//                
*/

/*
//Q.11 (ix) 1
//          2 3
//          4 5 6
//          7 8 9 10 
//          11 12 13 14 15

#include <stdio.h>
#include <conio.h>
void main()
{
  int m,n,choice,Integer;
  do
  {
    int a=1;
    printf("Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): ");
    scanf("%d",&Integer);
    printf("\n");
    switch(Integer)
    {
      case 1: do
              {
                printf("Enter the Number of Rows (Positive only): ");
                scanf("%d",&m);
                if(m<=0)
                {
                  printf("\nInvalid Number of Rows\n\n");
                }
              }while(m<=0);
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
              printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
              scanf("%d",&choice);
              printf("\n");
              break;
      case 2: do
              {
                printf("Enter the Number of Rows (Positive only): ");
                scanf("%d",&m);
                if(m<=0)
                {
                  printf("\nInvalid Number of Rows\n\n");
                }
              }while(m<=0);
              printf("\n");
              for(int i=1;i<=m;i++)
              {
                for(int j=1;j<=i;j++)
                {
                  printf("%d ",-a);
                  a++;  
                }
                printf("\n");
              }
              printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
              scanf("%d",&choice);
              printf("\n");
              break;
      default: printf("Enter a valid Choice for type of Integer\n\n");        
    }
  }while(choice);
  getch();
}

// O/p 1: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 1
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        1
//        2 3
//        4 5 6
//        7 8 9 10
//        11 12 13 14 15
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//
// O/p 2: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 2
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        -1
//        -2 -3
//        -4 -5 -6
//        -7 -8 -9 -10
//        -11 -12 -13 -14 -15
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//
// O/p 3: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 1
//        
//        Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): //and so on till user enter positive number of rows
//
// O/p 4: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 2
//        
//        Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): //and so on till user enter positive number of rows
//
// O/p 5: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 0
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 3
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): //and so on till user enter a valid choice
// 
// O/p 6: Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 0
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 3
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 1
//        
//        Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        1
//        2 3
//        4 5 6
//        7 8 9 10
//        11 12 13 14 15
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 0
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 3
//        
//        Enter a valid Choice for type of Integer
//        
//        Do You want Positive Integers or Negative Integers in Your Pattern (1 for Positive, 2 for Negative): 2
//        
//        Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        -1
//        -2 -3
//        -4 -5 -6
//        -7 -8 -9 -10
//        -11 -12 -13 -14 -15
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
*/

/*
//Q.11 (x)     *
//            * *
//           * * *
//          * * * *
//         * * * * *

#include <stdio.h>
#include <conio.h>
void main()
{
  int m,n,choice;
  do
  {
    do
    {
      printf("Enter the Number of Rows (Positive only): ");
      scanf("%d",&m);
      if(m<=0)
      {
        printf("\nInvalid Number of Rows\n\n");
      }
    }while(m<=0);
    printf("\n");
    for(int i=1;i<=m;i++)
    {
        for(int Space=1;Space<=m-i;Space++)
        {
          printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
          printf("* ");
        }
      printf("\n");
    }
    printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
    scanf("%d",&choice);
    printf("\n");
  }while(choice);
  getch();
}

// O/p 1: Enter the Number of Rows (Positive only): 5
//        
//            *
//           * *
//          * * *
//         * * * *
//        * * * * *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
// 
// O/p 2: Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): //and so on till user enter positive number of rows
//   
// O/p 3: Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 5
//        
//            *
//           * *
//          * * *
//         * * * *
//        * * * * *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Enter the Number of Rows (Positive only): -6
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 6
//        
//             *
//            * *
//           * * *
//          * * * *
//         * * * * *
//        * * * * * *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
*/

/*
//Q.11 (xi)          *
//                 * * *
//               * * * * *
//             * * * * * * *
//           * * * * * * * * *

#include <stdio.h>
#include <conio.h>
void main()
{
  int m,n,choice;
  do
  {
    do
    {
      printf("Enter the Number of Rows (Positive only): ");
      scanf("%d",&m);
      if(m<=0)
      {
        printf("\nInvalid Number of Rows\n\n");
      }
    }while(m<=0);
    printf("\n");
    for(int i=1;i<=m;i++)
    {
        for(int Space=1;Space<=m-i;Space++)
        {
          printf("  ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
          printf("* ");
        }
      printf("\n");
    }
    printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
    scanf("%d",&choice);
    printf("\n");
  }while(choice);
  getch();
}

// O/p 1: Enter the Number of Rows (Positive only): 5
//        
//                *
//              * * *
//            * * * * *
//          * * * * * * *
//        * * * * * * * * *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//
// O/p 2: Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): //and so on till user enter positive number of rows
//   
// O/p 3: Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 5
//        
//                *
//              * * *
//            * * * * *
//          * * * * * * *
//        * * * * * * * * *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Enter the Number of Rows (Positive only): -6
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 6
//        
//                  *
//                * * *
//              * * * * *
//            * * * * * * *
//          * * * * * * * * *
//        * * * * * * * * * * *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
*/

/*
// Q.11 (xii) * * * * * * * * *
//              * * * * * * *
//                * * * * *
//                  * * *
//                    *

#include <stdio.h>
#include <conio.h>
void main()
{
  int m,n,choice;
  do
  {
    do
    {
      printf("Enter the Number of Rows (Positive only): ");
      scanf("%d",&m);
      if(m<=0)
      {
        printf("\nInvalid Number of Rows\n\n");
      }
    }while(m<=0);
    printf("\n");
    for(int i=m;i>=1;i--)
    {
        for(int Space=1;Space<=m-i;Space++)
        {
          printf("  ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
          printf("* ");
        }
      printf("\n");
    }
    printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
    scanf("%d",&choice);
    printf("\n");
  }while(choice);
  getch();
}

// O/p 1: Enter the Number of Rows (Positive only): 5
//        
//        * * * * * * * * *
//          * * * * * * *
//            * * * * *
//              * * *
//                *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//        
// O/p 2: Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): //and so on till user enter positive number of rows
//   
// O/p 3: Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        * * * * * * * * *
//          * * * * * * *
//            * * * * *
//              * * *
//                *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Enter the Number of Rows (Positive only): -6
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 6
//        
//        * * * * * * * * * * *
//          * * * * * * * * *
//            * * * * * * *
//              * * * * *
//                * * *
//                  *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
*/

/*
// Q.11 (xiii)         *  
//                   * * *  
//                 * * * * * 
//               * * * * * * * 
//             * * * * * * * * *
//               * * * * * * * 
//                 * * * * * 
//                   * * * 
//                     *   

#include <stdio.h>
#include <conio.h>
void main()
{
  int m,n,choice;
  do
  {
    do
    {
      printf("Enter the Number of Rows (Positive only): ");
      scanf("%d",&m);
      if(m<=0)
      {
        printf("\nInvalid Number of Rows\n\n");
      }
    }while(m<=0);
    printf("\n");
    for(int i=1;i<=m;i++)
    {
        for(int Space=1;Space<=m-i;Space++)
        {
          printf("  ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
          printf("* ");
        }
      printf("\n");
    }
    for(int i=m-1;i>=1;i--)
    {
        for(int Space=1;Space<=m-i;Space++)
        {
          printf("  ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
          printf("* ");
        }
      printf("\n");
    }
    printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
    scanf("%d",&choice);
    printf("\n");
  }while(choice);
  getch();
}

// O/p 1: Enter the Number of Rows (Positive only): 5
//        
//                *
//              * * *
//            * * * * *
//          * * * * * * *
//        * * * * * * * * *
//          * * * * * * *
//            * * * * *
//              * * *
//                *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//
// O/p 2: Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): //and so on till user enter positive number of rows
//
// O/p 3: Enter the Number of Rows (Positive only): 5
//        
//        Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 5
//        
//                *
//              * * *
//            * * * * *
//          * * * * * * *
//        * * * * * * * * *
//          * * * * * * *
//            * * * * *
//              * * *
//                *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Enter the Number of Rows (Positive only): -6
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 6
//        
//                  *
//                * * *
//              * * * * *
//            * * * * * * *
//          * * * * * * * * *
//        * * * * * * * * * * *
//          * * * * * * * * *
//            * * * * * * *
//              * * * * *
//                * * * 
//                  *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
*/

/*
//Q.11 (xiv) *
//           * *
//           * * *
//           * * * *
//           * * * * *
//           * * * *
//           * * *
//           * *
//           * 

#include <stdio.h>
#include <conio.h>
void main()
{
  int m,n,choice;
  do
  {
    do
    {
      printf("Enter the Number of Rows (Positive only): ");
      scanf("%d",&m);
      if(m<=0)
      {
        printf("\nInvalid Number of Rows\n\n");
      }
    }while(m<=0);
    printf("\n");
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=i;j++)
        {
          printf("* ");
        }
      printf("\n");
    }
    for(int i=m-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
          printf("* ");
        }
      printf("\n");
    }
    printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
    scanf("%d",&choice);
    printf("\n");
  }while(choice);
  getch();
}

// O/p 1: Enter the Number of Rows (Positive only): 5
//        
//        *
//        * *
//        * * *
//        * * * *
//        * * * * *
//        * * * *
//        * * *
//        * *
//        *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//        
// O/p 2: Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): //and so on till user enter positive number of rows
//
// O/p 3: Enter the Number of Rows (Positive only): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 5
//        
//        *
//        * *
//        * * *
//        * * * *
//        * * * * *
//        * * * *
//        * * *
//        * *
//        *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Enter the Number of Rows (Positive only): -6
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Positive only): 6
//        
//        *
//        * *
//        * * *
//        * * * *
//        * * * * *
//        * * * * * *
//        * * * * *
//        * * * *
//        * * *
//        * *
//        *
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
*/

/*
//Q.11 (xv) A
//          A B
//          A B C
//          A B C D
//          A B C D E

#include <stdio.h>
#include <conio.h>
void main()
{
  int m,n,choice,Alphabet;
  do
  {
    printf("Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): ");
    scanf("%d",&Alphabet);
    printf("\n");
    switch(Alphabet)
    {
      case 1: do
              {
                printf("Enter the Number of Rows (Between 1-26): ");
                scanf("%d",&m);
                if(m<=0)
                {
                  printf("\nInvalid Number of Rows\n\n");
                }
              }while(m<=0);
              printf("\n");
              for(int i=1;i<=m;i++)
              {
                if(i>26)
                {
                  printf("\nThere's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is %d\n",m);
                  break;
                }
                for(int j=0;j<=i-1;j++)
                {
                  printf("%c ",j+65);
                }
                printf("\n");
              }
              printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
              scanf("%d",&choice);
              printf("\n");
              break;
      case 2: do
              {
                printf("Enter the Number of Rows (Between 1-26): ");
                scanf("%d",&m);
                if(m<=0)
                {
                  printf("\nInvalid Number of Rows\n\n");
                }
              }while(m<=0);
              printf("\n");
              for(int i=1;i<=m;i++)
              {
                if(i>26)
                {
                  printf("\nThere's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is %d\n",m);
                  break;
                }
                for(int j=0;j<=i-1;j++)
                {
                  printf("%c ",j+97);  
                }
                printf("\n");
              }
              printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
              scanf("%d",&choice);
              printf("\n");
              break;
      default: printf("Enter a valid Choice for type of Alphabet\n\n");        
    }
  }while(choice);
  getch();
}

// O/p 1: Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 1
//        
//        Enter the Number of Rows (Between 1-26): 5
//        
//        A
//        A B
//        A B C
//        A B C D
//        A B C D E
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//
// O/p 2: Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 2
//        
//        Enter the Number of Rows (Between 1-26): 5
//        
//        a
//        a b
//        a b c
//        a b c d
//        a b c d e
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//      
//  
// O/p 3: Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 1
//        
//        Enter the Number of Rows (Between 1-26): 27
//        
//        A
//        A B
//        A B C
//        A B C D
//        A B C D E
//        A B C D E F
//        A B C D E F G
//        A B C D E F G H
//        A B C D E F G H I
//        A B C D E F G H I J
//        A B C D E F G H I J K 
//        A B C D E F G H I J K L
//        A B C D E F G H I J K L M
//        A B C D E F G H I J K L M N
//        A B C D E F G H I J K L M N O
//        A B C D E F G H I J K L M N O P
//        A B C D E F G H I J K L M N O P Q
//        A B C D E F G H I J K L M N O P Q R
//        A B C D E F G H I J K L M N O P Q R S 
//        A B C D E F G H I J K L M N O P Q R S T
//        A B C D E F G H I J K L M N O P Q R S T U
//        A B C D E F G H I J K L M N O P Q R S T U V
//        A B C D E F G H I J K L M N O P Q R S T U V W
//        A B C D E F G H I J K L M N O P Q R S T U V W X
//        A B C D E F G H I J K L M N O P Q R S T U V W X Y 
//        A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
//        
//        There's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is 27
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//
// O/p 4: Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 2
//        
//        Enter the Number of Rows (Between 1-26): 27
//        
//        a 
//        a b
//        a b c
//        a b c d
//        a b c d e
//        a b c d e f
//        a b c d e f g 
//        a b c d e f g h
//        a b c d e f g h i 
//        a b c d e f g h i j
//        a b c d e f g h i j k
//        a b c d e f g h i j k l
//        a b c d e f g h i j k l m
//        a b c d e f g h i j k l m n
//        a b c d e f g h i j k l m n o
//        a b c d e f g h i j k l m n o p
//        a b c d e f g h i j k l m n o p q
//        a b c d e f g h i j k l m n o p q r
//        a b c d e f g h i j k l m n o p q r s
//        a b c d e f g h i j k l m n o p q r s t
//        a b c d e f g h i j k l m n o p q r s t u
//        a b c d e f g h i j k l m n o p q r s t u v
//        a b c d e f g h i j k l m n o p q r s t u v w 
//        a b c d e f g h i j k l m n o p q r s t u v w x
//        a b c d e f g h i j k l m n o p q r s t u v w x y
//        a b c d e f g h i j k l m n o p q r s t u v w x y z
//        
//        There's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is 27
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//
// O/p 5: Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercasee, 2 for Lowercase): 1
//        
//        Enter the Number of Rows (Between 1-26): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): //and so on till user enter positive number of rows
//
// O/p 6: Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 2
//        
//        Enter the Number of Rows (Between 1-26): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): //and so on till user enter positive number of rows
//
// O/p 7: Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 0
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 3
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Positive, 2 for Lowercase): //and so on till user enter a valid choice
// 
// O/p 8: Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 0
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 3
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 1
//        
//        Enter the Number of Rows (Between 1-26): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 5
//        
//        A
//        A B
//        A B C
//        A B C D
//        A B C D E
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 0
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 3
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 2
//        
//        Enter the Number of Rows (Between 1-26): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 5
//        
//        a
//        a b
//        a b c
//        a b c d
//        a b c d e
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 0
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 3
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 1 
//        
//        Enter the Number of Rows (Between 1-26): -27
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 27
//        
//        A
//        A B
//        A B C
//        A B C D
//        A B C D E
//        A B C D E F
//        A B C D E F G
//        A B C D E F G H
//        A B C D E F G H I
//        A B C D E F G H I J
//        A B C D E F G H I J K 
//        A B C D E F G H I J K L
//        A B C D E F G H I J K L M
//        A B C D E F G H I J K L M N
//        A B C D E F G H I J K L M N O
//        A B C D E F G H I J K L M N O P
//        A B C D E F G H I J K L M N O P Q 
//        A B C D E F G H I J K L M N O P Q R
//        A B C D E F G H I J K L M N O P Q R S
//        A B C D E F G H I J K L M N O P Q R S T
//        A B C D E F G H I J K L M N O P Q R S T U
//        A B C D E F G H I J K L M N O P Q R S T U V
//        A B C D E F G H I J K L M N O P Q R S T U V W 
//        A B C D E F G H I J K L M N O P Q R S T U V W X
//        A B C D E F G H I J K L M N O P Q R S T U V W X Y
//        A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
//        
//        There's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is 27
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 0
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 3
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 2
//        
//        Enter the Number of Rows (Between 1-26): -27
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 27
//        
//        a
//        a b
//        a b c
//        a b c d
//        a b c d e
//        a b c d e f
//        a b c d e f g
//        a b c d e f g h
//        a b c d e f g h i
//        a b c d e f g h i j
//        a b c d e f g h i j k
//        a b c d e f g h i j k l
//        a b c d e f g h i j k l m 
//        a b c d e f g h i j k l m n
//        a b c d e f g h i j k l m n o
//        a b c d e f g h i j k l m n o p
//        a b c d e f g h i j k l m n o p q
//        a b c d e f g h i j k l m n o p q r
//        a b c d e f g h i j k l m n o p q r s
//        a b c d e f g h i j k l m n o p q r s t
//        a b c d e f g h i j k l m n o p q r s t u 
//        a b c d e f g h i j k l m n o p q r s t u v
//        a b c d e f g h i j k l m n o p q r s t u v w
//        a b c d e f g h i j k l m n o p q r s t u v w x
//        a b c d e f g h i j k l m n o p q r s t u v w x y
//        a b c d e f g h i j k l m n o p q r s t u v w x y z
//        
//        There's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is 27
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
*/

/*
//Q.11 (xvi) A B C D E
//           A B C D
//           A B C
//           A B
//           A

#include <stdio.h>
#include <conio.h>
void main()
{
  int m,n,choice,Alphabet;
  do
  {
    printf("Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): ");
    scanf("%d",&Alphabet);
    printf("\n");
    switch(Alphabet)
    {
      case 1: do
              {
                printf("Enter the Number of Rows (Between 1-26): ");
                scanf("%d",&m);
                if(m<=0)
                {
                  printf("\nInvalid Number of Rows\n\n");
                }
              }while(m<=0);
              printf("\n");
              for(int i=m;i>=1;i--)
              {
                if(i>26)
                {
                  i=26;
                }
                for(int j=1;j<=i;j++)
                {
                  printf("%c ",j+64);
                }
                printf("\n");
              }
              if(m>26)
              {
                printf("\nThere's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is %d\n",m);
              }
              printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
              scanf("%d",&choice);
              printf("\n");
              break;
      case 2: do
              {
                printf("Enter the Number of Rows (Between 1-26): ");
                scanf("%d",&m);
                if(m<=0)
                {
                  printf("\nInvalid Number of Rows\n\n");
                }
              }while(m<=0);
              printf("\n");
              for(int i=m;i>=1;i--)
              {
                if(i>26)
                {
                  i=26;
                }
                for(int j=1;j<=i;j++)
                {
                  printf("%c ",j+96);  
                }
                printf("\n");
              }
              if(m>26)
              {
                printf("\nThere's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is %d\n",m);
              }
              printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
              scanf("%d",&choice);
              printf("\n");
              break;
      default: printf("Enter a valid Choice for type of Alphabet\n\n");        
    }
  }while(choice);
  getch();
}

// O/p 1: Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 1
//        
//        Enter the Number of Rows (Between 1-26): 5
//        
//        A B C D E
//        A B C D
//        A B C
//        A B
//        A
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//    
// O/p 2: Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 2
//        
//        Enter the Number of Rows (Between 1-26): 5
//        
//        a b c d e
//        a b c d
//        a b c
//        a b
//        a
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//
// O/p 3: Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 1
//        
//        Enter the Number of Rows (Between 1-26): 27
//        
//        A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
//        A B C D E F G H I J K L M N O P Q R S T U V W X Y
//        A B C D E F G H I J K L M N O P Q R S T U V W X
//        A B C D E F G H I J K L M N O P Q R S T U V W
//        A B C D E F G H I J K L M N O P Q R S T U V
//        A B C D E F G H I J K L M N O P Q R S T U
//        A B C D E F G H I J K L M N O P Q R S T 
//        A B C D E F G H I J K L M N O P Q R S
//        A B C D E F G H I J K L M N O P Q R
//        A B C D E F G H I J K L M N O P Q 
//        A B C D E F G H I J K L M N O P
//        A B C D E F G H I J K L M N O 
//        A B C D E F G H I J K L M N
//        A B C D E F G H I J K L M
//        A B C D E F G H I J K L 
//        A B C D E F G H I J K
//        A B C D E F G H I J
//        A B C D E F G H I
//        A B C D E F G H
//        A B C D E F G
//        A B C D E F
//        A B C D E
//        A B C D
//        A B C
//        A B
//        A
//        
//        There's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is 27
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//
// O/p 4: Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 2
//        
//        Enter the Number of Rows (Between 1-26): 27
//        
//        a b c d e f g h i j k l m n o p q r s t u v w x y z
//        a b c d e f g h i j k l m n o p q r s t u v w x y
//        a b c d e f g h i j k l m n o p q r s t u v w x
//        a b c d e f g h i j k l m n o p q r s t u v w
//        a b c d e f g h i j k l m n o p q r s t u v
//        a b c d e f g h i j k l m n o p q r s t u 
//        a b c d e f g h i j k l m n o p q r s t
//        a b c d e f g h i j k l m n o p q r s
//        a b c d e f g h i j k l m n o p q r
//        a b c d e f g h i j k l m n o p q 
//        a b c d e f g h i j k l m n o p
//        a b c d e f g h i j k l m n o
//        a b c d e f g h i j k l m n
//        a b c d e f g h i j k l m
//        a b c d e f g h i j k l
//        a b c d e f g h i j k
//        a b c d e f g h i j 
//        a b c d e f g h i
//        a b c d e f g h
//        a b c d e f g
//        a b c d e f
//        a b c d e
//        a b c d
//        a b c
//        a b
//        a
//        
//        There's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is 27
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//
// O/p 5: Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercasee, 2 for Lowercase): 1
//        
//        Enter the Number of Rows (Between 1-26): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): //and so on till user enter positive number of rows
//
// O/p 6: Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 2
//        
//        Enter the Number of Rows (Between 1-26): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): //and so on till user enter positive number of rows
// 
// O/p 7: Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 0
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 3
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Positive, 2 for Lowercase): //and so on till user enter a valid choice
// 
// O/p 8: Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 0
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 3
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 1
//        
//        Enter the Number of Rows (Between 1-26): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 5
//        
//        A B C D E
//        A B C D
//        A B C
//        A B
//        A
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 0
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 3
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 2
//        
//        Enter the Number of Rows (Between 1-26): -5 
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 5
//        
//        a b c d e
//        a b c d
//        a b c
//        a b
//        a
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 0
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 3
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 1
//        
//        Enter the Number of Rows (Between 1-26): -27
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 27
//        
//        A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
//        A B C D E F G H I J K L M N O P Q R S T U V W X Y
//        A B C D E F G H I J K L M N O P Q R S T U V W X
//        A B C D E F G H I J K L M N O P Q R S T U V W
//        A B C D E F G H I J K L M N O P Q R S T U V 
//        A B C D E F G H I J K L M N O P Q R S T U
//        A B C D E F G H I J K L M N O P Q R S T
//        A B C D E F G H I J K L M N O P Q R S
//        A B C D E F G H I J K L M N O P Q R
//        A B C D E F G H I J K L M N O P Q
//        A B C D E F G H I J K L M N O P 
//        A B C D E F G H I J K L M N O
//        A B C D E F G H I J K L M N
//        A B C D E F G H I J K L M
//        A B C D E F G H I J K L
//        A B C D E F G H I J K
//        A B C D E F G H I J
//        A B C D E F G H I
//        A B C D E F G H
//        A B C D E F G
//        A B C D E F
//        A B C D E
//        A B C D 
//        A B C
//        A B
//        A
//        
//        There's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is 27
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 0
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 3
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 2
//        
//        Enter the Number of Rows (Between 1-26): -27
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 27
//        
//        a b c d e f g h i j k l m n o p q r s t u v w x y z
//        a b c d e f g h i j k l m n o p q r s t u v w x y
//        a b c d e f g h i j k l m n o p q r s t u v w x
//        a b c d e f g h i j k l m n o p q r s t u v w
//        a b c d e f g h i j k l m n o p q r s t u v
//        a b c d e f g h i j k l m n o p q r s t u
//        a b c d e f g h i j k l m n o p q r s t
//        a b c d e f g h i j k l m n o p q r s
//        a b c d e f g h i j k l m n o p q r 
//        a b c d e f g h i j k l m n o p q
//        a b c d e f g h i j k l m n o p
//        a b c d e f g h i j k l m n o
//        a b c d e f g h i j k l m n
//        a b c d e f g h i j k l m
//        a b c d e f g h i j k l
//        a b c d e f g h i j k
//        a b c d e f g h i j
//        a b c d e f g h i
//        a b c d e f g h
//        a b c d e f g
//        a b c d e f
//        a b c d e
//        a b c d
//        a b c
//        a b
//        a
//        
//        There's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is 27
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
*/

/*
//Q.11 (xvii) E E E E E
//            D D D D
//            C C C
//            B B
//            A

#include <stdio.h>
#include <conio.h>
void main()
{
  int m,n,choice,Alphabet;
  do
  {
    printf("Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): ");
    scanf("%d",&Alphabet);
    printf("\n");
    switch(Alphabet)
    {
      case 1: do
              {
                printf("Enter the Number of Rows (Between 1-26): ");
                scanf("%d",&m);
                if(m<=0)
                {
                  printf("\nInvalid Number of Rows\n\n");
                }
              }while(m<=0);
              printf("\n");
              for(int i=m;i>=1;i--)
              {
                if(i>26)
                {
                  i=26;
                }
                for(int j=1;j<=i;j++)
                {
                  printf("%c ",i+'A'-1);
                }
                printf("\n");
              }
              if(m>26)
              {
                printf("\nThere's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is %d\n",m);
              }
              printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
              scanf("%d",&choice);
              printf("\n");
              break;
      case 2: do
              {
                printf("Enter the Number of Rows (Between 1-26): ");
                scanf("%d",&m);
                if(m<=0)
                {
                  printf("\nInvalid Number of Rows\n\n");
                }
              }while(m<=0);
              printf("\n");
              for(int i=m;i>=1;i--)
              {
                if(i>26)
                {
                  i=26;
                }
                for(int j=1;j<=i;j++)
                {
                  printf("%c ",i+'a'-1);  
                }
                printf("\n");
              }
              if(m>26)
              {
                printf("\nThere's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is %d\n",m);
              }
              printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
              scanf("%d",&choice);
              printf("\n");
              break;
      default: printf("Enter a valid Choice for type of Alphabet\n\n");        
    }
  }while(choice);
  getch();
}

// O/p 1: Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 1
//        
//        Enter the Number of Rows (Between 1-26): 5
//        
//        E E E E E
//        D D D D
//        C C C
//        B B
//        A
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//   
// O/p 2: Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 2
//        
//        Enter the Number of Rows (Between 1-26): 5
//        
//        e e e e e
//        d d d d
//        c c c
//        b b
//        a
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//
// O/p 3: Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 1
//        
//        Enter the Number of Rows (Between 1-26): 27
//        
//        Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z
//        Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y
//        X X X X X X X X X X X X X X X X X X X X X X X X
//        W W W W W W W W W W W W W W W W W W W W W W W
//        V V V V V V V V V V V V V V V V V V V V V V
//        U U U U U U U U U U U U U U U U U U U U U
//        T T T T T T T T T T T T T T T T T T T T
//        S S S S S S S S S S S S S S S S S S S
//        R R R R R R R R R R R R R R R R R R 
//        Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q
//        P P P P P P P P P P P P P P P P
//        O O O O O O O O O O O O O O O
//        N N N N N N N N N N N N N N
//        M M M M M M M M M M M M M
//        L L L L L L L L L L L L
//        K K K K K K K K K K K 
//        J J J J J J J J J J
//        I I I I I I I I I
//        H H H H H H H H
//        G G G G G G G
//        F F F F F F
//        E E E E E
//        D D D D
//        C C C
//        B B
//        A
//        
//        There's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is 27
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//
// O/p 4: Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 2
//        
//        Enter the Number of Rows (Between 1-26): 27
//        
//        z z z z z z z z z z z z z z z z z z z z z z z z z z
//        y y y y y y y y y y y y y y y y y y y y y y y y y
//        x x x x x x x x x x x x x x x x x x x x x x x x
//        w w w w w w w w w w w w w w w w w w w w w w w
//        v v v v v v v v v v v v v v v v v v v v v v
//        u u u u u u u u u u u u u u u u u u u u u
//        t t t t t t t t t t t t t t t t t t t t
//        s s s s s s s s s s s s s s s s s s s 
//        r r r r r r r r r r r r r r r r r r
//        q q q q q q q q q q q q q q q q q
//        p p p p p p p p p p p p p p p p
//        o o o o o o o o o o o o o o o
//        n n n n n n n n n n n n n n
//        m m m m m m m m m m m m m
//        l l l l l l l l l l l l
//        k k k k k k k k k k k
//        j j j j j j j j j j
//        i i i i i i i i i 
//        h h h h h h h h
//        g g g g g g g
//        f f f f f f
//        e e e e e
//        d d d d
//        c c c
//        b b
//        a
//        
//        There's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is 27
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//
// O/p 5: Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercasee, 2 for Lowercase): 1
//        
//        Enter the Number of Rows (Between 1-26): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): //and so on till user enter positive number of rows
//
// O/p 6: Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 2
//        
//        Enter the Number of Rows (Between 1-26): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): //and so on till user enter positive number of rows
// 
// O/p 7: Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 0
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 3
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Positive, 2 for Lowercase): //and so on till user enter a valid choice
// 
// O/p 8: Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 0
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 3
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 1
//        
//        Enter the Number of Rows (Between 1-26): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 5
//        
//        E E E E E
//        D D D D
//        C C C
//        B B
//        A
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 0
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 3
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 2
//        
//        Enter the Number of Rows (Between 1-26): -5 
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 5
//        
//        e e e e e
//        d d d d
//        c c c
//        b b
//        a
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 0
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 3
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 1
//        
//        Enter the Number of Rows (Between 1-26): -27
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 27
//        
//        Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z
//        Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y
//        X X X X X X X X X X X X X X X X X X X X X X X X
//        W W W W W W W W W W W W W W W W W W W W W W W
//        V V V V V V V V V V V V V V V V V V V V V V
//        U U U U U U U U U U U U U U U U U U U U U 
//        T T T T T T T T T T T T T T T T T T T T
//        S S S S S S S S S S S S S S S S S S S
//        R R R R R R R R R R R R R R R R R R
//        Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q
//        P P P P P P P P P P P P P P P P
//        O O O O O O O O O O O O O O O
//        N N N N N N N N N N N N N N
//        M M M M M M M M M M M M M
//        L L L L L L L L L L L L
//        K K K K K K K K K K K
//        J J J J J J J J J J
//        I I I I I I I I I
//        H H H H H H H H
//        G G G G G G G
//        F F F F F F
//        E E E E E
//        D D D D
//        C C C
//        B B
//        A
//        
//        There's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is 27
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 0
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 3
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 2  
//        
//        Enter the Number of Rows (Between 1-26): -27
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 27
//        
//        z z z z z z z z z z z z z z z z z z z z z z z z z z
//        y y y y y y y y y y y y y y y y y y y y y y y y y
//        x x x x x x x x x x x x x x x x x x x x x x x x
//        w w w w w w w w w w w w w w w w w w w w w w w
//        v v v v v v v v v v v v v v v v v v v v v v
//        u u u u u u u u u u u u u u u u u u u u u 
//        t t t t t t t t t t t t t t t t t t t t
//        s s s s s s s s s s s s s s s s s s s
//        r r r r r r r r r r r r r r r r r r
//        q q q q q q q q q q q q q q q q q
//        p p p p p p p p p p p p p p p p
//        o o o o o o o o o o o o o o o
//        n n n n n n n n n n n n n n 
//        m m m m m m m m m m m m m
//        l l l l l l l l l l l l
//        k k k k k k k k k k k
//        j j j j j j j j j j
//        i i i i i i i i i
//        h h h h h h h h
//        g g g g g g g
//        f f f f f f
//        e e e e e
//        d d d d
//        c c c
//        b b
//        a
//        
//        There's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is 27
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
*/

/*
//Q.11 (xviii) A
//             B B
//             C C C
//             D D D D
//             E E E E E

#include <stdio.h>
#include <conio.h>
void main()
{
  int m,n,choice,Alphabet;
  do
  {
    printf("Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): ");
    scanf("%d",&Alphabet);
    printf("\n");
    switch(Alphabet)
    {
      case 1: do
              {
                printf("Enter the Number of Rows (Between 1-26): ");
                scanf("%d",&m);
                if(m<=0)
                {
                  printf("\nInvalid Number of Rows\n\n");
                }
              }while(m<=0);
              printf("\n");
              for(int i=0;i<=m-1;i++)
              {
                if(i>25)
                {
                  printf("\nThere's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is %d\n",m);
                  break;
                }
                for(int j=0;j<=i;j++)
                {
                  printf("%c ",i+'A');
                }
                printf("\n");
              }
              printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
              scanf("%d",&choice);
              printf("\n");
              break;
      case 2: do
              {
                printf("Enter the Number of Rows (Between 1-26): ");
                scanf("%d",&m);
                if(m<=0)
                {
                  printf("\nInvalid Number of Rows\n\n");
                }
              }while(m<=0);
              printf("\n");
              for(int i=0;i<=m-1;i++)
              {
                if(i>25)
                {
                  printf("\nThere's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is %d\n",m);
                  break;
                }
                for(int j=0;j<=i;j++)
                {
                  printf("%c ",i+'a');  
                }
                printf("\n");
              }
              printf("\nDo You want to continue? (0 for No, 1 for Yes): ");
              scanf("%d",&choice);
              printf("\n");
              break;
      default: printf("Enter a valid Choice for type of Alphabet\n\n");        
    }
  }while(choice);
  getch();
}

// O/p 1: Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 1
//        
//        Enter the Number of Rows (Between 1-26): 5
//        
//        A
//        B B
//        C C C
//        D D D D
//        E E E E E
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//
// O/p 2: Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 2
//        
//        Enter the Number of Rows (Between 1-26): 5
//        
//        a
//        b b
//        c c c
//        d d d d
//        e e e e e
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//
// O/p 3: Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 1
//        
//        Enter the Number of Rows (Between 1-26): 27
//        
//        A
//        B B
//        C C C
//        D D D D
//        E E E E E
//        F F F F F F
//        G G G G G G G
//        H H H H H H H H
//        I I I I I I I I I
//        J J J J J J J J J J
//        K K K K K K K K K K K
//        L L L L L L L L L L L L
//        M M M M M M M M M M M M M 
//        N N N N N N N N N N N N N N
//        O O O O O O O O O O O O O O O
//        P P P P P P P P P P P P P P P P
//        Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q
//        R R R R R R R R R R R R R R R R R R
//        S S S S S S S S S S S S S S S S S S S
//        T T T T T T T T T T T T T T T T T T T T 
//        U U U U U U U U U U U U U U U U U U U U U
//        V V V V V V V V V V V V V V V V V V V V V V
//        W W W W W W W W W W W W W W W W W W W W W W W
//        X X X X X X X X X X X X X X X X X X X X X X X X
//        Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y 
//        Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z
//        
//        There's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is 27
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//
// O/p 4: Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 2
//        
//        Enter the Number of Rows (Between 1-26): 27
//        
//        a
//        b b
//        c c c
//        d d d d
//        e e e e e
//        f f f f f f
//        g g g g g g g
//        h h h h h h h h
//        i i i i i i i i i
//        j j j j j j j j j j
//        k k k k k k k k k k k
//        l l l l l l l l l l l l
//        m m m m m m m m m m m m m
//        n n n n n n n n n n n n n n 
//        o o o o o o o o o o o o o o o
//        p p p p p p p p p p p p p p p p
//        q q q q q q q q q q q q q q q q q
//        r r r r r r r r r r r r r r r r r r
//        s s s s s s s s s s s s s s s s s s s
//        t t t t t t t t t t t t t t t t t t t t 
//        u u u u u u u u u u u u u u u u u u u u u
//        v v v v v v v v v v v v v v v v v v v v v v
//        w w w w w w w w w w w w w w w w w w w w w w w
//        x x x x x x x x x x x x x x x x x x x x x x x x
//        y y y y y y y y y y y y y y y y y y y y y y y y y
//        z z z z z z z z z z z z z z z z z z z z z z z z z z 
//        
//        There's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is 27
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
//
// O/p 5: Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercasee, 2 for Lowercase): 1
//        
//        Enter the Number of Rows (Between 1-26): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): //and so on till user enter positive number of rows
//
// O/p 6: Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 2
//        
//        Enter the Number of Rows (Between 1-26): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): -4
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 0
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): //and so on till user enter positive number of rows
//
// O/p 7: Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 0
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 3
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Positive, 2 for Lowercase): //and so on till user enter a valid choice
// 
// O/p 7: Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 0
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 3
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 1
//        
//        Enter the Number of Rows (Between 1-26): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 5
//        
//        A
//        B B
//        C C C
//        D D D D
//        E E E E E
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 0
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 3
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 2
//        
//        Enter the Number of Rows (Between 1-26): -5
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 5
//        
//        a
//        b b
//        c c c
//        d d d d
//        e e e e e
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 0
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 3
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 1
//        
//        Enter the Number of Rows (Between 1-26): -27
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 27
//        
//        A
//        B B
//        C C C
//        D D D D
//        E E E E E
//        F F F F F F
//        G G G G G G G
//        H H H H H H H H
//        I I I I I I I I I
//        J J J J J J J J J J
//        K K K K K K K K K K K
//        L L L L L L L L L L L L
//        M M M M M M M M M M M M M
//        N N N N N N N N N N N N N N 
//        O O O O O O O O O O O O O O O
//        P P P P P P P P P P P P P P P P
//        Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q Q
//        R R R R R R R R R R R R R R R R R R
//        S S S S S S S S S S S S S S S S S S S
//        T T T T T T T T T T T T T T T T T T T T
//        U U U U U U U U U U U U U U U U U U U U U
//        V V V V V V V V V V V V V V V V V V V V V V 
//        W W W W W W W W W W W W W W W W W W W W W W W
//        X X X X X X X X X X X X X X X X X X X X X X X X
//        Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y Y
//        Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z Z
//        
//        There's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is 27
//        
//        Do You want to continue? (0 for No, 1 for Yes): 1
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 0
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase Alphabets in Your Pattern (1 for Uppercase, 2 for Lowercase): 3
//        
//        Enter a valid Choice for type of Alphabet
//        
//        Do You want Uppercase Alphabets or Lowercase in Your Alphabets Pattern (1 for Uppercase, 2 for Lowercase): 2
//        
//        Enter the Number of Rows (Between 1-26): -27
//        
//        Invalid Number of Rows
//        
//        Enter the Number of Rows (Between 1-26): 27
//        
//        a
//        b b
//        c c c
//        d d d d
//        e e e e e
//        f f f f f f
//        g g g g g g g
//        h h h h h h h h
//        i i i i i i i i i
//        j j j j j j j j j j
//        k k k k k k k k k k k 
//        l l l l l l l l l l l l
//        m m m m m m m m m m m m m
//        n n n n n n n n n n n n n n
//        o o o o o o o o o o o o o o o
//        p p p p p p p p p p p p p p p p
//        q q q q q q q q q q q q q q q q q 
//        r r r r r r r r r r r r r r r r r r
//        s s s s s s s s s s s s s s s s s s s
//        t t t t t t t t t t t t t t t t t t t t
//        u u u u u u u u u u u u u u u u u u u u u
//        v v v v v v v v v v v v v v v v v v v v v v 
//        w w w w w w w w w w w w w w w w w w w w w w w
//        x x x x x x x x x x x x x x x x x x x x x x x x
//        y y y y y y y y y y y y y y y y y y y y y y y y y
//        z z z z z z z z z z z z z z z z z z z z z z z z z z
//        
//        There's only 26 Alphabets so only 26 Rows are Printed even though Number of Rows is 27
//        
//        Do You want to continue? (0 for No, 1 for Yes): 0
//        
//        
*/

/*...........................................................................................

.......................................Arrays................................................
.......................................1-D Array.............................................

...........................................................................................*/

/*
#include <stdio.h>
void main()
{
  int a[60];
  int roll_n0[60];
}

// O/p: 
*/

/*
#include <stdio.h>
void main()
{
  int a[5];
  float b[10];
  char c[10];
}

// O/p: 
*/

/*
#include <stdio.h>
void main()
{
  int a[2+2];
  int b[3*2];
  int c[10/2];
  int d[11/2];
}

// O/p:
*/

/*
#include <stdio.h>
#define N 5
void main()
{
  int a[N];
}

// O/p:
*/

/*
#include <stdio.h>
void main()
{
  int a[5]={0,-1,11,10,2};
  int b[]={0,1,2,0,-1,6,7};
  int c[5]={0,1,-1};
  int d[5];
  int e[5];
  e[0]=1,e[1]=2,e[2]=-1,e[3]=10,e[4]=11;
  int f[5]={0};
  char g[]={'J','e','n','n','y'};
  char h[10]={'J','e','n','n','y'};
  printf("%d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4]);
  printf("%d %d %d %d %d %d %d\n",b[0],b[1],b[2],b[3],b[4],b[5],b[6]);
  printf("%d %d %d %d %d\n",c[0],c[1],c[2],c[3],c[4]);
  printf("%d %d %d %d %d\n",d[0],d[1],d[2],d[3],d[4]);
  printf("%d %d %d %d %d\n",e[0],e[1],e[2],e[3],e[4]);
  printf("%d %d %d %d %d\n",f[0],f[1],f[2],f[3],f[4]);
  printf("%c %c %c %c %c\n",g[0],g[1],g[2],g[3],g[4]);
  printf("%c %c %c %c %c\n",h[0],h[1],h[2],h[3],h[4]);
}

// O/p: 0 -1 11 10 2
//      0 1 2 0 -1 6 7
//      0 1 -1 0 0
//      1976124188 6422268 1975805169 8 1975742013
//      1 2 -1 10 11
//      0 0 0 0 0
//      J e n n y
//      J e n n y
*/

/*
#include <stdio.h>
void main()
{
  int a[5],i;
  for(i=0;i<5;i++)
  {
    printf("Enter the Array Elements: ");
    scanf("%d",&a[i]);
  }
  printf("\n");
  for(i=0;i<5;i++)
  {
    printf("Array Element at %d is %d \n",i,a[i]);
  }
}

// O/p: Enter the Array Elements: 1
//      Enter the Array Elements: 2
//      Enter the Array Elements: 3
//      Enter the Array Elements: 4
//      Enter the Array Elements: 5
//      
//      Array Element at 0 is 1
//      Array Element at 1 is 2
//      Array Element at 2 is 3
//      Array Element at 3 is 4
//      Array Element at 4 is 5
*/

/*...........................................................................................

....................................Questions................................................

...........................................................................................*/

/*//TODO
//Q.12 (i) Write a Program to Create a 1-D Array and Print its Elements

#include <stdio.h>
#include <conio.h>
void main()
{
  int n,Size,Datatype,Choice;
  printf("Enter what type of Data You want to Store in the Array: \n");
  printf("It could be Integer, Float(Point Values), Character: \n");
  do
  {
    printf("Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: ");
    scanf("%d",&Datatype);
    printf("\n");
    switch(Datatype)
    {
      case 1: {
                printf("Enter the Size of Array (Positive only): ");
                scanf("%d",&Size);
                do
                {
                  printf("Enter how much Elements You want to Store in the Array: ");
                  scanf("%d",&n);
                  if(n<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array: \n\n");
                  }
                  else if(n>Size)
                  {
                    printf("\nYou can only Store maximum of %d Element in the Array: \n\n",Size);
                  }
                }while(n<=0||n>Size);
                int arr[Size];
                printf("\nEnter the Array Elements (Integers only): \n\n");
                for(int i=0;i<=n-1;i++)
                {
                  printf("Enter the Array Element %d: ",i+1);
                  scanf("%d",&arr[i]);
                }
                printf("\nThe Array Elements are: ");
                for(int i=0;i<=n-1;i++)
                {
                  printf("%d   ",arr[i]);
                }
                printf("\n\nDo You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }
      case 2: {
                printf("Enter the Size of Array (Positive only): ");
                scanf("%d",&Size);
                do
                {
                  printf("Enter how much Elements You want to Store in the Array: ");
                  scanf("%d",&n);
                  if(n<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array: \n\n");
                  }
                  else if(n>Size)
                  {
                    printf("\nYou can only Store maximum of %d Element in the Array: \n\n",Size);
                  }
                }while(n<=0||n>Size);
                float arr[Size];
                printf("\nEnter the Array Elements (Float only): \n\n");
                for(int i=0;i<=n-1;i++)
                {
                  printf("Enter the Array Element %d: ",i+1);
                  scanf("%f",&arr[i]);
                }
                printf("\nThe Array Elements are: ");
                for(int i=0;i<=n-1;i++)
                {
                  printf("%f   ",arr[i]);
                }
                printf("\n\nDo You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }
      case 3: {
                printf("Enter the Size of Array (Positive only): ");
                scanf("%d",&Size);
                do
                {
                  printf("Enter how much Elements You want to Store in the Array: ");
                  scanf("%d",&n);
                  if(n<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array: \n\n");
                  }
                  else if(n>Size)
                  {
                    printf("\nYou can only Store maximum of %d Element in the Array: \n\n",Size);
                  }
                }while(n<=0||n>Size);
                char arr[Size];
                printf("\nEnter the Array Elements (Character only): \n\n");
                for(int i=0;i<=n-1;i++)
                {
                  printf("Enter the Array Element %d: ",i+1);
                  scanf(" %c",&arr[i]);
                }
                printf("\nThe Array Elements are: ");
                for(int i=0;i<=n-1;i++)
                {
                  printf("%c   ",arr[i]);
                }
                printf("\n\nDo You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }
      default: printf("Enter a valid Choice for type of Data\n\n");
   }
  }while(Choice);
  getch();
}

// O/p 1: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character: 
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 1
//        
//        Enter the Size of Array (Positive only): 10
//        Enter how much Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element 1: 1
//        Enter the Array Element 2: 2
//        Enter the Array Element 3: 3
//        Enter the Array Element 4: 4
//        Enter the Array Element 5: 5
//        
//        The Array Elements are: 1   2   3   4   5
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//
//
// O/p 2: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character: 
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 2
//        
//        Enter the Size of Array (Positive only): 10
//        Enter how much Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Float only):
//        
//        Enter the Array Element 1: 1.5
//        Enter the Array Element 2: 2.5
//        Enter the Array Element 3: 3.2
//        Enter the Array Element 4: 4.6
//        Enter the Array Element 5: 5.0
//        
//        The Array Elements are: 1.500000   2.500000   3.200000   4.600000   5.000000
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//               
//
//
// O/p 3: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character: 
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 3
//        
//        Enter the Size of Array (Positive only): 10
//        Enter how much Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Character only):
//        
//        Enter the Array Element 1: A
//        Enter the Array Element 2: B
//        Enter the Array Element 3: c
//        Enter the Array Element 4: d
//        Enter the Array Element 5: E
//        
//        The Array Elements are: A   B   c   d   E
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//
//
// O/p 4: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character: 
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 1
//        
//        Enter the Size of Array (Positive only): 10
//        Enter how much Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 11
//        
//        You can only Store maximum of 10 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: //and so on til the user enters a valid no.
//
// O/p 5: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character: 
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 1
//        
//        Enter the Size of Array (Positive only): 10
//        Enter how much Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 11
//        
//        You can only Store maximum of 10 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: //and so on til the user enters a valid no.
//
// O/p 6: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character: 
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 1
//        
//        Enter the Size of Array (Positive only): 10
//        Enter how much Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 11
//        
//        You can only Store maximum of 10 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: //and so on til the user enters a valid no.
//
// O/p 7: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 4
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character:
//
// O/p 8: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 4
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 1
//        
//        Enter the Size of Array (Positive only): 10
//        Enter how much Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 11
//        
//        You can only Store maximum of 10 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element 1: -2
//        Enter the Array Element 2: -1
//        Enter the Array Element 3: 0
//        Enter the Array Element 4: 1
//        Enter the Array Element 5: 2
//        
//        The Array Elements are: -2   -1   0   1   2
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 1
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 4
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 2
//        
//        Enter the Size of Array (Positive only): 10
//        Enter how much Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 11
//        
//        You can only Store maximum of 10 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Float only):
//        
//        Enter the Array Element 1: -1.5
//        Enter the Array Element 2: 0
//        Enter the Array Element 3: 2
//        Enter the Array Element 4: 2.5
//        Enter the Array Element 5: 3.2
//        
//        The Array Elements are: -1.500000   0.000000   2.000000   2.500000   3.200000
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 1
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 4
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 3
//        
//        Enter the Size of Array (Positive only): 10
//        Enter how much Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 11
//        
//        You can only Store maximum of 10 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Character only):
//        
//        Enter the Array Element 1: A  
//        Enter the Array Element 2: B
//        Enter the Array Element 3: c
//        Enter the Array Element 4: d
//        Enter the Array Element 5: E
//        
//        The Array Elements are: A   B   c   d   E
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
*/

/*//TODO
//Q.12 (ii) Write a Program to Create a 1-D Array and Print its Elements in Reverse Order

#include <stdio.h>
#include <conio.h>
void main()
{
  int n,Size,Datatype,Choice;
  printf("Enter what type of Data You want to Store in the Array: \n");
  printf("It could be Integer, Float(Point Values), Character: \n");
  do
  {
    printf("Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: ");
    scanf("%d",&Datatype);
    printf("\n");
    switch(Datatype)
    {
      case 1: {
                printf("Enter the Size of Array: ");
                scanf("%d",&Size);
                do
                {
                  printf("Enter how much Elements You want to Store in the Array: ");
                  scanf("%d",&n);
                  if(n<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array: \n\n");
                  }
                  else if(n>Size)
                  {
                    printf("\nYou can only Store maximum of %d Element in the Array: \n\n",Size);
                  }
                }while(n<=0||n>Size);
                int arr[Size];
                printf("\nEnter the Array Elements (Integers only): \n\n");
                for(int i=0;i<=n-1;i++)
                {
                  printf("Enter the Array Element %d: ",i+1);
                  scanf("%d",&arr[i]);
                }
                printf("\nThe Array Elements are: ");
                for(int i=n-1;i>=0;i--)
                {
                  printf("%d   ",arr[i]);
                }
                printf("\n\nDo You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }
      case 2: {
                printf("Enter the Size of Array: ");
                scanf("%d",&Size);
                do
                {
                  printf("Enter how much Elements You want to Store in the Array: ");
                  scanf("%d",&n);
                  if(n<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array: \n\n");
                  }
                  else if(n>Size)
                  {
                    printf("\nYou can only Store maximum of %d Element in the Array: \n\n",Size);
                  }
                }while(n<=0||n>Size);
                float arr[Size];
                printf("\nEnter the Array Elements (Float only): \n\n");
                for(int i=0;i<=n-1;i++)
                {
                  printf("Enter the Array Element %d: ",i+1);
                  scanf("%f",&arr[i]);
                }
                printf("\nThe Array Elements are: ");
                for(int i=n-1;i>=0;i--)
                {
                  printf("%f   ",arr[i]);
                }
                printf("\n\nDo You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }
      case 3: {
                printf("Enter the Size of Array: ");
                scanf("%d",&Size);
                do
                {
                  printf("Enter how much Elements You want to Store in the Array: ");
                  scanf("%d",&n);
                  if(n<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array: \n\n");
                  }
                  else if(n>Size)
                  {
                    printf("\nYou can only Store maximum of %d Element in the Array: \n\n",Size);
                  }
                }while(n<=0||n>Size);
                char arr[Size];
                printf("\nEnter the Array Elements: \n\n");
                for(int i=0;i<=n-1;i++)
                {
                  printf("Enter the Array Element %d: ",i+1);
                  scanf(" %c",&arr[i]);
                }
                printf("\nThe Array Elements are: ");
                for(int i=n-1;i>=0;i--)
                {
                  printf("%c   ",arr[i]);
                }
                printf("\n\nDo You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }
      default: printf("Enter a valid Choice for type of Data\n\n");
   }
  }while(Choice);
  getch();
}

// O/p 1: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character: 
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 1
//        
//        Enter the Size of Array: 10
//        Enter how much Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element 1: 1
//        Enter the Array Element 2: 2
//        Enter the Array Element 3: 3
//        Enter the Array Element 4: 4
//        Enter the Array Element 5: 5
//        
//        The Array Elements are: 5   4   3   2   1
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//
//
// O/p 2: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character: 
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 2
//        
//        Enter the Size of Array: 10
//        Enter how much Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Float only):
//        
//        Enter the Array Element 1: 1.5
//        Enter the Array Element 2: 2.5
//        Enter the Array Element 3: 3.2
//        Enter the Array Element 4: 4.6
//        Enter the Array Element 5: 5.0
//        
//        The Array Elements are: 5.000000   4.600000   3.200000   2.500000   1.500000
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//               
//
//
// O/p 3: It could be Integer, Float(Point Values), Character: 
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 3
//        
//        Enter the Size of Array: 10
//        Enter how much Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements:
//        
//        Enter the Array Element 1: V
//        Enter the Array Element 2: A
//        Enter the Array Element 3: S
//        Enter the Array Element 4: L
//        Enter the Array Element 5: M
//        
//        The Array Elements are: E   d   c   B   A
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//
//
// O/p 4: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character: 
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 1
//        
//        Enter the Size of Array (Positive only): 10
//        Enter how much Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 11
//        
//        You can only Store maximum of 10 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: //and so on til the user enters a valid no.
//
// O/p 5: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character: 
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 1
//        
//        Enter the Size of Array (Positive only): 10
//        Enter how much Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 11
//        
//        You can only Store maximum of 10 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: //and so on til the user enters a valid no.
//
// O/p 6: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character: 
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 1
//        
//        Enter the Size of Array (Positive only): 10
//        Enter how much Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 11
//        
//        You can only Store maximum of 10 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: //and so on til the user enters a valid no.
//
// O/p 7: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 4
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character:
//
// O/p 8: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 4
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 1
//        
//        Enter the Size of Array: 10
//        Enter how much Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 11
//        
//        You can only Store maximum of 10 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element 1: -2
//        Enter the Array Element 2: -1
//        Enter the Array Element 3: 0
//        Enter the Array Element 4: 1
//        Enter the Array Element 5: 2
//        
//        The Array Elements are: 2   1   0   -1   -2
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 1
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 4
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 2
//        
//        Enter the Size of Array: 10
//        Enter how much Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 11
//        
//        You can only Store maximum of 10 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Float only):
//        
//        Enter the Array Element 1: -1.5
//        Enter the Array Element 2: 0
//        Enter the Array Element 3: 2
//        Enter the Array Element 4: 2.5
//        Enter the Array Element 5: 3.2
//        
//        The Array Elements are: 3.200000   2.500000   2.000000   0.000000   -1.500000
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 1
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 4
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 3
//        
//        Enter the Size of Array: 10
//        Enter how much Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 11
//        
//        You can only Store maximum of 10 Element in the Array:
//        
//        Enter how much Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements:
//        
//        Enter the Array Element 1: A
//        Enter the Array Element 2: B
//        Enter the Array Element 3: c
//        Enter the Array Element 4: d
//        Enter the Array Element 5: E
//        
//        The Array Elements are: E   d   c   B   A
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
*/

/*//TODO
//Q.13 Write a Program to read Marks of 5 Students and Calculate Sum and Average using Arrays

#include <stdio.h>
#include <conio.h>
void main()
{
  float Marks[5],choice;
  do
  {
    float Sum=0,Average=0;
    printf("Enter the Marks (Between 0-100): \n\n");
    for(int i=0;i<5;i++)
    {
      printf("Enter the Marks of Student %d: ",i+1);
      scanf("%f",&Marks[i]);
      if(Marks[i]<0||Marks[i]>100)
      {
        printf("\nInvalid Marks\n\n");
        i--;
      }
    }
    printf("\nThe Marks of Students are: ");
    for(int i=0;i<5;i++)
    {
      printf("%f   ",Marks[i]);
    }
    printf("\n\n");
    for(int i=0;i<5;i++)
    {
      Sum+=Marks[i];
    }
    printf("Sum is %f\n",Sum);
    Average=Sum/5;
    printf("Average is %f",Average);
    printf("\n\nDo You want to Continue? (0 for No and 1 for Yes): ");
    scanf("%d",&choice);
    printf("\n");
  }while(choice);
  getch();
}

// O/p 1: Enter the Marks (Between 0-100): 
//        
//        Enter the Marks of Student 1: 28.2
//        Enter the Marks of Student 2: 32.6
//        Enter the Marks of Student 3: 47.9
//        Enter the Marks of Student 4: 75.2
//        Enter the Marks of Student 5: 62.3
//        
//        The Marks of Students are: 28.200001   32.599998   47.900002   75.199997   62.299999
//        
//        Sum is 246.199997
//        Average is 49.239998
//        
//        Do You want to Continue? (0 for No and 1 for Yes): 0
//        
//        
//
// O/p 2: Enter the Marks (Between 0-100): 
//        
//        Enter the Marks of Student 1: -5
//        
//        Invalid Marks
//        
//        Enter the Marks of Student 1: 5 
//        Enter the Marks of Student 2: 102
//        
//        Invalid Marks
//        
//        Enter the Marks of Student 2: 98
//        Enter the Marks of Student 3: -2
//        
//        Invalid Marks
//        
//        Enter the Marks of Student 3: //and so on till user enter valid marks
//
// O/p 3: Enter the Marks (Between 0-100): 
//        
//        Enter the Marks of Student 1: -28.2
//        
//        Invalid Marks
//        
//        Enter the Marks of Student 1: 28.2
//        Enter the Marks of Student 2: -32.6
//        
//        Invalid Marks
//        
//        Enter the Marks of Student 2: 32.6
//        Enter the Marks of Student 3: -47.9
//        
//        Invalid Marks
//        
//        Enter the Marks of Student 3: 47.9
//        Enter the Marks of Student 4: -75.2
//        
//        Invalid Marks
//        
//        Enter the Marks of Student 4: 75.2
//        Enter the Marks of Student 5: -62.3
//        
//        Invalid Marks
//        
//        Enter the Marks of Student 5: 62.3
//        
//        The Marks of Students are: 28.200001   32.599998   47.900002   75.199997   62.299999
//        
//        Sum is 246.199997
//        Average is 49.239998
//        
//        Do You want to Continue? (0 for No and 1 for Yes): 1
//        
//        Enter the Marks (Between 0-100):
//        
//        Enter the Marks of Student 1: -54
//        
//        Invalid Marks
//        
//        Enter the Marks of Student 1: 54
//        Enter the Marks of Student 2: -57
//        
//        Invalid Marks
//        
//        Enter the Marks of Student 2: 57
//        Enter the Marks of Student 3: -75.2
//        
//        Invalid Marks
//        
//        Enter the Marks of Student 3: 75.2
//        Enter the Marks of Student 4: 162.2
//        
//        Invalid Marks
//        
//        Enter the Marks of Student 4: 62.2
//        Enter the Marks of Student 5: 180
//        
//        Invalid Marks
//        
//        Enter the Marks of Student 5: 80
//        
//        The Marks of Students are: 54.000000   57.000000   75.199997   62.200001   80.000000
//        
//        Sum is 328.399994
//        Average is 65.680000
//        
//        Do You want to Continue? (0 for No and 1 for Yes): 0
//        
//        
*/

/*//TODO
//Q.14 Write a Program to read an Array of 10 Integers and Count total Number of Even and Odd Elements

#include <stdio.h>
#include <conio.h>
void main()
{
  int arr[10],choice;
  do
  {
    int Odd=0,Even=0;
    printf("Enter the Integers: \n\n");
    for(int i=0;i<10;i++)
    {
      printf("Enter the Integer Number %d: ",i+1);
      scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++)
    {
      if(arr[i]!=0&&arr[i]%2==0)
      {
        Even++;
      }
      else if(arr[i]!=0)
      {
        Odd++;
      }
    }
    printf("Number of Even Numbers is %d\n",Even);
    printf("Number of Odd Numbers is %d\n",Odd);
    printf("\nDo You want to Continue? (0 for No and 1 for Yes): ");
    scanf("%d",&choice);
    printf("\n");
  }while(choice);
  getch();
}

// O/p 1: Enter the Integers: 
//        
//        Enter the Integer Number 1: 2
//        Enter the Integer Number 2: 4
//        Enter the Integer Number 3: 6
//        Enter the Integer Number 4: 8
//        Enter the Integer Number 5: 0
//        Enter the Integer Number 6: 0
//        Enter the Integer Number 7: -8
//        Enter the Integer Number 8: -6
//        Enter the Integer Number 9: -4
//        Enter the Integer Number 10: -2
//        
//        Number of Even Numbers is 8
//        Number of Odd Numbers is 0
//        
//        Do You want to Continue? (0 for No and 1 for Yes): 0
//        
//        
//
// O/p 2: Enter the Integers: 
//        
//        Enter the Integer Number 1: 1
//        Enter the Integer Number 2: 3
//        Enter the Integer Number 3: 5
//        Enter the Integer Number 4: 7
//        Enter the Integer Number 5: 9
//        Enter the Integer Number 6: 0
//        Enter the Integer Number 7: 0
//        Enter the Integer Number 8: -9
//        Enter the Integer Number 9: -7
//        Enter the Integer Number 10: -5
//        
//        Number of Even Numbers is 0
//        Number of Odd Numbers is 8
//        
//        Do You want to Continue? (0 for No and 1 for Yes): 0
//        
//        
// 
// O/p 3: Enter the Integers: 
//        
//        Enter the Integer Number 1: 2
//        Enter the Integer Number 2: 4
//        Enter the Integer Number 3: 6
//        Enter the Integer Number 4: 8
//        Enter the Integer Number 5: 0
//        Enter the Integer Number 6: 0
//        Enter the Integer Number 7: -8
//        Enter the Integer Number 8: -6
//        Enter the Integer Number 9: -4
//        Enter the Integer Number 10: -2
//        
//        Number of Even Numbers is 8
//        Number of Odd Numbers is 0
//        
//        Do You want to Continue? (0 for No and 1 for Yes): 1
//        
//        Enter the Integers:
//        
//        Enter the Integer Number 1: 1
//        Enter the Integer Number 2: 3
//        Enter the Integer Number 3: 5
//        Enter the Integer Number 4: 7
//        Enter the Integer Number 5: 9
//        Enter the Integer Number 6: 0
//        Enter the Integer Number 7: 0
//        Enter the Integer Number 8: -9
//        Enter the Integer Number 9: -7
//        Enter the Integer Number 10: -5
//        
//        Number of Even Numbers is 0
//        Number of Odd Numbers is 8
//        
//        Do You want to Continue? (0 for No and 1 for Yes): 1
//        
//        Enter the Integers:
//        
//        Enter the Integer Number 1: 1
//        Enter the Integer Number 2: 2
//        Enter the Integer Number 3: -3
//        Enter the Integer Number 4: -4
//        Enter the Integer Number 5: 5
//        Enter the Integer Number 6: 6
//        Enter the Integer Number 7: -7
//        Enter the Integer Number 8: -8
//        Enter the Integer Number 9: 9
//        Enter the Integer Number 10: 0
//        
//        Number of Even Numbers is 4
//        Number of Odd Numbers is 5
//        
//        Do You want to Continue? (0 for No and 1 for Yes): 0
//        
//        
*/

/*//TODO
//Q.15 Write a Program to read two Arrays of Size 5 and Store the Sum of Elements of these Arrays into a third Array

#include <stdio.h>
#include <conio.h>
int main()
{
  int n,Size,Datatype,Choice;
  printf("Enter what type of Data You want to Store in the Array: \n");
  printf("It could be Integer, Float(Point Values): \n");
  do
  {
    printf("Enter 1 for Integer, 2 for Floating Point Values: ");
    scanf("%d",&Datatype);
    printf("\n");
    switch(Datatype)
    {
      case 1: {
                int arr_1[5],arr_2[5],arr_3[5];
                printf("Enter the Elements of Array 1 (Integers only): \n\n");
                for(int i=0;i<5;i++)
                {
                  printf("Enter the Array Element %d: ",i+1);
                  scanf("%d",&arr_1[i]);
                }
                printf("\nThe Elements of Array 1 are: ");
                for(int i=0;i<5;i++)
                {
                  printf("%d   ",arr_1[i]);
                }
                printf("\n\nEnter the Elements of Array 2 (Integers only): \n\n");
                for(int i=0;i<5;i++)
                {
                  printf("Enter the Array Element %d: ",i+1);
                  scanf("%d",&arr_2[i]);
                }
                printf("\nThe Elements of Array 2 are: ");
                for(int i=0;i<5;i++)
                {
                  printf("%d   ",arr_2[i]);
                }
                printf("\n\nThe Sum of Elements of Array 1 and Array 2 Stored in Array 3 are: ");
                for(int i=0;i<5;i++)
                {
                  arr_3[i]=arr_1[i]+arr_2[i];
                  printf("%d   ",arr_3[i]);
                }
                printf("\n\nDo You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }
      case 2: { 
                float arr_1[5],arr_2[5],arr_3[5];
                printf("Enter the Array Elements of Array 1 (Float only): \n\n");
                for(int i=0;i<5;i++)
                {
                  printf("Enter the Array Element %d: ",i+1);
                  scanf("%f",&arr_1[i]);
                }
                printf("\nThe Array Elements are: ");
                for(int i=0;i<5;i++)
                {
                  printf("%f   ",arr_1[i]);
                }
                printf("\n\nEnter the Array Elements of Array 2 (Float only): \n\n");
                for(int i=0;i<5;i++)
                {
                  printf("Enter the Array Element %d: ",i+1);
                  scanf("%f",&arr_2[i]);
                }
                printf("\nThe Array Elements are: ");
                for(int i=0;i<5;i++)
                {
                  printf("%f   ",arr_2[i]);
                }
                printf("\n\nThe Sum of Elements of Array 1 and Array 2 Stored in Array 3 are: ");
                for(int i=0;i<5;i++)
                {
                  arr_3[i]=arr_1[i]+arr_2[i];
                  printf("%f   ",arr_3[i]);
                }
                printf("\n\nDo You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }
      default: printf("Enter a valid Choice for type of Data\n\n");
   }
  }while(Choice);
  getch();
}

// O/p 1: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values):
//        Enter 1 for Integer, 2 for Floating Point Values: 1
//        
//        Enter the Elements of Array 1 (Integers only):
//        
//        Enter the Array Element 1: 1
//        Enter the Array Element 2: 2
//        Enter the Array Element 3: 3
//        Enter the Array Element 4: 4
//        Enter the Array Element 5: 5
//        
//        The Elements of Array 1 are: 1   2   3   4   5
//        
//        Enter the Elements of Array 2 (Integers only):
//        
//        Enter the Array Element 1: -1
//        Enter the Array Element 2: 0
//        Enter the Array Element 3: 1
//        Enter the Array Element 4: 2
//        Enter the Array Element 5: 3
//        
//        The Elements of Array 2 are: -1   0   1   2   3
//        
//        The Sum of Elements of Array 1 and Array 2 Stored in Array 3 are: 0   2   4   6   8
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
//
// O/p 2: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values):
//        Enter 1 for Integer, 2 for Floating Point Values: 2
//        
//        Enter the Array Elements of Array 1 (Float only):
//        
//        Enter the Array Element 1: 1.5
//        Enter the Array Element 2: 2.5
//        Enter the Array Element 3: 3.5
//        Enter the Array Element 4: 4.5
//        Enter the Array Element 5: 5.3
//        
//        The Array Elements are: 1.500000   2.500000   3.500000   4.500000   5.300000
//        
//        Enter the Array Elements of Array 2 (Float only):
//        
//        Enter the Array Element 1: -1.5
//        Enter the Array Element 2: 0
//        Enter the Array Element 3: 2.7
//        Enter the Array Element 4: 3.4
//        Enter the Array Element 5: 4.7
//        
//        The Array Elements are: -1.500000   0.000000   2.700000   3.400000   4.700000
//        
//        The Sum of Elements of Array 1 and Array 2 Stored in Array 3 are: 0.000000   2.500000   6.200000   7.900000   10.000000
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
//
// O/p 3: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values): 
//        Enter 1 for Integer, 2 for Floating Point Values: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 3
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: //and so on till user enter a valid choice for type of
//
// O/p 4: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values):
//        Enter 1 for Integer, 2 for Floating Point Values: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 3
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 1
//        
//        Enter the Elements of Array 1 (Integers only):
//        
//        Enter the Array Element 1: 1
//        Enter the Array Element 2: 2
//        Enter the Array Element 3: 3
//        Enter the Array Element 4: 4
//        Enter the Array Element 5: 5
//        
//        The Elements of Array 1 are: 1   2   3   4   5
//        
//        Enter the Elements of Array 2 (Integers only):
//        
//        Enter the Array Element 1: -1
//        Enter the Array Element 2: 0
//        Enter the Array Element 3: 1
//        Enter the Array Element 4: 2
//        Enter the Array Element 5: 3
//        
//        The Elements of Array 2 are: -1   0   1   2   3
//        
//        The Sum of Elements of Array 1 and Array 2 Stored in Array 3 are: 0   2   4   6   8
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 1
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 3
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 2
//        
//        Enter the Array Elements of Array 1 (Float only):
//        
//        Enter the Array Element 1: 1.5
//        Enter the Array Element 2: 2.5
//        Enter the Array Element 3: 3.5
//        Enter the Array Element 4: 4.5
//        Enter the Array Element 5: 5.3
//        
//        The Array Elements are: 1.500000   2.500000   3.500000   4.500000   5.300000
//        
//        Enter the Array Elements of Array 2 (Float only):
//        
//        Enter the Array Element 1: -1.5
//        Enter the Array Element 2: 0
//        Enter the Array Element 3: 2.7
//        Enter the Array Element 4: 3.4
//        Enter the Array Element 5: 4.7
//        
//        The Array Elements are: -1.500000   0.000000   2.700000   3.400000   4.700000
//        
//        The Sum of Elements of Array 1 and Array 2 Stored in Array 3 are: 0.000000   2.500000   6.200000   7.900000   10.000000
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
*/

/*
#include <stdio.h>
int main()
{
  int marks[3][5];
  int a[4][7];
  float b[2][7];
  printf("Size of marks=%d a=%d b=%d",sizeof(marks),sizeof(a),sizeof(b));
}

// O/p: Size of marks=60 a=112 b=56
*/

/*
#include <stdio.h>
int main()
{
  int a[2][3]={{0,0,0},{1,1,1}};
  int b[2][3]={
                {0,0,0},
                {1,1,1}
              };
  int c[][3]={{0,0,0},{1,1,1}};
  int d[][3]={
               {0,0,0},
               {1,1,1}
             };
  int e[2][3]={0};
  int f[2][3]={0,0,1,1};
  int g[2][3]={{0,0},{1,1}};
  int h[][3]={0};
  int i[][3]={1,1,1};
  int j[][3]={1,1,1,2};
  int k[2][3]={{0,0,0}};
  printf("%d %d %d %d %d %d %d %d %d\n",a[0][0],a[0][1],a[0][2],a[1][0],a[1][1],a[1][2],a[2][0],a[2][1],a[2][2]);
  printf("%d %d %d %d %d %d %d %d %d\n",b[0][0],b[0][1],b[0][2],b[1][0],b[1][1],b[1][2],b[2][0],b[2][1],b[2][2]);
  printf("%d %d %d %d %d %d %d %d %d\n",c[0][0],c[0][1],c[0][2],c[1][0],c[1][1],c[1][2],c[2][0],c[2][1],c[2][2]);
  printf("%d %d %d %d %d %d %d %d %d\n",d[0][0],d[0][1],d[0][2],d[1][0],d[1][1],d[1][2],d[2][0],d[2][1],d[2][2]);
  printf("%d %d %d %d %d %d %d %d %d\n",e[0][0],e[0][1],e[0][2],e[1][0],e[1][1],e[1][2],e[2][0],e[2][1],e[2][2]);
  printf("%d %d %d %d %d %d %d %d %d\n",f[0][0],f[0][1],f[0][2],f[1][0],f[1][1],f[1][2],f[2][0],f[2][1],f[2][2]);
  printf("%d %d %d %d %d %d %d %d %d\n",g[0][0],g[0][1],g[0][2],g[1][0],g[1][1],g[1][2],g[2][0],g[2][1],g[2][2]);
  printf("%d %d %d %d %d %d %d %d %d\n",h[0][0],h[0][1],h[0][2],h[1][0],h[1][1],h[1][2],h[2][0],h[2][1],h[2][2]);
  printf("%d %d %d %d %d %d %d %d %d\n",i[0][0],i[0][1],i[0][2],i[1][0],i[1][1],i[1][2],i[2][0],i[2][1],i[2][2]);
  printf("%d %d %d %d %d %d %d %d %d\n",j[0][0],j[0][1],j[0][2],j[1][0],j[1][1],j[1][2],j[2][0],j[2][1],j[2][2]);
  printf("%d %d %d %d %d %d %d %d %d\n",k[0][0],k[0][1],k[0][2],k[1][0],k[1][1],k[1][2],k[2][0],k[2][1],k[2][2]);
}

// O/p: 0 0 0 1 1 1 4202736 0 3547136
//      0 0 0 1 1 1 0 0 0
//      0 0 0 1 1 1 0 0 0
//      0 0 0 1 1 1 0 0 0
//      0 0 0 0 0 0 0 0 0
//      0 0 1 1 0 0 0 0 0
//      0 0 0 1 1 0 0 0 1
//      0 0 0 0 0 0 1 1 0
//      1 1 1 0 0 0 0 0 0
//      1 1 1 2 0 0 1 1 1
//      0 0 0 0 0 0 1 1 1
*/

/*
#include <stdio.h>
int main()
{
  int a[2][3];
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("Enter Element %d,%d: ",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("Element %d,%d: %d ",i,j,a[i][j]);
    }
    printf("\n");
  }
}

// O/p: Enter Element 0,0: 1
//      Enter Element 0,1: 2
//      Enter Element 0,2: 3
//      Enter Element 1,0: 4
//      Enter Element 1,1: 5
//      Enter Element 1,2: 6
//      Element 0,0: 1 Element 0,1: 2 Element 0,2: 3 
//      Element 1,0: 4 Element 1,1: 5 Element 1,2: 6
*/

/*...........................................................................................

....................................Questions................................................

...........................................................................................*/

/*//TODO
//Q.16 Write a Program to print 2D Array(Matrix) and Print the Sum of all Elements

#include <stdio.h>
#include <conio.h>
int main()
{
  int m,n,Row_Size,Column_Size,Datatype,Choice;
  printf("Enter what type of Data You want to Store in the Array: \n");
  printf("It could be Integer, Float(Point Values): \n");
  do
  {
    printf("Enter 1 for Integer, 2 for Floating Point Values: ");
    scanf("%d",&Datatype);
    printf("\n");
    switch(Datatype)
    {
      case 1: {
                int Sum=0;
                printf("Enter the Row Size of Array (Positive only): ");
                scanf("%d",&Row_Size);
                printf("Enter the Column Size of Array (Positive only): ");
                scanf("%d",&Column_Size);
                printf("\n");
                do
                {
                  printf("Enter how much Row Elements You want to Store in the Array: ");
                  scanf("%d",&m);
                  if(m<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(m>Row_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Row_Size);
                  }
                }while(m<=0||m>Row_Size);
                do
                {
                  printf("Enter how much Column Elements You want to Store in the Array: ");
                  scanf("%d",&n);
                  if(n<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(n>Column_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Column_Size);
                  }
                }while(n<=0||n>Column_Size);
                int arr[m][n];
                printf("\nEnter the Array Elements (Integers only): \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("Enter the Array Element at Row %d and Column %d: ",i+1,j+1);
                    scanf("%d",&arr[i][j]);
                  }
                  printf("\n");
                }
                printf("\nThe Array Elements are: \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("%d\t",arr[i][j]);
                    Sum+=arr[i][j];
                  }
                  printf("\n\n\n");
                }
                printf("Sum of all Elements is: %d",Sum);
                printf("\n\nDo You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }
      case 2: {
                float Sum=0;
                printf("Enter the Row Size of Array (Positive only): ");
                scanf("%d",&Row_Size);
                printf("Enter the Column Size of Array (Positive only): ");
                scanf("%d",&Column_Size);
                printf("\n");
                do
                {
                  printf("Enter how much Row Elements You want to Store in the Array: ");
                  scanf("%d",&m);
                  if(m<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(m>Row_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Row_Size);
                  }
                }while(m<=0||m>Row_Size);
                do
                {
                  printf("Enter how much Column Elements You want to Store in the Array: ");
                  scanf("%d",&n);
                  if(n<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(n>Column_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Column_Size);
                  }
                }while(n<=0||n>Column_Size);
                float arr[m][n];
                printf("\nEnter the Array Elements (Float only): \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("Enter the Array Element at Row %d and Column %d: ",i+1,j+1);
                    scanf("%f",&arr[i][j]);
                  }
                  printf("\n");
                }
                printf("\nThe Array Elements are: \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("%f\t",arr[i][j]);
                    Sum+=arr[i][j];
                  }
                  printf("\n\n\n");
                }
                printf("Sum of all Elements is: %f",Sum);
                printf("\n\nDo You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }
      default: printf("Enter a valid Choice for type of Data\n\n");
   }
  }while(Choice);
  getch();
}

// O/p 1: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values):
//        Enter 1 for Integer, 2 for Floating Point Values: 1
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1
//        Enter the Array Element at Row 1 and Column 2: 2
//        Enter the Array Element at Row 1 and Column 3: 3
//        
//        Enter the Array Element at Row 2 and Column 1: 4
//        Enter the Array Element at Row 2 and Column 2: 5
//        Enter the Array Element at Row 2 and Column 3: 6
//        
//        
//        The Array Elements are:
//        
//        1       2       3
//        
//        
//        4       5       6
//        
//
//        Sum of all Elements is: 21
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
//
// O/p 2: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values): 
//        Enter 1 for Integer, 2 for Floating Point Values: 2
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Array Elements (Float only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1.1
//        Enter the Array Element at Row 1 and Column 2: 2.2
//        Enter the Array Element at Row 1 and Column 3: 3.3
//        
//        Enter the Array Element at Row 2 and Column 1: 4.4
//        Enter the Array Element at Row 2 and Column 2: 5.5
//        Enter the Array Element at Row 2 and Column 3: 6.6
//        
//        
//        The Array Elements are:
//        
//        1.100000        2.200000        3.300000
//        
//        
//        4.400000        5.500000        6.600000
//        
//
//        Sum of all Elements is: 23.100000
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
//
// O/p 3: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values):
//        Enter 1 for Integer, 2 for Floating Point Values: 1
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 5 //and ao on till user enter valid no. of row elements
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: //and so on till user enter valid no. of column elements
//        
// O/p 4: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values):
//        Enter 1 for Integer, 2 for Floating Point Values: 2
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 5 //and ao on till user enter valid no. of row elements
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: //and so on till user enter valid no. of column elements
//        
// O/p 5: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values):
//        Enter 1 for Integer, 2 for Floating Point Values: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 3
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: //and so on till user enter valid choice for type of data
//        
// O/p 6: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values): 
//        Enter 1 for Integer, 2 for Floating Point Values: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 3
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 1
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1
//        Enter the Array Element at Row 1 and Column 2: 2
//        Enter the Array Element at Row 1 and Column 3: 3
//        
//        Enter the Array Element at Row 2 and Column 1: 4
//        Enter the Array Element at Row 2 and Column 2: 5
//        Enter the Array Element at Row 2 and Column 3: 6
//        
//        
//        The Array Elements are:
//        
//        1       2       3
//        
//        
//        4       5       6
//
//        
//        Sum of all Elements is: 21
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 1
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 3
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 2
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1.1
//        Enter the Array Element at Row 1 and Column 2: 2.2
//        Enter the Array Element at Row 1 and Column 3: 3.3
//        
//        Enter the Array Element at Row 2 and Column 1: 4.4
//        Enter the Array Element at Row 2 and Column 2: 5.5
//        Enter the Array Element at Row 2 and Column 3: 6.6
//        
//        
//        The Array Elements are:
//        
//        1.100000        2.200000        3.300000
//        
//        
//        4.400000        5.500000        6.600000
//
//        
//        Sum of all Elements is: 23.100000
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//
*/

/*//TODO
//Q.17 (i) Write a Program to Print Transpose of a Matrix

#include <stdio.h>
#include <conio.h>
int main()
{
  int m,n,Row_Size,Column_Size,Datatype,Choice;
  printf("Enter what type of Data You want to Store in the Array: \n");
  printf("It could be Integer, Float(Point Values), Character: \n");
  do
  {
    printf("Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: ");
    scanf("%d",&Datatype);
    printf("\n");
    switch(Datatype)
    {
      case 1: {
                printf("Enter the Row Size of Array (Positive only): ");
                scanf("%d",&Row_Size);
                printf("Enter the Column Size of Array (Positive only): ");
                scanf("%d",&Column_Size);
                printf("\n");
                do
                {
                  printf("Enter how much Row Elements You want to Store in the Array: ");
                  scanf("%d",&m);
                  if(m<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(m>Row_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Row_Size);
                  }
                }while(m<=0||m>Row_Size);
                do
                {
                  printf("Enter how much Column Elements You want to Store in the Array: ");
                  scanf("%d",&n);
                  if(n<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(n>Column_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Column_Size);
                  }
                }while(n<=0||n>Column_Size);
                int arr[m][n];
                printf("\nEnter the Array Elements (Integers only): \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("Enter the Array Element at Row %d and Column %d: ",i+1,j+1);
                    scanf("%d",&arr[i][j]);
                  }
                  printf("\n");
                }
                printf("\nThe Array Elements are: \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("%d\t",arr[i][j]);
                  }
                  printf("\n\n\n");
                }
                printf("Transpose of the Matrix is: \n\n");
                for(int i=0;i<=n-1;i++)
                {
                  for(int j=0;j<=m-1;j++)
                  {
                    printf("%d\t",arr[j][i]);
                  }
                  printf("\n\n\n");
                }
                printf("Do You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }
      case 2: {
                printf("Enter the Row Size of Array (Positive only): ");
                scanf("%d",&Row_Size);
                printf("Enter the Column Size of Array (Positive only): ");
                scanf("%d",&Column_Size);
                printf("\n");
                do
                {
                  printf("Enter how much Row Elements You want to Store in the Array: ");
                  scanf("%d",&m);
                  if(m<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(m>Row_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Row_Size);
                  }
                }while(m<=0||m>Row_Size);
                do
                {
                  printf("Enter how much Column Elements You want to Store in the Array: ");
                  scanf("%d",&n);
                  if(n<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(n>Column_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Column_Size);
                  }
                }while(n<=0||n>Column_Size);
                float arr[m][n];
                printf("\nEnter the Array Elements (Float only): \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("Enter the Array Element at Row %d and Column %d: ",i+1,j+1);
                    scanf("%f",&arr[i][j]);
                  }
                  printf("\n");
                }
                printf("\nThe Array Elements are: \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("%f\t",arr[i][j]);
                  }
                  printf("\n\n\n");
                }
                printf("Transpose of the Matrix is: \n\n");
                for(int i=0;i<=n-1;i++)
                {
                  for(int j=0;j<=m-1;j++)
                  {
                    printf("%f\t",arr[j][i]);
                  }
                  printf("\n\n\n");
                }
                printf("Do You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }
      case 3: {
                printf("Enter the Row Size of Array (Positive only): ");
                scanf("%d",&Row_Size);
                printf("Enter the Column Size of Array (Positive only): ");
                scanf("%d",&Column_Size);
                printf("\n");
                do
                {
                  printf("Enter how much Row Elements You want to Store in the Array: ");
                  scanf("%d",&m);
                  if(m<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(m>Row_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Row_Size);
                  }
                }while(m<=0||m>Row_Size);
                do
                {
                  printf("Enter how much Column Elements You want to Store in the Array: ");
                  scanf("%d",&n);
                  if(n<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(n>Column_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Column_Size);
                  }
                }while(n<=0||n>Column_Size);
                char arr[m][n];
                printf("\nEnter the Array Elements (Character only): \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("Enter the Array Element at Row %d and Column %d: ",i+1,j+1);
                    scanf(" %c",&arr[i][j]);
                  }
                  printf("\n");
                }
                printf("\nThe Array Elements are: \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("%c\t",arr[i][j]);
                  }
                  printf("\n\n\n");
                }
                printf("Transpose of the Matrix is: \n\n");
                for(int i=0;i<=n-1;i++)
                {
                  for(int j=0;j<=m-1;j++)
                  {
                    printf("%c\t",arr[j][i]);
                  }
                  printf("\n\n\n");
                }
                printf("Do You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }        
      default: printf("Enter a valid Choice for type of Data\n\n");
   }
  }while(Choice);
  getch();
}

// O/p 1: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character: 
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 1
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1
//        Enter the Array Element at Row 1 and Column 2: 2
//        Enter the Array Element at Row 1 and Column 3: 3
//        
//        Enter the Array Element at Row 2 and Column 1: 4
//        Enter the Array Element at Row 2 and Column 2: 5
//        Enter the Array Element at Row 2 and Column 3: 6
//        
//        
//        The Array Elements are:
//        
//        1       2       3
//        
//        
//        4       5       6
//
//
//        Transpose of the Matrix is:
//        
//        1       4
//        
//        
//        2       5
//        
//        
//        3       6
//        
//
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
//
// O/p 2: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 2
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Array Elements (Float only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1.1
//        Enter the Array Element at Row 1 and Column 2: 2.2
//        Enter the Array Element at Row 1 and Column 3: 3.3
//        
//        Enter the Array Element at Row 2 and Column 1: 4.4
//        Enter the Array Element at Row 2 and Column 2: 5.5
//        Enter the Array Element at Row 2 and Column 3: 6.6
//        
//        
//        The Array Elements are:
//        
//        1.100000        2.200000        3.300000
//        
//        
//        4.400000        5.500000        6.600000
//        
//
//        Transpose of the Matrix is:
//        
//        1.100000        4.400000
//        
//        
//        2.200000        5.500000
//        
//        
//        3.300000        6.600000
//        
//
//        Do You want to Continue? (0 for No and 1 fo Yes): 0 
//        
//        
//
// O/p 3: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 3
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Array Elements (Character only):
//        
//        Enter the Array Element at Row 1 and Column 1: A
//        Enter the Array Element at Row 1 and Column 2: B
//        Enter the Array Element at Row 1 and Column 3: C
//        
//        Enter the Array Element at Row 2 and Column 1: D
//        Enter the Array Element at Row 2 and Column 2: E
//        Enter the Array Element at Row 2 and Column 3: F
//        
//        
//        The Array Elements are:
//        
//        A       B       C
//        
//        
//        D       E       F
//        
//
//        Transpose of the Matrix is:
//        
//        A       D
//        
//        
//        B       E
//        
//        
//        C       F
//        
//
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
//
// O/p 4: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 1
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 5 //and ao on till user enter valid no. of row elements
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: //and so on till user enter valid no. of column elements
//        
// O/p 5: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 2
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 5 //and ao on till user enter valid no. of row elements
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: //and so on till user enter valid no. of column elements
//        
// O/p 6: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 3
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 5 //and ao on till user enter valid no. of row elements
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: //and so on till user enter valid no. of column elements
//
// O/p 7: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 4
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: //and s on till user enter valid choice for type of data
//
// O/p 8: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 4
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 1
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1
//        Enter the Array Element at Row 1 and Column 2: 2
//        Enter the Array Element at Row 1 and Column 3: 3
//        
//        Enter the Array Element at Row 2 and Column 1: 4
//        Enter the Array Element at Row 2 and Column 2: 5
//        Enter the Array Element at Row 2 and Column 3: 6
//        
//        
//        The Array Elements are:
//        
//        1       2       3
//        
//        
//        4       5       6
//        
//
//        Transpose of the Matrix is:
//        
//        1       4
//        
//        
//        2       5
//        
//        
//        3       6
//        
//
//        Do You want to Continue? (0 for No and 1 fo Yes): 1
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 4
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 2
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Array Elements (Float only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1.1
//        Enter the Array Element at Row 1 and Column 2: 2.2
//        Enter the Array Element at Row 1 and Column 3: 3.3
//        
//        Enter the Array Element at Row 2 and Column 1: 4.4
//        Enter the Array Element at Row 2 and Column 2: 5.5
//        Enter the Array Element at Row 2 and Column 3: 6.6
//        
//        
//        The Array Elements are:
//        
//        1.100000        2.200000        3.300000
//        
//        
//        4.400000        5.500000        6.600000
//        
//
//        Transpose of the Matrix is:
//        
//        1.100000        4.400000
//        
//        
//        2.200000        5.500000
//        
//        
//        3.300000        6.600000
//        
//
//        Do You want to Continue? (0 for No and 1 fo Yes): 1
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 4
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 3
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Array Elements (Character only):
//        
//        Enter the Array Element at Row 1 and Column 1: A
//        Enter the Array Element at Row 1 and Column 2: B
//        Enter the Array Element at Row 1 and Column 3: C
//        
//        Enter the Array Element at Row 2 and Column 1: d
//        Enter the Array Element at Row 2 and Column 2: e
//        Enter the Array Element at Row 2 and Column 3: f
//        
//        
//        The Array Elements are:
//        
//        A       B       C
//        
//        
//        d       e       f
//        
//
//        Transpose of the Matrix is:
//        
//        A       d
//        
//        
//        B       e
//        
//        
//        C       f
//        
//
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
*/

/*//TODO
//Q.17 (ii) Write a Program to Print a Matrix and Store its Transpose in another Matrix and Print the Matrix

#include <stdio.h>
#include <conio.h>
int main()
{
  int m,n,Row_Size,Column_Size,Datatype,Choice;
  printf("Enter what type of Data You want to Store in the Array: \n");
  printf("It could be Integer, Float(Point Values), Character: \n");
  do
  {
    printf("Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: ");
    scanf("%d",&Datatype);
    printf("\n");
    switch(Datatype)
    {
      case 1: {
                printf("Enter the Row Size of Array (Positive only): ");
                scanf("%d",&Row_Size);
                printf("Enter the Column Size of Array (Positive only): ");
                scanf("%d",&Column_Size);
                printf("\n");
                do
                {
                  printf("Enter how much Row Elements You want to Store in the Array: ");
                  scanf("%d",&m);
                  if(m<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(m>Row_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Row_Size);
                  }
                }while(m<=0||m>Row_Size);
                do
                {
                  printf("Enter how much Column Elements You want to Store in the Array: ");
                  scanf("%d",&n);
                  if(n<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(n>Column_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Column_Size);
                  }
                }while(n<=0||n>Column_Size);
                int arr_1[m][n],arr_2[m][n];
                printf("\nEnter the Array Elements (Integers only): \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("Enter the Array Element at Row %d and Column %d: ",i+1,j+1);
                    scanf("%d",&arr_1[i][j]);
                  }
                  printf("\n");
                }
                printf("\nThe Array Elements are: \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("%d\t",arr_1[i][j]);
                  }
                  printf("\n\n\n");
                }
                printf("Transpose of the Matrix is: \n\n");
                for(int i=0;i<=n-1;i++)
                {
                  for(int j=0;j<=m-1;j++)
                  {
                    arr_2[i][j]=arr_1[j][i];
                    printf("%d\t",arr_2[i][j]);
                  }
                  printf("\n\n\n");
                }
                printf("Do You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }
      case 2: {
                printf("Enter the Row Size of Array (Positive only): ");
                scanf("%d",&Row_Size);
                printf("Enter the Column Size of Array (Positive only): ");
                scanf("%d",&Column_Size);
                printf("\n");
                do
                {
                  printf("Enter how much Row Elements You want to Store in the Array: ");
                  scanf("%d",&m);
                  if(m<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(m>Row_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Row_Size);
                  }
                }while(m<=0||m>Row_Size);
                do
                {
                  printf("Enter how much Column Elements You want to Store in the Array: ");
                  scanf("%d",&n);
                  if(n<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(n>Column_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Column_Size);
                  }
                }while(n<=0||n>Column_Size);
                float arr[m][n];
                printf("\nEnter the Array Elements (Float only): \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("Enter the Array Element at Row %d and Column %d: ",i+1,j+1);
                    scanf("%f",&arr[i][j]);
                  }
                  printf("\n");
                }
                printf("\nThe Array Elements are: \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("%f\t",arr[i][j]);
                  }
                  printf("\n\n\n");
                }
                printf("Transpose of the Matrix is: \n\n");
                for(int i=0;i<=n-1;i++)
                {
                  for(int j=0;j<=m-1;j++)
                  {
                    printf("%f\t",arr[j][i]);
                  }
                  printf("\n\n\n");
                }
                printf("Do You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }
      case 3: {
                printf("Enter the Row Size of Array (Positive only): ");
                scanf("%d",&Row_Size);
                printf("Enter the Column Size of Array (Positive only): ");
                scanf("%d",&Column_Size);
                printf("\n");
                do
                {
                  printf("Enter how much Row Elements You want to Store in the Array: ");
                  scanf("%d",&m);
                  if(m<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(m>Row_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Row_Size);
                  }
                }while(m<=0||m>Row_Size);
                do
                {
                  printf("Enter how much Column Elements You want to Store in the Array: ");
                  scanf("%d",&n);
                  if(n<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(n>Column_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Column_Size);
                  }
                }while(n<=0||n>Column_Size);
                char arr[m][n];
                printf("\nEnter the Array Elements (Character only): \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("Enter the Array Element at Row %d and Column %d: ",i+1,j+1);
                    scanf(" %c",&arr[i][j]);
                  }
                  printf("\n");
                }
                printf("\nThe Array Elements are: \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("%c\t",arr[i][j]);
                  }
                  printf("\n\n\n");
                }
                printf("Transpose of the Matrix is: \n\n");
                for(int i=0;i<=n-1;i++)
                {
                  for(int j=0;j<=m-1;j++)
                  {
                    printf("%c\t",arr[j][i]);
                  }
                  printf("\n\n\n");
                }
                printf("Do You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }        
      default: printf("Enter a valid Choice for type of Data\n\n");
   }
  }while(Choice);
  getch();
}

// O/p 1: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 1
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1
//        Enter the Array Element at Row 1 and Column 2: 2
//        Enter the Array Element at Row 1 and Column 3: 3
//        
//        Enter the Array Element at Row 2 and Column 1: 4
//        Enter the Array Element at Row 2 and Column 2: 5
//        Enter the Array Element at Row 2 and Column 3: 6
//        
//        
//        The Array Elements are:
//        
//        1       2       3
//        
//        
//        4       5       6
//        
//        
//        Transpose of the Matrix is:
//        
//        1       4
//        
//        
//        2       5
//        
//        
//        3       6
//        
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
//
// O/p 2: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character: 
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 2
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Array Elements (Float only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1.1
//        Enter the Array Element at Row 1 and Column 2: 2.2
//        Enter the Array Element at Row 1 and Column 3: 3.3
//        
//        Enter the Array Element at Row 2 and Column 1: 4.4
//        Enter the Array Element at Row 2 and Column 2: 5.5
//        Enter the Array Element at Row 2 and Column 3: 6.6
//        
//        
//        The Array Elements are:
//        
//        1.100000        2.200000        3.300000
//        
//        
//        4.400000        5.500000        6.600000
//        
//        
//        Transpose of the Matrix is:
//        
//        1.100000        4.400000
//        
//        
//        2.200000        5.500000
//        
//        
//        3.300000        6.600000
//        
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
//
// O/p 3: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character: 
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 3
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Array Elements (Character only):
//        
//        Enter the Array Element at Row 1 and Column 1: A
//        Enter the Array Element at Row 1 and Column 2: B
//        Enter the Array Element at Row 1 and Column 3: C
//        
//        Enter the Array Element at Row 2 and Column 1: d
//        Enter the Array Element at Row 2 and Column 2: e
//        Enter the Array Element at Row 2 and Column 3: f
//        
//        
//        The Array Elements are:
//        
//        A       B       C
//        
//        
//        d       e       f
//        
//        
//        Transpose of the Matrix is:
//        
//        A       d
//        
//        
//        B       e
//        
//        
//        C       f
//        
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
//
// O/p 4: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 1
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 5 //and ao on till user enter valid no. of row elements
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: //and so on till user enter valid no. of column elements
//        
// O/p 5: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 2
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 5 //and ao on till user enter valid no. of row elements
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: //and so on till user enter valid no. of column elements
//        
// O/p 6: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 3
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 5 //and ao on till user enter valid no. of row elements
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: //and so on till user enter valid no. of column elements
//
// O/p 7: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 4
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: //and s on till user enter valid choice for type of data
//
// O/p 8: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character: 
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 4
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 1
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1
//        Enter the Array Element at Row 1 and Column 2: 2
//        Enter the Array Element at Row 1 and Column 3: 3
//        
//        Enter the Array Element at Row 2 and Column 1: 4
//        Enter the Array Element at Row 2 and Column 2: 5
//        Enter the Array Element at Row 2 and Column 3: 6
//        
//        
//        The Array Elements are:
//        
//        1       2       3
//        
//        
//        4       5       6
//        
//        
//        Transpose of the Matrix is:
//        
//        1       4
//        
//        
//        2       5
//        
//        
//        3       6
//        
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 1
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 4
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 2
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Array Elements (Float only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1.1
//        Enter the Array Element at Row 1 and Column 2: 2.2
//        Enter the Array Element at Row 1 and Column 3: 3.3
//        
//        Enter the Array Element at Row 2 and Column 1: 4.4
//        Enter the Array Element at Row 2 and Column 2: 5.5
//        Enter the Array Element at Row 2 and Column 3: 6.6
//        
//        
//        The Array Elements are:
//        
//        1.100000        2.200000        3.300000
//        
//        
//        4.400000        5.500000        6.600000
//        
//        
//        Transpose of the Matrix is:
//        
//        1.100000        4.400000
//        
//        
//        2.200000        5.500000
//        
//        
//        3.300000        6.600000
//        
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 1
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 4
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 3
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Array Elements (Character only):
//        
//        Enter the Array Element at Row 1 and Column 1: A
//        Enter the Array Element at Row 1 and Column 2: B
//        Enter the Array Element at Row 1 and Column 3: C
//        
//        Enter the Array Element at Row 2 and Column 1: d
//        Enter the Array Element at Row 2 and Column 2: e
//        Enter the Array Element at Row 2 and Column 3: f
//        
//        
//        The Array Elements are:
//        
//        A       B       C
//        
//        
//        d       e       f
//        
//        
//        Transpose of the Matrix is:
//        
//        A       d
//        
//        
//        B       e
//        
//        
//        C       f
//        
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//         
*/

/*//TODO
//Q.18 Write a Program to Print the Sum of individual Rows and Columns and the Sum of Diagonals

#include <stdio.h>
#include <conio.h>
int main()
{
  int m,n,Row_Size,Column_Size,Datatype,Choice;
  printf("Enter what type of Data You want to Store in the Array: \n");
  printf("It could be Integer, Float(Point Values): \n");
  do
  {
    printf("Enter 1 for Integer, 2 for Floating Point Values: ");
    scanf("%d",&Datatype);
    printf("\n");
    switch(Datatype)
    {
      case 1: {
                printf("Enter the Row Size of Array (Positive only): ");
                scanf("%d",&Row_Size);
                printf("Enter the Column Size of Array (Positive only): ");
                scanf("%d",&Column_Size);
                printf("\n");
                do
                {
                  printf("Enter how much Row Elements You want to Store in the Array: ");
                  scanf("%d",&m);
                  if(m<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(m>Row_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Row_Size);
                  }
                }while(m<=0||m>Row_Size);
                do
                {
                  printf("Enter how much Column Elements You want to Store in the Array: ");
                  scanf("%d",&n);
                  if(n<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(n>Column_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Column_Size);
                  }
                }while(n<=0||n>Column_Size);
                int arr[m][n];
                printf("\nEnter the Array Elements (Integers only): \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("Enter the Array Element at Row %d and Column %d: ",i+1,j+1);
                    scanf("%d",&arr[i][j]);
                  }
                  printf("\n");
                }
                printf("\nThe Array Elements are: \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("%d\t",arr[i][j]);
                  }
                  printf("\n\n\n");
                }
                for(int i=0;i<m;i++)
                {
                  int SumR=0;
                  for(int j=0;j<n;j++)
                  {
                    SumR+=arr[i][j];
                  }
                  printf("Sum of Row %d is: %d\n",i+1,SumR);
                }
                printf("\n\n");
                for(int i=0;i<n;i++)
                {
                  int SumC=0;
                  for(int j=0;j<m;j++)
                  {
                    SumC+=arr[j][i];
                  }
                  printf("Sum of Column %d is: %d\n",i+1,SumC);
                }
                printf("\n\n");
                printf("Do You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }
      case 2: {
                printf("Enter the Row Size of Array (Positive only): ");
                scanf("%d",&Row_Size);
                printf("Enter the Column Size of Array (Positive only): ");
                scanf("%d",&Column_Size);
                printf("\n");
                do
                {
                  printf("Enter how much Row Elements You want to Store in the Array: ");
                  scanf("%d",&m);
                  if(m<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(m>Row_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Row_Size);
                  }
                }while(m<=0||m>Row_Size);
                do
                {
                  printf("Enter how much Column Elements You want to Store in the Array: ");
                  scanf("%d",&n);
                  if(n<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(n>Column_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Column_Size);
                  }
                }while(n<=0||n>Column_Size);
                float arr[m][n];
                printf("\nEnter the Array Elements (Float only): \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("Enter the Array Element at Row %d and Column %d: ",i+1,j+1);
                    scanf("%f",&arr[i][j]);
                  }
                  printf("\n");
                }
                printf("\nThe Array Elements are: \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("%f\t",arr[i][j]);
                  }
                  printf("\n\n\n");
                }
                for(int i=0;i<m;i++)
                {
                  float SumR=0;
                  for(int j=0;j<n;j++)
                  {
                    SumR+=arr[i][j];
                  }
                  printf("Sum of Row %d is: %f\n",i+1,SumR);
                }
                printf("\n\n");
                for(int i=0;i<n;i++)
                {
                  float SumC=0;
                  for(int j=0;j<m;j++)
                  {
                    SumC+=arr[j][i];
                  }
                  printf("Sum of Column %d is: %f\n",i+1,SumC);
                }
                printf("\n\n");
                printf("Do You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }        
      default: printf("Enter a valid Choice for type of Data\n\n");
   }
  }while(Choice);
  getch();
}

// O/p 1: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values):
//        Enter 1 for Integer, 2 for Floating Point Values: 1
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1
//        Enter the Array Element at Row 1 and Column 2: 2
//        Enter the Array Element at Row 1 and Column 3: 3
//        
//        Enter the Array Element at Row 2 and Column 1: 4
//        Enter the Array Element at Row 2 and Column 2: 5
//        Enter the Array Element at Row 2 and Column 3: 6
//        
//        
//        The Array Elements are:
//        
//        1       2       3
//        
//        
//        4       5       6
//        
//        
//        Sum of Row 1 is: 6
//        Sum of Row 2 is: 15
//        
//        
//        Sum of Column 1 is: 5
//        Sum of Column 2 is: 7
//        Sum of Column 3 is: 9
//        
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
//
// O/p 2: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values): 
//        Enter 1 for Integer, 2 for Floating Point Values: 2
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Array Elements (Float only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1.1
//        Enter the Array Element at Row 1 and Column 2: 2.2
//        Enter the Array Element at Row 1 and Column 3: 3.3
//        
//        Enter the Array Element at Row 2 and Column 1: 4.4
//        Enter the Array Element at Row 2 and Column 2: 5.5
//        Enter the Array Element at Row 2 and Column 3: 6.6
//        
//        
//        The Array Elements are:
//        
//        1.100000        2.200000        3.300000
//        
//        
//        4.400000        5.500000        6.600000
//        
//        
//        Sum of Row 1 is: 6.600000
//        Sum of Row 2 is: 16.500000
//        
//        
//        Sum of Column 1 is: 5.500000
//        Sum of Column 2 is: 7.700000
//        Sum of Column 3 is: 9.900000
//        
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
//
// O/p 3: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 1
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 5 //and ao on till user enter valid no. of row elements
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: //and so on till user enter valid no. of column elements
//        
// O/p 4: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 2
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 5 //and ao on till user enter valid no. of row elements
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: //and so on till user enter valid no. of column elements
//
// O/p 5: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 4
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: //and s on till user enter valid choice for type of data
// 
// O/p 6: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values): 
//        Enter 1 for Integer, 2 for Floating Point Values: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 3
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 1
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1
//        Enter the Array Element at Row 1 and Column 2: 2
//        Enter the Array Element at Row 1 and Column 3: 3
//        
//        Enter the Array Element at Row 2 and Column 1: 4
//        Enter the Array Element at Row 2 and Column 2: 5
//        Enter the Array Element at Row 2 and Column 3: 6
//        
//        
//        The Array Elements are:
//        
//        1       2       3
//        
//        
//        4       5       6
//        
//        
//        Sum of Row 1 is: 6
//        Sum of Row 2 is: 15
//        
//        
//        Sum of Column 1 is: 5
//        Sum of Column 2 is: 7
//        Sum of Column 3 is: 9
//        
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 1
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 3
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 2
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Array Elements (Float only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1.1
//        Enter the Array Element at Row 1 and Column 2: 2.2
//        Enter the Array Element at Row 1 and Column 3: 3.3
//        
//        Enter the Array Element at Row 2 and Column 1: 4.4
//        Enter the Array Element at Row 2 and Column 2: 5.5
//        Enter the Array Element at Row 2 and Column 3: 6.6
//        
//        
//        The Array Elements are:
//        
//        1.100000        2.200000        3.300000
//        
//        
//        4.400000        5.500000        6.600000
//        
//        
//        Sum of Row 1 is: 6.600000
//        Sum of Row 2 is: 16.500000
//        
//        
//        Sum of Column 1 is: 5.500000
//        Sum of Column 2 is: 7.700000
//        Sum of Column 3 is: 9.900000
//        
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//
*/

/*//TODO
//Q.19 Write a Program to Print Addition of two Matrices

#include <stdio.h>
#include <conio.h>
int main()
{
  int m,n,Row_Size,Column_Size,Datatype,Choice;
  printf("Enter what type of Data You want to Store in the Array: \n");
  printf("It could be Integer, Float(Point Values): \n");
  do
  {
    printf("Enter 1 for Integer, 2 for Floating Point Values: ");
    scanf("%d",&Datatype);
    printf("\n");
    switch(Datatype)
    {
      case 1: {
                printf("Enter the Row Size of Array (Positive only): ");
                scanf("%d",&Row_Size);
                printf("Enter the Column Size of Array (Positive only): ");
                scanf("%d",&Column_Size);
                printf("\n");
                do
                {
                  printf("Enter how much Row Elements You want to Store in the Array: ");
                  scanf("%d",&m);
                  if(m<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(m>Row_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Row_Size);
                  }
                }while(m<=0||m>Row_Size);
                do
                {
                  printf("Enter how much Column Elements You want to Store in the Array: ");
                  scanf("%d",&n);
                  if(n<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(n>Column_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Column_Size);
                  }
                }while(n<=0||n>Column_Size);
                int arr_1[m][n],arr_2[m][n];
                printf("\nEnter the Elements of Matrix 1 (Integers only): \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("Enter the Array Element at Row %d and Column %d: ",i+1,j+1);
                    scanf("%d",&arr_1[i][j]);
                  }
                  printf("\n");
                }
                printf("\nEnter the Elements of Matrix 2 (Integers only): \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("Enter the Array Element at Row %d and Column %d: ",i+1,j+1);
                    scanf("%d",&arr_2[i][j]);
                  }
                  printf("\n");
                }
                printf("\nThe Elements of Matrix 1 are: \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("%d\t",arr_1[i][j]);
                  }
                  printf("\n\n\n");
                }
                printf("\nThe Elements of Matrix 2 are: \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("%d\t",arr_2[i][j]);
                  }
                  printf("\n\n\n");
                }
                printf("Sum of Matrix 1 and Matrix 2 is: \n\n");
                for(int i=0;i<m;i++)
                {
                  for(int j=0;j<n;j++)
                  {
                    printf("%d\t",arr_1[i][j]+arr_2[i][j]);
                  }
                  printf("\n\n\n");
                }
                printf("Do You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }
      case 2: {
                printf("Enter the Row Size of Array (Positive only): ");
                scanf("%d",&Row_Size);
                printf("Enter the Column Size of Array (Positive only): ");
                scanf("%d",&Column_Size);
                printf("\n");
                do
                {
                  printf("Enter how much Row Elements You want to Store in the Array: ");
                  scanf("%d",&m);
                  if(m<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(m>Row_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Row_Size);
                  }
                }while(m<=0||m>Row_Size);
                do
                {
                  printf("Enter how much Column Elements You want to Store in the Array: ");
                  scanf("%d",&n);
                  if(n<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(n>Column_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Column_Size);
                  }
                }while(n<=0||n>Column_Size);
                float arr_1[m][n],arr_2[m][n];
                printf("\nEnter the Elements of Matrix 1 (Float only): \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("Enter the Array Element at Row %d and Column %d: ",i+1,j+1);
                    scanf("%f",&arr_1[i][j]);
                  }
                  printf("\n");
                }
                printf("\nEnter the Elements of Matrix 2 (Float only): \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("Enter the Array Element at Row %d and Column %d: ",i+1,j+1);
                    scanf("%f",&arr_2[i][j]);
                  }
                  printf("\n");
                }
                printf("\nThe Elements of Matrix 1 are: \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("%f\t",arr_1[i][j]);
                  }
                  printf("\n\n\n");
                }
                printf("\nThe Elements of Matrix 2 are: \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("%f\t",arr_2[i][j]);
                  }
                  printf("\n\n\n");
                }
                printf("Sum of Matrix 1 and Matrix 2 is: \n\n");
                for(int i=0;i<m;i++)
                {
                  for(int j=0;j<n;j++)
                  {
                    printf("%f\t",arr_1[i][j]+arr_2[i][j]);
                  }
                  printf("\n\n\n");
                }
                printf("Do You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }        
      default: printf("Enter a valid Choice for type of Data\n\n");
   }
  }while(Choice);
  getch();
}

// O/p 1: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values): 
//        Enter 1 for Integer, 2 for Floating Point Values: 1
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Elements of Matrix 1 (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1
//        Enter the Array Element at Row 1 and Column 2: 2
//        Enter the Array Element at Row 1 and Column 3: 3
//        
//        Enter the Array Element at Row 2 and Column 1: 4
//        Enter the Array Element at Row 2 and Column 2: 5
//        Enter the Array Element at Row 2 and Column 3: 6
//        
//        
//        Enter the Elements of Matrix 2 (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1
//        Enter the Array Element at Row 1 and Column 2: 2
//        Enter the Array Element at Row 1 and Column 3: 3
//        
//        Enter the Array Element at Row 2 and Column 1: 4
//        Enter the Array Element at Row 2 and Column 2: 5
//        Enter the Array Element at Row 2 and Column 3: 6
//        
//        
//        The Elements of Matrix 1 are:
//        
//        1       2       3
//        
//        
//        4       5       6
//        
//        
//        
//        The Elements of Matrix 2 are:
//        
//        1       2       3
//        
//        
//        4       5       6
//        
//        
//        Sum of Matrix 1 and Matrix 2 is:
//        
//        2       4       6
//        
//        
//        8       10      12
//        
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
//
// O/p 2: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values): 
//        Enter 1 for Integer, 2 for Floating Point Values: 2
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Elements of Matrix 1 (Float only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1.1
//        Enter the Array Element at Row 1 and Column 2: 2.2
//        Enter the Array Element at Row 1 and Column 3: 3.3
//        
//        Enter the Array Element at Row 2 and Column 1: 4.4
//        Enter the Array Element at Row 2 and Column 2: 5.5
//        Enter the Array Element at Row 2 and Column 3: 6.6
//        
//        
//        Enter the Elements of Matrix 2 (Float only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1.1
//        Enter the Array Element at Row 1 and Column 2: 2.2
//        Enter the Array Element at Row 1 and Column 3: 3.3
//        
//        Enter the Array Element at Row 2 and Column 1: 4.4
//        Enter the Array Element at Row 2 and Column 2: 5.5
//        Enter the Array Element at Row 2 and Column 3: 6.6
//        
//        
//        The Elements of Matrix 1 are:
//        
//        1.100000        2.200000        3.300000
//        
//        
//        4.400000        5.500000        6.600000
//        
//        
//        
//        The Elements of Matrix 2 are:
//        
//        1.100000        2.200000        3.300000
//        
//        
//        4.400000        5.500000        6.600000
//        
//        
//        Sum of Matrix 1 and Matrix 2 is:
//        
//        2.200000        4.400000        6.600000
//        
//        
//        8.800000        11.000000       13.200000
//        
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
//
// O/p 3: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 1
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 5 //and ao on till user enter valid no. of row elements
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: //and so on till user enter valid no. of column elements
//        
// O/p 4: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 2
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 5 //and ao on till user enter valid no. of row elements
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: //and so on till user enter valid no. of column elements
//
// O/p 5: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 4
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: //and s on till user enter valid choice for type of data
// 
// O/p 6: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values): 
//        Enter 1 for Integer, 2 for Floating Point Values: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 3
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 1
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Elements of Matrix 1 (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1
//        Enter the Array Element at Row 1 and Column 2: 2
//        Enter the Array Element at Row 1 and Column 3: 3
//        
//        Enter the Array Element at Row 2 and Column 1: 4
//        Enter the Array Element at Row 2 and Column 2: 5
//        Enter the Array Element at Row 2 and Column 3: 6
//        
//        
//        Enter the Elements of Matrix 2 (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1
//        Enter the Array Element at Row 1 and Column 2: 2
//        Enter the Array Element at Row 1 and Column 3: 3
//        
//        Enter the Array Element at Row 2 and Column 1: 4
//        Enter the Array Element at Row 2 and Column 2: 5
//        Enter the Array Element at Row 2 and Column 3: 6
//        
//        
//        The Elements of Matrix 1 are:
//        
//        1       2       3
//        
//        
//        4       5       6
//        
//        
//        
//        The Elements of Matrix 2 are:
//        
//        1       2       3
//        
//        
//        4       5       6
//        
//        
//        Sum of Matrix 1 and Matrix 2 is:
//        
//        2       4       6
//        
//        
//        8       10      12
//        
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 1
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 3
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 2
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Elements of Matrix 1 (Float only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1.1
//        Enter the Array Element at Row 1 and Column 2: 2.2
//        Enter the Array Element at Row 1 and Column 3: 3.3
//        
//        Enter the Array Element at Row 2 and Column 1: 4.4
//        Enter the Array Element at Row 2 and Column 2: 5.5
//        Enter the Array Element at Row 2 and Column 3: 6.6
//        
//        
//        Enter the Elements of Matrix 2 (Float only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1.1
//        Enter the Array Element at Row 1 and Column 2: 2.2
//        Enter the Array Element at Row 1 and Column 3: 3.3
//        
//        Enter the Array Element at Row 2 and Column 1: 4.4
//        Enter the Array Element at Row 2 and Column 2: 5.5
//        Enter the Array Element at Row 2 and Column 3: 6.6
//        
//        
//        The Elements of Matrix 1 are:
//        
//        1.100000        2.200000        3.300000
//        
//        
//        4.400000        5.500000        6.600000
//        
//        
//        
//        The Elements of Matrix 2 are:
//        
//        1.100000        2.200000        3.300000
//        
//        
//        4.400000        5.500000        6.600000
//        
//        
//        Sum of Matrix 1 and Matrix 2 is:
//        
//        2.200000        4.400000        6.600000
//        
//        
//        8.800000        11.000000       13.200000
//        
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
*/

/*//TODO
//Q.20 Write a Program to Print Subtraction of two Matrices

#include <stdio.h>
#include <conio.h>
int main()
{
  int m,n,Row_Size,Column_Size,Datatype,Choice;
  printf("Enter what type of Data You want to Store in the Array: \n");
  printf("It could be Integer, Float(Point Values): \n");
  do
  {
    printf("Enter 1 for Integer, 2 for Floating Point Values: ");
    scanf("%d",&Datatype);
    printf("\n");
    switch(Datatype)
    {
      case 1: {
                printf("Enter the Row Size of Array (Positive only): ");
                scanf("%d",&Row_Size);
                printf("Enter the Column Size of Array (Positive only): ");
                scanf("%d",&Column_Size);
                printf("\n");
                do
                {
                  printf("Enter how much Row Elements You want to Store in the Array: ");
                  scanf("%d",&m);
                  if(m<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(m>Row_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Row_Size);
                  }
                }while(m<=0||m>Row_Size);
                do
                {
                  printf("Enter how much Column Elements You want to Store in the Array: ");
                  scanf("%d",&n);
                  if(n<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(n>Column_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Column_Size);
                  }
                }while(n<=0||n>Column_Size);
                int arr_1[m][n],arr_2[m][n],arr_3[m][n];
                printf("\nEnter the Elements of Matrix 1 (Integers only): \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("Enter the Array Element at Row %d and Column %d: ",i+1,j+1);
                    scanf("%d",&arr_1[i][j]);
                  }
                  printf("\n");
                }
                printf("\nEnter the Elements of Matrix 2 (Integers only): \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("Enter the Array Element at Row %d and Column %d: ",i+1,j+1);
                    scanf("%d",&arr_2[i][j]);
                  }
                  printf("\n");
                }
                printf("\nThe Elements of Matrix 1 are: \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("%d\t",arr_1[i][j]);
                  }
                  printf("\n\n\n");
                }
                printf("\nThe Elements of Matrix 2 are: \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("%d\t",arr_2[i][j]);
                  }
                  printf("\n\n\n");
                }
                printf("Subtraction of Matrix 1 and Matrix 2 is: \n\n");
                for(int i=0;i<m;i++)
                {
                  for(int j=0;j<n;j++)
                  {
                    arr_3[i][j]=arr_1[i][j]-arr_2[i][j];
                    printf("%d\t",arr_3[i][j]);
                  }
                  printf("\n\n\n");
                }
                printf("Do You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }
      case 2: {
                printf("Enter the Row Size of Array (Positive only): ");
                scanf("%d",&Row_Size);
                printf("Enter the Column Size of Array (Positive only): ");
                scanf("%d",&Column_Size);
                printf("\n");
                do
                {
                  printf("Enter how much Row Elements You want to Store in the Array: ");
                  scanf("%d",&m);
                  if(m<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(m>Row_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Row_Size);
                  }
                }while(m<=0||m>Row_Size);
                do
                {
                  printf("Enter how much Column Elements You want to Store in the Array: ");
                  scanf("%d",&n);
                  if(n<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(n>Column_Size)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Column_Size);
                  }
                }while(n<=0||n>Column_Size);
                float arr_1[m][n],arr_2[m][n],arr_3[m][n];
                printf("\nEnter the Elements of Matrix 1 (Float only): \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("Enter the Array Element at Row %d and Column %d: ",i+1,j+1);
                    scanf("%f",&arr_1[i][j]);
                  }
                  printf("\n");
                }
                printf("\nEnter the Elements of Matrix 2 (Float only): \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("Enter the Array Element at Row %d and Column %d: ",i+1,j+1);
                    scanf("%f",&arr_2[i][j]);
                  }
                  printf("\n");
                }
                printf("\nThe Elements of Matrix 1 are: \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("%f\t",arr_1[i][j]);
                  }
                  printf("\n\n\n");
                }
                printf("\nThe Elements of Matrix 2 are: \n\n");
                for(int i=0;i<=m-1;i++)
                {
                  for(int j=0;j<=n-1;j++)
                  {
                    printf("%f\t",arr_2[i][j]);
                  }
                  printf("\n\n\n");
                }
                printf("Subtraction of Matrix 1 and Matrix 2 is: \n\n");
                for(int i=0;i<m;i++)
                {
                  for(int j=0;j<n;j++)
                  {
                    arr_3[i][j]=arr_1[i][j]-arr_2[i][j];
                    printf("%f\t",arr_3[i][j]);
                  }
                  printf("\n\n\n");
                }
                printf("Do You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }        
      default: printf("Enter a valid Choice for type of Data\n\n");
   }
  }while(Choice);
  getch();
}

// O/p 1: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values): 
//        Enter 1 for Integer, 2 for Floating Point Values: 1
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Elements of Matrix 1 (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1
//        Enter the Array Element at Row 1 and Column 2: 2
//        Enter the Array Element at Row 1 and Column 3: 3
//        
//        Enter the Array Element at Row 2 and Column 1: 4
//        Enter the Array Element at Row 2 and Column 2: 10
//        Enter the Array Element at Row 2 and Column 3: 18
//        
//        
//        Enter the Elements of Matrix 2 (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 3
//        Enter the Array Element at Row 1 and Column 2: 2
//        Enter the Array Element at Row 1 and Column 3: 1
//        
//        Enter the Array Element at Row 2 and Column 1: 18
//        Enter the Array Element at Row 2 and Column 2: 10
//        Enter the Array Element at Row 2 and Column 3: 4
//        
//        
//        The Elements of Matrix 1 are:
//        
//        1       2       3
//        
//        
//        4       10      18
//        
//        
//        
//        The Elements of Matrix 2 are:
//        
//        3       2       1
//        
//        
//        18       10       4
//        
//        
//        Subtraction of Matrix 1 and Matrix 2 is:
//        
//        -2       0       2
//        
//        
//        -14      0       14
//        
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
//
// O/p 2: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values):
//        Enter 1 for Integer, 2 for Floating Point Values: 2
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Elements of Matrix 1 (Float only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1.1
//        Enter the Array Element at Row 1 and Column 2: 2.2
//        Enter the Array Element at Row 1 and Column 3: 3.3
//        
//        Enter the Array Element at Row 2 and Column 1: 4.4
//        Enter the Array Element at Row 2 and Column 2: 11.0
//        Enter the Array Element at Row 2 and Column 3: 19.8
//        
//        
//        Enter the Elements of Matrix 2 (Float only):
//        
//        Enter the Array Element at Row 1 and Column 1: 3.3
//        Enter the Array Element at Row 1 and Column 2: 2.2
//        Enter the Array Element at Row 1 and Column 3: 1.1
//        
//        Enter the Array Element at Row 2 and Column 1: 19.8
//        Enter the Array Element at Row 2 and Column 2: 11.0
//        Enter the Array Element at Row 2 and Column 3: 4.4
//        
//        
//        The Elements of Matrix 1 are:
//        
//        1.100000        2.200000        3.300000
//        
//        
//        4.400000        11.000000       19.799999
//        
//        
//        
//        The Elements of Matrix 2 are:
//        
//        3.300000        2.200000        1.100000
//        
//        
//        19.799999       11.000000       4.400000
//        
//        
//        Subtraction of Matrix 1 and Matrix 2 is:
//        
//        -2.200000       0.000000        2.200000
//        
//        
//        -15.400000      0.000000        15.400000
//        
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
//
// O/p 3: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 1
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 5 //and ao on till user enter valid no. of row elements
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: //and so on till user enter valid no. of column elements
//        
// O/p 4: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 2
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 5 //and ao on till user enter valid no. of row elements
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 5
//        
//        Enter the Array Elements (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: //and so on till user enter valid no. of column elements
//
// O/p 5: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values), Character:
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: 4
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values, 3 for Character: //and s on till user enter valid choice for type of data
// 
// O/p 6: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values):
//        Enter 1 for Integer, 2 for Floating Point Values: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 3
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 1
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Elements of Matrix 1 (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1
//        Enter the Array Element at Row 1 and Column 2: 2
//        Enter the Array Element at Row 1 and Column 3: 3
//        
//        Enter the Array Element at Row 2 and Column 1: 4
//        Enter the Array Element at Row 2 and Column 2: 10
//        Enter the Array Element at Row 2 and Column 3: 18
//        
//        
//        Enter the Elements of Matrix 2 (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 3
//        Enter the Array Element at Row 1 and Column 2: 2
//        Enter the Array Element at Row 1 and Column 3: 1
//        
//        Enter the Array Element at Row 2 and Column 1: 18
//        Enter the Array Element at Row 2 and Column 2: 10
//        Enter the Array Element at Row 2 and Column 3: 4
//        
//        
//        The Elements of Matrix 1 are:
//        
//        1       2       3
//        
//        
//        4       10      18
//        
//        
//        
//        The Elements of Matrix 2 are:
//        
//        3       2       1
//        
//        
//        18      10      4
//        
//        
//        Subtraction of Matrix 1 and Matrix 2 is:
//        
//        -2      0       2
//        
//        
//        -14     0       14
//        
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 1
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 3
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 2
//        
//        Enter the Row Size of Array (Positive only): 5
//        Enter the Column Size of Array (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Array: 2
//        Enter how much Column Elements You want to Store in the Array: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Array: 3
//        
//        Enter the Elements of Matrix 1 (Float only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1.1
//        Enter the Array Element at Row 1 and Column 2: 2.2
//        Enter the Array Element at Row 1 and Column 3: 3.3
//        
//        Enter the Array Element at Row 2 and Column 1: 4.4
//        Enter the Array Element at Row 2 and Column 2: 11.0
//        Enter the Array Element at Row 2 and Column 3: 19.8
//        
//        
//        Enter the Elements of Matrix 2 (Float only):
//        
//        Enter the Array Element at Row 1 and Column 1: 3.3
//        Enter the Array Element at Row 1 and Column 2: 2.2
//        Enter the Array Element at Row 1 and Column 3: 1.1
//        
//        Enter the Array Element at Row 2 and Column 1: 19.8
//        Enter the Array Element at Row 2 and Column 2: 11.0
//        Enter the Array Element at Row 2 and Column 3: 4.4
//        
//        
//        The Elements of Matrix 1 are:
//        
//        1.100000        2.200000        3.300000
//        
//        
//        4.400000        11.000000       19.799999
//        
//        
//        
//        The Elements of Matrix 2 are:
//        
//        3.300000        2.200000        1.100000
//        
//        
//        19.799999       11.000000       4.400000
//        
//        
//        Subtraction of Matrix 1 and Matrix 2 is:
//        
//        -2.200000       0.000000        2.200000
//        
//        
//        -15.400000      0.000000        15.400000
//        
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//      
*/

/*//TODO
//Q.21 Write a Program to Print Multiplication of two Matrices

#include <stdio.h>
#include <conio.h>
int main()
{
  int m,n,p,q,Row_Size1,Row_Size2,Column_Size1,Column_Size2,Datatype,Choice;
  printf("Enter what type of Data You want to Store in the Array: \n");
  printf("It could be Integer, Float(Point Values): \n");
  do
  {
    printf("Enter 1 for Integer, 2 for Floating Point Values: ");
    scanf("%d",&Datatype);
    printf("\n");
    switch(Datatype)
    {
      case 1: {
                printf("Enter the Row Size of Matrix 1 (Positive only): ");
                scanf("%d",&Row_Size1);
                printf("Enter the Column Size of Matrix 1 (Positive only): ");
                scanf("%d",&Column_Size1);
                printf("\n");
                printf("Enter the Row Size of Matrix 2 (Positive only): ");
                scanf("%d",&Row_Size2);
                printf("Enter the Column Size of Matrix 2 (Positive only): ");
                scanf("%d",&Column_Size2);
                printf("\n");
                do
                {
                  printf("Enter how much Row Elements You want to Store in the Matrix 1: ");
                  scanf("%d",&m);
                  if(m<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(m>Row_Size1)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Row_Size1);
                  }
                }while(m<=0||m>Row_Size1);
                do
                {
                  printf("Enter how much Column Elements You want to Store in the Matrix 1: ");
                  scanf("%d",&n);
                  if(n<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(n>Column_Size1)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Column_Size1);
                  }
                }while(n<=0||n>Column_Size1);
                printf("\n");
                do
                {
                  printf("Enter how much Row Elements You want to Store in the Matrix 2: ");
                  scanf("%d",&p);
                  if(p<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(p>Row_Size2)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Row_Size2);
                  }
                }while(p<=0||p>Row_Size2);
                do
                {
                  printf("Enter how much Column Elements You want to Store in the Matrix 2: ");
                  scanf("%d",&q);
                  if(q<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(q>Column_Size2)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Column_Size2);
                  }
                }while(q<=0||q>Column_Size2);
                if(n==p)
                {
                  int arr_1[m][n],arr_2[p][q],arr_3[m][q];
                  printf("\nEnter the Elements of Matrix 1 (Integers only): \n\n");
                  for(int i=0;i<=m-1;i++)
                  {
                    for(int j=0;j<=n-1;j++)
                    {
                      printf("Enter the Array Element at Row %d and Column %d: ",i+1,j+1);
                      scanf("%d",&arr_1[i][j]);
                    }
                    printf("\n");
                  }
                  printf("Enter the Elements of Matrix 2 (Integers only): \n\n");
                  for(int i=0;i<=p-1;i++)
                  {
                    for(int j=0;j<=q-1;j++)
                    {
                      printf("Enter the Array Element at Row %d and Column %d: ",i+1,j+1);
                      scanf("%d",&arr_2[i][j]);
                    }
                    printf("\n");
                  }
                  printf("The Elements of Matrix 1 are: \n\n");
                  for(int i=0;i<=m-1;i++)
                  {
                    for(int j=0;j<=n-1;j++)
                    {
                      printf("%d\t",arr_1[i][j]);
                    }
                    printf("\n\n\n");
                  }
                  printf("The Elements of Matrix 2 are: \n\n");
                  for(int i=0;i<=p-1;i++)
                  {
                    for(int j=0;j<=q-1;j++)
                    {
                      printf("%d\t",arr_2[i][j]);
                    }
                    printf("\n\n\n");
                  }
                  printf("Multiplication of Matrix 1 and Matrix 2 is: \n\n");
                  for(int i=0;i<m;i++)
                  {
                    for(int j=0;j<q;j++)
                    {
                      int sum=0;
                      for(int k=0;k<n;k++)
                      {
                        sum=sum+arr_1[i][k]*arr_2[k][j];
                      }
                      arr_3[i][j]=sum;
                      printf("%d\t",arr_3[i][j]);
                    }
                    printf("\n\n\n");
                  }
                }
                else
                {
                  printf("\nFor Multiplication of two Matrices, Number of Columns of first Matrix should be Equal to the Number of Rows of second Matrix\n\n");
                }
                printf("Do You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }
      case 2: {
                printf("Enter the Row Size of Matrix 1 (Positive only): ");
                scanf("%d",&Row_Size1);
                printf("Enter the Column Size of Matrix 2 (Positive only): ");
                scanf("%d",&Column_Size1);
                printf("\n");
                printf("Enter the Row Size of Matrix 1 (Positive only): ");
                scanf("%d",&Row_Size2);
                printf("Enter the Column Size of Matrix 2 (Positive only): ");
                scanf("%d",&Column_Size2);
                printf("\n");
                do
                {
                  printf("Enter how much Row Elements You want to Store in the Matrix 1: ");
                  scanf("%d",&m);
                  if(m<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(m>Row_Size1)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Row_Size1);
                  }
                }while(m<=0||m>Row_Size1);
                do
                {
                  printf("Enter how much Column Elements You want to Store in the Matrix 1: ");
                  scanf("%d",&n);
                  if(n<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(n>Column_Size1)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Column_Size1);
                  }
                }while(n<=0||n>Column_Size1);
                printf("\n");
                do
                {
                  printf("Enter how much Row Elements You want to Store in the Matrix 2: ");
                  scanf("%d",&p);
                  if(p<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(p>Row_Size2)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Row_Size2);
                  }
                }while(p<=0||p>Row_Size2);
                do
                {
                  printf("Enter how much Column Elements You want to Store in the Matrix 2: ");
                  scanf("%d",&q);
                  if(q<=0)
                  {
                    printf("\nYou have to Store minimum of 1 Element in the Array\n\n");
                  }
                  else if(q>Column_Size2)
                  {
                    printf("\nYou can only Store maximum of %d Elements in the Array\n\n",Column_Size2);
                  }
                }while(q<=0||q>Column_Size2);
                if(n==p)
                {
                  float arr_1[m][n],arr_2[p][q],arr_3[m][q];
                  printf("\nEnter the Elements of Matrix 1 (Integers only): \n\n");
                  for(int i=0;i<=m-1;i++)
                  {
                    for(int j=0;j<=n-1;j++)
                    {
                      printf("Enter the Array Element at Row %d and Column %d: ",i+1,j+1);
                      scanf("%f",&arr_1[i][j]);
                    }
                    printf("\n");
                  }
                  printf("Enter the Elements of Matrix 2 (Integers only): \n\n");
                  for(int i=0;i<=p-1;i++)
                  {
                    for(int j=0;j<=q-1;j++)
                    {
                      printf("Enter the Array Element at Row %d and Column %d: ",i+1,j+1);
                      scanf("%f",&arr_2[i][j]);
                    }
                    printf("\n");
                  }
                  printf("The Elements of Matrix 1 are: \n\n");
                  for(int i=0;i<=m-1;i++)
                  {
                    for(int j=0;j<=n-1;j++)
                    {
                      printf("%f\t",arr_1[i][j]);
                    }
                    printf("\n\n\n");
                  }
                  printf("The Elements of Matrix 2 are: \n\n");
                  for(int i=0;i<=p-1;i++)
                  {
                    for(int j=0;j<=q-1;j++)
                    {
                      printf("%f\t",arr_2[i][j]);
                    }
                    printf("\n\n\n");
                  }
                  printf("Multiplication of Matrix 1 and Matrix 2 is: \n\n");
                  for(int i=0;i<m;i++)
                  {
                    for(int j=0;j<q;j++)
                    {
                      float sum=0;
                      for(int k=0;k<n;k++)
                      {
                        sum=sum+arr_1[i][k]*arr_2[k][j];
                      }
                      arr_3[i][j]=sum;
                      printf("%f\t",arr_3[i][j]);
                    }
                    printf("\n\n\n");
                  }
                }
                else
                {
                  printf("\nFor Multiplication of two Matrices, Number of Columns of first Matrix should be Equal to the Number of Rows of second Matrix\n\n");
                }
                printf("Do You want to Continue? (0 for No and 1 fo Yes): ");
                scanf("%d",&Choice);  
                printf("\n");
                break;
              }        
      default: printf("Enter a valid Choice for type of Data\n\n");
   }
  }while(Choice);
  getch();
}

// O/p 1: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values):
//        Enter 1 for Integer, 2 for Floating Point Values: 1
//        
//        Enter the Row Size of Matrix 1 (Positive only): 5
//        Enter the Column Size of Matrix 1 (Positive only): 5
//        
//        Enter the Row Size of Matrix 2 (Positive only): 5
//        Enter the Column Size of Matrix 2 (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Matrix 1: 3
//        Enter how much Column Elements You want to Store in the Matrix 1: 3
//        
//        Enter how much Row Elements You want to Store in the Matrix 2: 3
//        Enter how much Column Elements You want to Store in the Matrix 2: 2
//        
//        Enter the Elements of Matrix 1 (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1
//        Enter the Array Element at Row 1 and Column 2: 2
//        Enter the Array Element at Row 1 and Column 3: 3
//        
//        Enter the Array Element at Row 2 and Column 1: 4
//        Enter the Array Element at Row 2 and Column 2: 5
//        Enter the Array Element at Row 2 and Column 3: 6
//        
//        Enter the Array Element at Row 3 and Column 1: 7
//        Enter the Array Element at Row 3 and Column 2: 8
//        Enter the Array Element at Row 3 and Column 3: 9
//        
//        Enter the Elements of Matrix 2 (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1
//        Enter the Array Element at Row 1 and Column 2: 2
//        
//        Enter the Array Element at Row 2 and Column 1: 3
//        Enter the Array Element at Row 2 and Column 2: 4
//        
//        Enter the Array Element at Row 3 and Column 1: 5
//        Enter the Array Element at Row 3 and Column 2: 6
//        
//        The Elements of Matrix 1 are:
//        
//        1       2       3
//        
//        
//        4       5       6
//        
//        
//        7       8       9
//        
//        
//        The Elements of Matrix 2 are:
//        
//        1       2
//        
//        
//        3       4
//        
//        
//        5       6
//        
//        
//        Multiplication of Matrix 1 and Matrix 2 is:
//        
//        22      28
//        
//        
//        49      64
//        
//        
//        76      100
//        
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//             
//
// O/p 2: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values):
//        Enter 1 for Integer, 2 for Floating Point Values: 2
//        
//        Enter the Row Size of Matrix 1 (Positive only): 5
//        Enter the Column Size of Matrix 2 (Positive only): 5
//        
//        Enter the Row Size of Matrix 1 (Positive only): 5
//        Enter the Column Size of Matrix 2 (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Matrix 1: 3
//        Enter how much Column Elements You want to Store in the Matrix 1: 3
//        
//        Enter how much Row Elements You want to Store in the Matrix 2: 3
//        Enter how much Column Elements You want to Store in the Matrix 2: 2
//        
//        Enter the Elements of Matrix 1 (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1.1
//        Enter the Array Element at Row 1 and Column 2: 2.2
//        Enter the Array Element at Row 1 and Column 3: 3.3
//        
//        Enter the Array Element at Row 2 and Column 1: 4.4
//        Enter the Array Element at Row 2 and Column 2: 5.5
//        Enter the Array Element at Row 2 and Column 3: 6.6
//        
//        Enter the Array Element at Row 3 and Column 1: 7.7
//        Enter the Array Element at Row 3 and Column 2: 8.8
//        Enter the Array Element at Row 3 and Column 3: 9.9
//        
//        Enter the Elements of Matrix 2 (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1.1
//        Enter the Array Element at Row 1 and Column 2: 2.2
//        
//        Enter the Array Element at Row 2 and Column 1: 3.3
//        Enter the Array Element at Row 2 and Column 2: 4.4
//        
//        Enter the Array Element at Row 3 and Column 1: 5.5
//        Enter the Array Element at Row 3 and Column 2: 6.6
//        
//        The Elements of Matrix 1 are:
//        
//        1.100000        2.200000        3.300000
//        
//        
//        4.400000        5.500000        6.600000
//        
//        
//        7.700000        8.800000        9.900000
//        
//        
//        The Elements of Matrix 2 are:
//        
//        1.100000        2.200000
//        
//        
//        3.300000        4.400000
//        
//        
//        5.500000        6.600000
//        
//        
//        Multiplication of Matrix 1 and Matrix 2 is:
//        
//        26.620001       33.880001
//        
//        
//        59.290001       77.440002
//        
//        
//        91.959999       121.000000
//        
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
//
// O/p 3: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values): 
//        Enter 1 for Integer, 2 for Floating Point Values: 1
//        
//        Enter the Row Size of Matrix 1 (Positive only): 5
//        Enter the Column Size of Matrix 1 (Positive only): 5
//        
//        Enter the Row Size of Matrix 2 (Positive only): 5
//        Enter the Column Size of Matrix 2 (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Matrix 1: 2
//        Enter how much Column Elements You want to Store in the Matrix 1: 3
//        
//        Enter how much Row Elements You want to Store in the Matrix 2: 2
//        Enter how much Column Elements You want to Store in the Matrix 2: 3
//        
//        For Multiplication of two Matrices, Number of Columns of first Matrix should be Equal to the Number of Rows of second Matrix
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
//
// O/p 4: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values): 
//        Enter 1 for Integer, 2 for Floating Point Values: 2
//        
//        Enter the Row Size of Matrix 1 (Positive only): 5
//        Enter the Column Size of Matrix 1 (Positive only): 5
//        
//        Enter the Row Size of Matrix 2 (Positive only): 5
//        Enter the Column Size of Matrix 2 (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Matrix 1: 2
//        Enter how much Column Elements You want to Store in the Matrix 1: 3
//        
//        Enter how much Row Elements You want to Store in the Matrix 2: 2
//        Enter how much Column Elements You want to Store in the Matrix 2: 3
//        
//        For Multiplication of two Matrices, Number of Columns of first Matrix should be Equal to the Number of Rows of second Matrix
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//        
//
// O/p 5: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values):
//        Enter 1 for Integer, 2 for Floating Point Values: 1
//        
//        Enter the Row Size of Matrix 1 (Positive only): 5
//        Enter the Column Size of Matrix 1 (Positive only): 5
//        
//        Enter the Row Size of Matrix 2 (Positive only): 5
//        Enter the Column Size of Matrix 2 (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Matrix 1: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 1: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 1: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 1: 3 //and so on till user enter valid no. of row elements
//        Enter how much Column Elements You want to Store in the Matrix 1: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 1: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 1: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 1: 3 //and so on till user enter valid no. of column elements
//        
//        Enter how much Row Elements You want to Store in the Matrix 2: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 2: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 2: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 2: 3 //and so on till user enter valid no. of row elements
//        Enter how much Column Elements You want to Store in the Matrix 2: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 2: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 2: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 2: //and so on till user enter valid no. of column elements
//        
// O/p 6:  Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values):
//        Enter 1 for Integer, 2 for Floating Point Values: 1
//        
//        Enter the Row Size of Matrix 1 (Positive only): 5
//        Enter the Column Size of Matrix 1 (Positive only): 5
//        
//        Enter the Row Size of Matrix 2 (Positive only): 5
//        Enter the Column Size of Matrix 2 (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Matrix 1: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 1: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 1: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 1: 3 //and so on till user enter valid no. of row elements
//        Enter how much Column Elements You want to Store in the Matrix 1: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 1: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 1: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 1: 3 //and so on till user enter valid no. of column elements
//        
//        Enter how much Row Elements You want to Store in the Matrix 2: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 2: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 2: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 2: 3 //and so on till user enter valid no. of row elements
//        Enter how much Column Elements You want to Store in the Matrix 2: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 2: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 2: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 2: //and so on till user enter valid no. of column elements
//        
// O/p 7: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values):
//        Enter 1 for Integer, 2 for Floating Point Values: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 2
//        
//        Enter the Row Size of Matrix 1 (Positive only): //and so on till user enter valid choice for type of data
//  
// O/p 8: Enter what type of Data You want to Store in the Array: 
//        It could be Integer, Float(Point Values):
//        Enter 1 for Integer, 2 for Floating Point Values: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 3
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 1
//        
//        Enter the Row Size of Matrix 1 (Positive only): 5
//        Enter the Column Size of Matrix 1 (Positive only): 5
//        
//        Enter the Row Size of Matrix 2 (Positive only): 5
//        Enter the Column Size of Matrix 2 (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Matrix 1: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 1: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 1: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 1: 3
//        Enter how much Column Elements You want to Store in the Matrix 1: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 1: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 1: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 1: 3
//        
//        Enter how much Row Elements You want to Store in the Matrix 2: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 2: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 2: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 2: 3
//        Enter how much Column Elements You want to Store in the Matrix 2: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 2: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 2: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 2: 2
//        
//        Enter the Elements of Matrix 1 (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1
//        Enter the Array Element at Row 1 and Column 2: 2
//        Enter the Array Element at Row 1 and Column 3: 3
//        
//        Enter the Array Element at Row 2 and Column 1: 4
//        Enter the Array Element at Row 2 and Column 2: 5
//        Enter the Array Element at Row 2 and Column 3: 6
//        
//        Enter the Array Element at Row 3 and Column 1: 7
//        Enter the Array Element at Row 3 and Column 2: 8
//        Enter the Array Element at Row 3 and Column 3: 9
//        
//        Enter the Elements of Matrix 2 (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1
//        Enter the Array Element at Row 1 and Column 2: 2
//        
//        Enter the Array Element at Row 2 and Column 1: 3
//        Enter the Array Element at Row 2 and Column 2: 4
//        
//        Enter the Array Element at Row 3 and Column 1: 5
//        Enter the Array Element at Row 3 and Column 2: 6
//        
//        The Elements of Matrix 1 are:
//        
//        1       2       3
//        
//        
//        4       5       6
//        
//        
//        7       8       9
//        
//        
//        The Elements of Matrix 2 are:
//        
//        1       2
//        
//        
//        3       4
//        
//        
//        5       6
//        
//        
//        Multiplication of Matrix 1 and Matrix 2 is:
//        
//        22      28
//        
//        
//        49      64
//        
//        
//        76      100
//        
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 1
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 0
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 3
//        
//        Enter a valid Choice for type of Data
//        
//        Enter 1 for Integer, 2 for Floating Point Values: 2
//        
//        Enter the Row Size of Matrix 1 (Positive only): 5
//        Enter the Column Size of Matrix 2 (Positive only): 5
//        
//        Enter the Row Size of Matrix 1 (Positive only): 5
//        Enter the Column Size of Matrix 2 (Positive only): 5
//        
//        Enter how much Row Elements You want to Store in the Matrix 1: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 1: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 1: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 1: 3
//        Enter how much Column Elements You want to Store in the Matrix 1: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 1: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 1: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 1: 3
//        
//        Enter how much Row Elements You want to Store in the Matrix 2: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 2: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 2: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Row Elements You want to Store in the Matrix 2: 3
//        Enter how much Column Elements You want to Store in the Matrix 2: -1
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 2: 0
//        
//        You have to Store minimum of 1 Element in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 2: 6
//        
//        You can only Store maximum of 5 Elements in the Array
//        
//        Enter how much Column Elements You want to Store in the Matrix 2: 2
//        
//        Enter the Elements of Matrix 1 (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1.1
//        Enter the Array Element at Row 1 and Column 2: 2.2
//        Enter the Array Element at Row 1 and Column 3: 3.3
//        
//        Enter the Array Element at Row 2 and Column 1: 4.4
//        Enter the Array Element at Row 2 and Column 2: 5.5
//        Enter the Array Element at Row 2 and Column 3: 6.6
//        
//        Enter the Array Element at Row 3 and Column 1: 7.7
//        Enter the Array Element at Row 3 and Column 2: 8.8
//        Enter the Array Element at Row 3 and Column 3: 9.9
//        
//        Enter the Elements of Matrix 2 (Integers only):
//        
//        Enter the Array Element at Row 1 and Column 1: 1.1
//        Enter the Array Element at Row 1 and Column 2: 2.2
//        
//        Enter the Array Element at Row 2 and Column 1: 3.3
//        Enter the Array Element at Row 2 and Column 2: 4.4
//        
//        Enter the Array Element at Row 3 and Column 1: 5.5
//        Enter the Array Element at Row 3 and Column 2: 6.6
//        
//        The Elements of Matrix 1 are:
//        
//        1.100000        2.200000        3.300000
//        
//        
//        4.400000        5.500000        6.600000
//        
//        
//        7.700000        8.800000        9.900000
//        
//        
//        The Elements of Matrix 2 are:
//        
//        1.100000        2.200000
//        
//        
//        3.300000        4.400000
//        
//        
//        5.500000        6.600000
//        
//        
//        Multiplication of Matrix 1 and Matrix 2 is:
//        
//        26.620001       33.880001
//        
//        
//        59.290001       77.440002
//        
//        
//        91.959999       121.000000
//        
//        
//        Do You want to Continue? (0 for No and 1 fo Yes): 0
//        
//      
*/  

/*...........................................................................................

....................................Strings..................................................

...........................................................................................*/
/*
#include <stdio.h>
int main()
{
  char name[10]={'J','e','n','n','y','\0'};
  char name1[]={'J','e','n','n','y','\0'};
  char name2[]="Jenny";
  char name3[]="Jenny Khatri";
  char name4[]={'W','e',' ','R','o','c','k','\0'};
  printf("%s\n",name);
  printf("%s\n",name1);
  printf("%s\n",name2);
  printf("%s\n",name3);
  printf("%s\n",name4);
}

// O/p: Jenny
//      Jenny
//      Jenny
//      Jenny Khatri
//      We Rock
*/

/*
#include <stdio.h>
int main()
{
  char s1[50]={"H No-126, Gurgaon"};
  char s2[]="12345678910";
  char s3[5]="Hello";
  char s4[]={'H','e','l','l','o','\0'};
  char s5[15]="Jayanti Khatri";
  printf("%s\n",s1);
  printf("%s, %d\n",s2,sizeof(s2));
  printf("%s\n",s3);
  printf("%s, %d\n",s4,sizeof(s4));
  printf("%s\n",s5);  
}

// O/p: H No-126, Gurgaon
//      12345678910, 12
//      Hello12345678910
//      Hello, 6
//      Jayanti Khatri
*/

/*
#include <stdio.h>
int main()
{
  char name[30];
  printf("Enter Name: ");
  scanf("%s",name);
  printf("\nName is %s",name);
}

// O/p 1: Enter Name: Vaibhav Raikwar
//        
//        Name is Vaibhav
//
// O/p 2: Enter Name: VaibhavRaikwar
//        
//        Name is VaibhavRaikwar
*/

/*
#include <stdio.h>
int main()
{
  char name[30];
  printf("Enter Name: ");
  gets(name);
  printf("\nName is %s",name);
}

// O/p: Enter Name: Vaibhav Raikwar
//      
//      Name is Vaibhav Raikwar
*/

/*
#include <stdio.h>
int main()
{
  char name1[5],name2[5];
  printf("Enter Name 1: ");
  scanf("%s",name1);
  printf("\nName is %s",name1);
  printf("\n\nEnter Name 2: ");
  gets(name2);
  printf("\nName is %s",name2);
}

// O/p: Enter Name 1: Vaibhav Raikwar
//      
//      Name 1 is Vaibhav
//      
//      Enter Name 2:
//      Name 2 is  Raikwar
*/

/*
#include <stdio.h>
int main()
{
  char name[5];
  printf("Enter Name: ");
  scanf("%4s",name);
  printf("\nName is: %s",name);
}

// O/p: Enter Name: Vaibhav
//      
//      Name is: Vaib
*/

/*
#include <stdio.h>
int main()
{
  char name[30];
  printf("Enter Name: ");
  scanf("%s",name);
  printf("%.5s",name);
  printf("%10.5s",name);
  puts(name);
  puts(name);
  printf("%s",&name);
  printf("\n%s",&name[2]);
}

// O/p: Enter Name: Vaibhav Raikwar
//      Vaibh     VaibhVaibhav
//      Vaibhav
//      Vaibhav
//      ibhav
*/

/*//TODO
//Q.22 Write a Program to Read and Print a String

#include <stdio.h>
#include <conio.h>
int main()
{
  int n,choice,index;
  do
  {
    printf("Enter the Size of String (Positive Number only): ");
    scanf("%d",&n);
    if(n<0)
    {
      printf("\nSize cannot be Negative\n\n");
    }
    else if(n==0)
    {
      printf("\nYou haven't Initialised any Size of String\n");
      printf("Do You want to Re-Enter the Size? (0 for No, 1 for Yes): ");
      scanf("%d",&choice);
      printf("\n");
    }
    if(choice==0)
    {
      printf("Program Finished\n\n");
      break;
    }
  }while(n<0||n==0&&choice==1);
  char S[n];
  printf("Enter String: ");
  getchar();
  gets(S);
  printf("\n");
  do
  {
    printf("Enter the Index from which You want to Print the String: ");
    scanf("%d",&index);
    if(index<0||index>n-1)
    {
      printf("\nInvalid Index\n\n");
    }
  }while(index<0||index>n-1);
  printf("\nString is %s",&S[index]);
  getch();
}

// O/p: Enter the Size of String (Positive Number only): 20
//      Enter String: Vaibhav Raikwar
//      
//      Enter the Index from which You want to Print the String: 0
//      
//      String is Vaibhav Raikwar
*/

/*//TODO
//Q.23 (i) Write a Program to find Length of a String using Pre-Defined Function

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
  int n,choice,index,len;
  do
  {
    printf("Enter the Size of String (Positive Number only): ");
    scanf("%d",&n);
    if(n<0)
    {
      printf("\nSize cannot be Negative\n\n");
    }
    else if(n==0)
    {
      printf("\nYou haven't Initialised any Size of String\n");
      printf("Do You want to Re-Enter the Size? (0 for No, 1 for Yes): ");
      scanf("%d",&choice);
      printf("\n");
    }
    if(choice==0)
    {
      printf("Program Finished\n\n");
      break;
    }
  }while(n<0||n==0&&choice==1);
  char S[n];
  printf("Enter String: ");
  getchar();
  gets(S);
  printf("\n");
  do
  {
    printf("Enter the Index from which You want to Print the String: ");
    scanf("%d",&index);
    if(index<0||index>n-1)
    {
      printf("\nInvalid Index\n\n");
    }
  }while(index<0||index>n-1);
  printf("\nString is %s",&S[index]);
  len=strlen(S);
  printf("\nLength of String %s is %d",&S[index],len);
  getch();
}

// O/p: Enter the Size of String (Positive Number only): 20
//      Enter String: Vaibhav Raikwar
//      
//      Enter the Index from which You want to Print the String: 0
//      
//      String is Vaibhav Raikwar
//      Length of String Vaibhav Raikwar is 15
*/

/*//TODO
//Q.23 (ii) Write a Program to Find Length of a String without using Pre-Defined Function

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
  int n,count=0,i=0,choice,index;
  do
  {
    printf("Enter the Size of String: ");
    scanf("%d",&n);
    char S[n];
    printf("Enter String: ");
    getchar();
    gets(S);
    printf("\nEnter the Index from which You want Print the String: ");
    scanf("%d",index);
    while(S[i]!='\0')
    {
      count++;
      i++;
    }
    printf("\nString is %s\n",&S[index]);
    printf("Length of String is %d\n",count);
    printf("\nDo You want to Continue? (0 for No, 1 for Yes): ");
    scanf("%d",&choice);
    printf("\n");
  }while(choice);
  getch();
}

// O/p: Enter the Size of String: 20
//      Enter String: Vaibhav Raikwar
//      
//      Enter the Index from which You want Print the String: 0
//      
//      String is Vaibhav Raikwar
//      Length of String is 15
//      
//      Do You want to Continue? (0 for No, 1 for Yes): 0
//      
//
*/

/*//TODO
//Q.24 (i) Write a Program to Concatenate 2 Strings using Pre-Defined Function

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
  int m,n,choice,index1,index2,index3;
  do
  {
    printf("Enter the Size of String 1: ");
    scanf("%d",&m);
    printf("Enter the Size of String 2: ");
    scanf("%d",&n);
    char S1[m],S2[n],S3[m];
    printf("\nEnter String 1: ");
    getchar();
    gets(S1);
    printf("Enter String 2: ");
    gets(S2);
    printf("\nEnter the Index from which You want to Print the String 1: ");
    scanf("%d",&index1);
    printf("Enter the Index from which You want to Print the String 2: ");
    scanf("%d",&index2);
    printf("\nString 1 is %s",&S1[index1]);
    printf("\nString 2 is %s",&S2[index2]);
    if(sizeof(S1)-strlen(S1)<strlen(S2))
    {
      printf("\n\nBuffer Overflow");
    }
    else
    {
      int i=0;
      while(strlen(S3)!=strlen(S1))
      {
        S3[i]=S1[i];
        i++;
      }
      strcat(S3,S2);
      printf("\n\nEnter the Index from which You want to Print the Concatenated String: ");
      scanf("%d",&index3);
      printf("\nConcatenated String of String 1 %s and String 2 %s is: %s",&S1[index1],&S2[index2],&S3[index3]);
    }
    printf("\n\nDo You want to Continue? (0 for No, 1 for Yes): ");
    scanf("%d",&choice);
    printf("\n");
  }while(choice);
  getch();
}

// O/p: Enter the Size of String 1: 20
//      Enter the Size of String 2: 15
//      
//      Enter String 1: Vaibhav 
//      Enter String 2: Raikwar
//      
//      Enter the Index from which You want to Print the String 1: 0
//      Enter the Index from which You want to Print the String 2: 0
//      
//      String 1 is Vaibhav
//      String 2 is Raikwar
//      
//      Enter the Index from which You want to Print the Concatenated String: 0
//      
//      Concatenated String of String 1 Vaibhav  and String 2 Raikwar is: Vaibhav Raikwar
//      
//      Do You want to Continue? (0 for No, 1 for Yes): 0
//      
//      
*/

/*
//Q.24 (ii) Write a Program to Concatenate 2 Strings without using Pre-Defined Function

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
  int m,n,choice,index1,index2,index3;
  do
  {
    printf("Enter the Size of String 1: ");
    scanf("%d",&m);
    printf("Enter the Size of String 2: ");
    scanf("%d",&n);
    char S1[m],S2[n];
    printf("\nEnter String 1: ");
    getchar();
    gets(S1);
    printf("Enter String 2: ");
    gets(S2);
    printf("\nEnter the Index from which You want to Print the String 1: ");
    scanf("%d",&index1);
    printf("Enter the Index from which You want to Print the String 2: ");
    scanf("%d",&index2);
    printf("\nString 1 is %s",&S1[index1]);
    printf("\nString 2 is %s",&S2[index2]);
    printf("\n\n");
    int len1=strlen(S1);
    int len2=strlen(S2);
    for(int i=0;i<=len2;i++)
    {
      S1[len1+i]=S2[i];
    }
    printf("concatenated String: %s",S1);
    printf("\n\nDo You want to Continue? (0 for No, 1 for Yes): ");
    scanf("%d",&choice);
    printf("\n");
  }while(choice);
  getch();
}

// O/p: Enter the Size of String 1: 20
//      Enter the Size of String 2: 15
//      
//      Enter String 1: Vaibhav
//      Enter String 2: Raikwar 
//      
//      Enter the Index from which You want to Print the String 1: 0
//      Enter the Index from which You want to Print the String 2: 0
//      
//      String 1 is Vaibhav
//      String 2 is Raikwar
//      
//      concatenated String: VaibhavRaikwar
//      
//      Do You want to Continue? (0 for No, 1 for Yes): 0
//      
//
*/


//strncat

/*
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
  char s1[30]="Vaibhav";
  char s2[10]="Raikwar";
  strcat(s1,s2);
  printf("%s",s1);
  getch();
  return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
  char s1[30]="Vaibhav";
  char s2[10]="Raikwar";
  int len1=strlen(s1);
  int len2=strlen(s2);
  for(int i=0;i<=len2;i++)
  {
    s1[len1+i]=s2[i];
  }
  printf("%s",s1);
  getch();
  return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
  int n;
  char s1[30]="Vaibhav";
  char s2[10]="Raikwar";
  printf("Enter the Value of n: ");
  scanf("%d",&n);
  strncat(s1,s2,n);
  printf("%s",s1);
  getch();
  return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
  char s1[]="Hello";
  char s2[]="Welcome";
  int value=strcmp(s1,s2);
  if(value==0)
  {
    printf("Same");
  }
  else
  {
    printf("Not same");
  }
  printf("\n%d",value);
  getch();
  return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
  char s1[]="Hello";
  char s2[]="Elcome";
  int value=strcmp(s1,s2);
  if(value==0)
  {
    printf("Same");
  }
  else
  {
    printf("Not same");
  }
  printf("\n%d",value);
  getch();
  return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
  char s1[]="Hello";
  char s2[]="Hi";
  int value=strcmp(s1,s2);
  if(value==0)
  {
    printf("Same");
  }
  else
  {
    printf("Not same");
  }
  printf("\n%d",value);
  getch();
  return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
int main()
{
  int flag=0;
  char s1[]="Hello";
  char s2[]="Hi";
  for(int i=0;s1[i]!='\0'||s2[i]!='\0';i++)
  {
    if(s1[i]!=s2[i])
    {
      flag=1;
      break;
    }
  }
  if(flag==1)
  {
    printf("Not same");
  }
  else
  {
    printf("Same");
  }
  getch();
  return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
int main()
{
  int flag=0;
  char s1[]="Hello";
  char s2[]="Hi";
  for(int i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
  {
    if(s1[i]!=s2[i])
    {
      flag=1;
      break;
    }
  }
  if(flag==1)
  {
    printf("Not same");
  }
  else
  {
    printf("Same");
  }
  getch();
  return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
  char s1[20]="Vaibhav";
  strrev(s1);
  printf("%s",s1);
  getch();
  return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
  char ch,s1[20]="Vaibhav";
  int l=strlen(s1);
  for(int i=0;i<l/2;i++)
  {
    ch=s1[i];
    s1[i]=s1[l-1-i];
    s1[l-1-i]=ch;
  }
  printf("%s",s1);
  getch();
  return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
  char ch,s1[20];
  gets(s1);
  int l=strlen(s1);
  for(int i=0,j=l-1;i<j;i++,j--)
  {
    ch=s1[i];
    s1[i]=s1[j];
    s1[j]=ch;
  }
  printf("%s",s1);
  getch();
  return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
  char s1[20];
  printf("Enter a String: ");
  gets(s1);
  strlwr(s1);
  puts(s1);
  strupr(s1);
  puts(s1);
  getch();
  return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
  char s1[30]="Vaibhav*";
  for(int i=0;s1[i]!='\0';i++)
  {
    if(s1[i]>='A'&&s1[i]<='Z')
    {
      s1[i]+=32;
    }
  }
  printf("%s",s1);
  getch();
  return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
  char s1[30]="Vaibhav*";
  for(int i=0;s1[i]!='\0';i++)
  {
    if(s1[i]>='a'&&s1[i]<='z')
    {
      s1[i]-=32;
    }
  }
  printf("%s",s1);
  getch();
  return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
  char s1[30];
  printf("Enter a String: ");
  gets(s1);
  for(int i=0;s1[i]!='\0';i++)
  {
    if(s1[i]>='A'&&s1[i]<='Z')
    {
      s1[i]+=32;
    }
    else if(s1[i]>='a'&&s1[i]<='z')
    {
      s1[i]-=32;
    }
  }
  printf("%s",s1);
  getch();
  return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
int main()
{
  float x,y;
  int a,*ptr;
  ptr=&x;
  printf("%d",ptr);
  ptr=&a;
  printf("\n%d",*ptr);
}
*/

/*
#include <stdio.h>
#include <conio.h>
int main()
{
  int a=10,b=9;
  int *p,*q;
  p=&a;
  q=&b;
  printf("%d %d",*p,*q);
  getch();
  return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
int main()
{
  int a=10,b=9;
  int *p
  p=&a,&b;
  printf("%d",*p);
  getch();
  return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
int main()
{
  int a=10,b=9;
  int *p;
  p=(&a,&b);
  printf("%d",*p);
  getch();
  return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
int main()
{
  int a=10,b=9;
  int *p;
  p=&a;
  p=&b;
  printf("%d",*p);
  getch();
  return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
int main()
{
  int a=10,b=9;
  int *p,*q;
  p=&a;
  q=&a;
  printf("%d %d",*p,*q);
  getch();
  return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
int main()
{
  int a=10,b=9;
  int *p,*q;
  p=&a;
  q=&b;
  int c=*q;
  printf("Value of a = %d",a);
  printf("\n%d",p);
  printf("\nValue of a = %d",*p);
  printf("\nAddress of a = %x",&a);
  printf("\nAddress of a = %u",&a);
  printf("\nAddress of a = %x",p);
  printf("\nAddress of p = %x\n",&p);
  printf("c = %d\n",c);
  *p=20;
  printf("a = %d\n",a);
  printf("%x",p);
  getch();
  return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
int main()
{
  int a=10,b=11;
  int *p,*q;
  p=&a;
  q=p;
  printf("a = %d %d %d\n",a,*p,*q);
  getch();
  return 0;
}
*/

/*
#include <stdio.h>
#include <conio.h>
int main()
{
  int a=10,b=11;
  int *p,*q;
  p=&a,q=&b;
  *q=*p;
  printf("a = %d %d %d\n",a,*p,*q);
  getch();
  return 0;
}
*/

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//   int a=10;
//   int* p=&a;
//   int** q=&p;
//   int*** r=&q;
//   printf("a = %d %d %d %d\n",a,*p,**q,***r);
//   **q=25;
//   printf("%d\n",**q);
//   ***r=50;
//   printf("%d %d",a,***r);
//   getch();
//   return 0;
// }