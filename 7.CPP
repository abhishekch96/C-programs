#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
cout<<"Enter the value of three no.s"<<endl;
cin>>a>>b>>c;
if(a>b && a>c)
cout<<"a is greater"<<endl;
else if(b>c)
cout<<"b is greater"<<endl;
else
cout<<"c is greater"<<endl;
getch();
}