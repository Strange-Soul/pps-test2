#include<stdio.h>
#include<math.h>
int input()
{
  int x;
  printf("enter the value of x for the borga series\n");
  scanf("%d",&x); 
  return x;
}
float calc_sum(int x)
{
  float y,t=1,e=0;
  for (int z=0;;z++)
  {
      int q=1;
      for (int i=1;i<(2*z+2);i++)
      {
          q=q*i;
      }
      t=pow(x,z)/q;
      if(t<0.000001)
      {
        break;
      }
      e=e+t;
  }
  return e;
} 
void output(float e)
{
  printf("the sum obtained is %f\n",e);
}
int main()
{
  int x;
  float e;
  x=input();
  e=calc_sum(x);
  output(e);
  return 0;
}