#include<stdio.h>
#include<conio.h>
void main ()
{
float p,r,t,i;
clrscr();
printf("enter the principal,rate and time");
scanf("%f%f%f",&p,&r,&t);
i=p*r*t/100;
printf("the simple intrest=%f",i);

getch();
}