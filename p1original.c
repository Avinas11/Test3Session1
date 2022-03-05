#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("ENTER NUMERATOR OF FRACTION 1: \n");
  scanf("%d",num1);
  printf("ENTER DENOMINATOR OF FRACTION 1: \n");
  scanf("%d",den1);
  printf("ENTER NUMERATOR OF FRACTION 2: \n");
  scanf("%d",num2);
  printf("ENTER DENOMINATOR OF FRACTION 2: \n");
  scanf("%d",den2);
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  int max,temp=1;
  max=(den1>den2)?den1:den2;
  while(temp)
  {
  if(max%den1==0&&max%den2==0)
  {
    *den3=max;
    break;
  }
  ++max;
}
  *num3=(*den3*num1)/den1+(*den3*num2)/den2;
  }
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("%d/%d + %d/%d = %d/%d",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int x1,y1,x2,y2,x3,y3;
  input(&x1,&y1,&x2,&y2);
  add(x1,y1,x2,y2,&x3,&y3);
  output(x1,y1,x2,y2,x3,y3);
  return 0;
}