#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
 int i,sum=0;
 int a[10];
 clrscr();
 printf("enter amy array element");
 for(i=0;i<10;i++)
 {
    scanf("%d",&a[i]);
  }
   for(i=0;i<10;i++)
  {
  delay(100);
  sum=sum+a[i];
 printf("%d",a[i]);
  }
 printf("\n");
 printf("\n");
printf("The Sum Of Array Is=%d",sum);
getch();
}