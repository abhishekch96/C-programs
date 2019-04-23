#include<stdio.h>
#include<conio.h>
void main()
{
 int n[10],i,sum=0,a,b;
 printf("enter any array");
 for(i=0;i<10;i++)
 {
  scanf("%d",&n[i]);
 }
  a=i;
 for(i=0;i<10;i++)
 {
  b=i%10;
  sum=sum*10+b;
  i=i/10;
 }
 if(sum==a)
  printf("the number is handsome");
 else
  printf("the number is not handsome");
getch();
}
