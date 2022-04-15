#include<stdio.h>
#include <math.h>
float input()
{
  float n;
  printf("Enter the Value of 'X' to find the borga^X \n");
  scanf("%f",&n);
  return n;
}
float borga_sum(float n)
{
  float x=0,y=1;
  for(int z=0;z<n;z++)
    {
      int t=1;
      for(int i=1;i<(z+2);i++)
      {
        t=t*i;
        printf("Factorial is %d \n",t);
      }
      y=pow(n,z)/t;
      if(y<.0000001)
        break;
    }
  x=x+y;
  return x;
}
void output(float n)
{
for(int i=1;i<n;i++)
  {
    printf("X^%d/%d+2! \n",i,i);
  }
  printf("Borga^X is %f \n",n);
}
int main()
{
  float x=input();
  float res=borga_sum(x);
  output(x);
  return 0;
}