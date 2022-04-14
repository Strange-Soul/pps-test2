#include<stdio.h>
#include<math.h>
void input(float *x,float *y)
{
  printf("Enter the 'x' and 'y' of points \n");
  scanf("%f %f",x,y);
}
float find_distance(float x1,float y1,float x2,float y2)
{
  float dist;
  dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
  return dist;
}
void output(float x1,float y1,float x2,float y2,float distance)
{
  printf("Distance between the two points (%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,distance);
}
int main()
{
  float a1,a2,b1,b2,result;
  input(&a1,&b1);
  input(&a2,&b2);
  result=find_distance(a1,b1,a2,b2);
  output(a1,b1,a2,b2,result);
    return 0;
}