#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,t;
cout<<"Enter the value of two no.s"<<endl;
cin>>a>>b;
t=a;
a=b;
b=t;
cout<<"After swaping the value of two no. = "<<"a is "<<a<<" & b is "<<b<<endl;
getch();
}