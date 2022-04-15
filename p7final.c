#include<stdio.h>
void input_name( char *c)
{
  printf("Enter any Name \n");
  scanf("%s",c);
}
int check_name(char *c)
{
  int i;
int upper=(c[i]=='A' ||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U'||c[i]=='Z'||c[i]=='B'||c[i]=='T'||c[i]=='G');
  
int lower=(c[i]=='a' ||c[i]=='e' ||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='z'||c[i]=='b'||c[i]=='t'||c[i]=='g');
  for(i=0;c[i]!='\0';i++)
    {
      if(upper || lower)
        return 1;
    }
 return 0;
}
void output(char *c,int name)
{
  if(name==1)
  {
    printf("%s is Nice Name \n",c);
  }
  else
    printf("%s is not a Nice Name \n",c);
}
int main()
{
  char s[20];
  input_name(s);
  int res=check_name(s);
  output(s,res);
  return 0;
}