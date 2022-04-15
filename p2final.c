#include<stdio.h>
#include<math.h>
/*float input_radius()
{
  float r;
  printf("Enter the  stomach radius of  camel \n");
  scanf("%f",&r);
  return r;
}
float input_heigth()
{
  float h;
  printf("Enter the height of camel \n");
  scanf("%f",&h);
  return h;
}
float input_length()
{
  float l;
  printf("Enter the length of camel \n");
  scanf("%f",&l);
  return l;
}*/
void input_camel_details(float *radius, float *height, float *length)
{
  printf("Enter the stomach radius , height,length of camel \n");
  scanf("%f %f %f",radius,height,length);
}

float find_weight(float radius, float height, float length)
{
  float w;
  w=3.14*(pow(radius,3))*(sqrt(height*length));
  return w;
}

void output(float radius, float height, float length, float weight)
{
  printf("Weight of camel having radius=%.3f, height=%.3f, and length=%.3f\n is %2.f \n",radius,height,length,weight);
}
int main()
{
  float x,y,z,res;
 /* x=input_radius();
  y=input_heigth();
  z=input_length();*/
  
  input_camel_details(&x,&y,&z);
  res=find_weight(x,y,z);
  output(x,y,z,res);
  return 0;
}