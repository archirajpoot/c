//write a c code area and perimeter of the rectangle
#include<stdio.h>
int area(int l,int b)
{
  
  return l*b;

}
int perimeter(int l,int b){
    
    return 2*(l+b);
}

int main()
{
  int a,b;
  int rea,peri;
  printf("enter the length and breath of the rectecangle");
  scanf("%d%d",&a,&b);
  rea=area(a,b);
  peri=perimeter(a,b);
  printf("the area is %d",rea);
  printf("the perimeter is %d",peri);
  return 0;

  

}