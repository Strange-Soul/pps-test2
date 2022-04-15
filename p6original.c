#include<stdio.h>
#include<math.h>
int input()
{
  int n;
  printf("Enter the  size of array \n");
  scanf("%d",&n);
  return n;
}
void input_n(int n, int a[n])
{ printf("Enter the array elements \n");
 for(int i=0;i<n;i++)
   {
     printf("Enter the '%d' element \n",i);
     scanf("%d",&a[i]);
   }
}
float odd_average(int n, int a[n])
{
  float sum=0;
  int k=0,j=0;
  for(int i=0;i<n;i++)
    {
      if(a[i]%2!= 0)
      {
        k=k+1;
        j=j+a[i];
      }
    }
  sum=j/k;
  return sum;
}
void output(int n, int a[n],float result) /* print all the elements of the array and then the average */ 
{ printf("Average of odd numbers as fallows \n");
  for(int i=0;i<n;i++)
    {
      if(a[i]%2!=0)
        printf("%d +\n",a[i]);
      //printf("\b%d\n",a[n-1]);
    }
  
  printf("Average of odd numbers is %f \n",result);
}
int main()
{
  int x=input();
  int p[x];
  input_n(x,p);
  float res=odd_average(x,p);
  output(x,p,res);
  return 0;
}









