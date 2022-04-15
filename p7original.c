#include <stdio.h>
void input(char *v)
   { 
     printf("enter the name\n");
     scanf("%s",v);
   }
int charcmp(char *v)
   {
     int i,j=0,k=0;
     /*for( i=0;v[i] !='\0';i++);
     {
       if (v[i]==('a'||'A')  ||  v[i]==('e'||'E') ||  v[i]==('i'||'I') ||  v[i]==('o'||'O') ||  v[i]==('u'||'U'))
       j=j+1;
       else 
       k=k+1;
     }*/
    while (*v!='\0')
     {
       if (v[i]==('a')  ||  v[i]==('e') ||  v[i]==('i') ||  v[i]==('o') ||  v[i]==('u') || v[i]==('A')  ||  v[i]==('E') ||  v[i]==('I') ||  v[i]==('O') ||  v[i]==('U'))
       j++;
       else
       k++;
       v++;
     }
     if(j>=2  &&  k>=2)
     return 0;
     else
     return 1;
   }
void output(int t,char *v)
{
  if(t==0)
  printf("the name %s is a nice name\n",v);
  else
  printf("the name %s is not a nice name\n",v);
}
int main()
{
  char v[25];
  int t;
  input(v); 
  t=charcmp(v);
  output(t,v);
  return 0;
}