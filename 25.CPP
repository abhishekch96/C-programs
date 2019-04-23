#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{int i,n=20;
float x,val,sum,t;
clrscr();
cout<<"enter the angle";
cin>>x;
x=x*3.1412/180;
val=x;
x=x*3.14/180;
t=x;
sum=x;
for(i=1;i<n+1;i++)
{t=t*pow((double)(-1),(double)(2*i-1))*x*x/(2*i*(2*i-1));
sum=sum+t;
}
cout<<"value of sin is";
cout<<val<<sum;
getch();
}