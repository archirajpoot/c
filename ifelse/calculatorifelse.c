#include<stdio.h>
int main()
{
  int a,b,c;
  char ch;
  printf("enter two numbers");
  scanf("%d%d",&a,&b);
  printf("enter your oprator");
  scanf(" %c ",&ch);
  if(ch =='+')
  {
    c=a+b;
    printf("%d",c);
  }
  else if(ch =='-')
  {
    c=a-b;
   printf("%d",c);
  }
  else if(ch =='*')
  {
    c=a*b;
    printf("%d",c);
  }
  else if (ch =='/'){
    if(b==0)
    {
      printf("division cant be done");
    }
    else{
      printf("%d",a/b);
    }
  }
  return 0;
}