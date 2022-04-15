#include<stdio.h>
#include <math.h>
struct camel
{
 float radius,length,height,weight;
};
typedef  struct camel Camel;
 Camel input()
{
  Camel c;
  printf("Enter the radius ,length and height of camel \n");
  scanf("%f %f %f",&c.radius,&c.length,&c.height);
  return c;
}
float check(Camel c)
{
 float x,y,z;
  x=c.radius;
  y=c.length;
  z=c.height;
  if(x<z && x<y)
    return -1;
  else if(z<y && z<x)
    return 1;
  else if(y<x && y<z)
    return 2;
  else
    return 0;
}
void output(Camel c,float result)
{
  if(result==-1)
  {
    printf("Camel is Sick \n");
  }
  else if(result==1)
    printf("Camel is Happy \n");
  else if(result== 2)
    printf("Camel is tense \n");
  else
   {
     printf("Camel details doesn't exists \n");
     printf("PLEASE\n");
     printf("ReEnter the details of Camel \n");
    }
}
int main()
{
  Camel r;
  r=input();
  float result;
  result=check(r);
  output(r,result);
  return 0;
}