#include<stdio.h>
#include<conio.h>
void main()
{int n,k,x=0,b,t,i,c[323];
clrscr();
printf("enter the no of items orderd\n");
scanf("%d",&n);
printf("\nenter the index position of item that anaa doesn't eat\n");
scanf("%d",&k);

for(i=0;i<n;i++)
{printf("enter the cost of item %d ",i+1);
scanf("%d",&c[i]);
}
for(i=0;i<n;i++)
{ if(i==k)
    {continue;
    }
    else
     x=x+c[i];
}
x=x/2;

printf("enter the amount that brian charge anna");
scanf("%d",&b);

t=b-x;
printf(" anna has overcharge by %d",t);
getch();
}