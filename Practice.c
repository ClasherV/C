#include<stdio.h>
const int ASIZE = 5;
float average (int B[ ])
{
int i, total=0;
for (i=0; i<ASIZE; i++)
    total = total + B[i];
return ((float) total / (float) ASIZE);
}

void main ()
{
    int x[ASIZE];
 float x_avg;
  x[0]=10;
  x[1]=20;
  x[2]=30;
  x[3]=40;
  x[4]=50;
  x_avg = average (x) ;
  printf("%f",x_avg);
}