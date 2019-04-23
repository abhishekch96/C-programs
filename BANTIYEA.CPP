#include<stdio.h>
#include<conio.h>
void main()
{
int y;
printf("enter year:");
scanf("%d",&y);
if(y%100==0)
{
if(y%400==0)
printf("% is leap year",y);
else
printf("%d is not leap leap",y);
}
else
{
if(y%4==0)
printf("%d is leap year",y);
else
printf("%d is not leap year",y);
}
getch();
}