#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,sum=0,d;
cout<<"Enter Number"<<endl;
cin>>n;
while(n!=0)
{
d=n%10;
sum=sum+d;
n=n/10;
}
cout<<"Sum = "<<sum<<endl;
getch();
}