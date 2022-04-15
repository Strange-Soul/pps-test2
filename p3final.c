#include<stdio.h>
#include<math.h>
struct camel
{ 
float radius, height,length,weight;
}; 
typedef struct camel Camel; 
Camel input() /* do not take weight as input from the user / float find_weight(Camel c); / pass by value */ 
{
  Camel c;
  printf("Enter the details of camel \n");
  scanf("%f %f %f",&c.radius,&c.height,&c.length);
  return c;
}
void find_weight(Camel *c) /*passing address variable */
{
  (*c).weight= 3.14 *pow(c->radius,3)* sqrt((c->height) *(c->length));
}
void output(Camel c)
{
  printf("Weight of camel is %.4f \n",c.weight);
}
int main()
{
  Camel z;
  z=input();
  find_weight(&z);
  output(z);
  return 0;
}