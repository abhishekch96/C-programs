#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a=0,b=1,c=0,n;
cout<<"enter a no"<<endl;
cin>>n;
cout<<a<<" "<<b<<" ";
while(c<=n)
{
c=a+b;
cout<<c<<" ";
a=b;
b=c;
}
getch();
}