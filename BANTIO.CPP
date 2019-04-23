#include<stdio.h>
#include<conio.h>
void main()
{
float p,q,r;
printf("enter any largest n:-");
scanf("%f%f%f",&p,&q,&r);
if(p>q)
{
if(p>r)
printf("%f is largest n:-",p);
else
printf("%f is largest  :-",r);
}
else
if(q>p)
{
if(q>r)
printf("%f is largest n:-",q);
else
printf("%f is largest  :-",r);
}
else
printf("%f is largest n:-",r);
getch();
}