#include<stdio.h>
#include <math.h>
struct camel
{
float radius,height,length,weight;
};
typedef struct camel Camel;

float input_truck_weight()
{
  float w;
  printf("Enter the weight of truck \n");
  scanf("%f",&w);
  return w;
}
int input_no_camels()
{
  int n;
  printf("Enter the number of Camels \n");
  scanf("%d",&n);
  return n;
}
void input_camel_details(int n, Camel c[n])
{
  printf("Enter the details of '%d' Camel \n",n);
  for(int i=0;i<n;i++)
   {
      printf("Enter the details of '%d' Camel\n",i);
     scanf("%f %f %f",&c[i].radius,&c[i].length,&c[i].height);
      c[i].weight= 3.14 *pow(c[i].radius,3) * sqrt(c[i].height * 
    c[i].length);
      printf("Weight of '%d' Camel is %f \n",i,c[i].weight);
   }
}
float comput_total_weight(int n, Camel c[n], float truck_weight)
{
  float totaltruckw=0,camelw=0;
  for(int i=0;i<n;i++)
    {
      camelw+=c[i].weight;
    }
  totaltruckw=camelw+truck_weight;
  return totaltruckw;
}
void output(float total_truck_weight)
{
printf("Total weight of Truck is %f \n",total_truck_weight);
}
int main()
{
  float t=input_truck_weight();
 int n=input_no_camels();
  Camel l[n];
  input_camel_details(n,l);
  float res=comput_total_weight(n,l,t);
  output(res);
  return 0;
}