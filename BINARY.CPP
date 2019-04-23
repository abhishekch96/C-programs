#include<iostream.h>
#include<conio.h>
void main()
{     clrscr();
int q=0;
int a=10,b=8;
int c,count=0,i;
c=a^b;
if(a>b)
{
while(a)
{ i=a;
a>>=1;
count++;
}
}
else if(b>a)
{
while(b)
{ i=b;
b>>=1;
count++;
}
}
if(i==1)
{
 q=1;
while(count-1>0)
{
q=q*2;
count--;
}
}
c=c+q;
cout<<c;
getch();
}