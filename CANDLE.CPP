#include<stdio.h>
#include<conio.h>
void main()
{int n,i,h[1232],l,count=0;
clrscr();
printf("enter the total no. of candels ");
scanf("%d",&n);

for(i=0;i<n;i++)
{printf("enter the height of candel %d= ",i+1);
 scanf("%d",&h[i]);
}
l=h[0];
for(i=0;i<n;i++)
{ if(h[i]>l)
   l=h[i];
}
for(i=0;i<n;i++)
{ if(l==h[i])
   count++;
}
printf("no of candles that collen can blow out is %d",count);



getch();
}