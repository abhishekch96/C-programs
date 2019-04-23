#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,d,netamt;
cout<<"Enter the amount"<<endl;
cin>>a;
if(a<=500)
d=0;
else if(a>500 && a<=1000)
d=1*a/100;
else if(a>1000 && a<=5000)
d=2*a/100;
else
d=5*a/100;
netamt=a-d;
cout<<"Amount = "<<a<<endl<<"Discount = "<<d<<endl<<"Net Amount = "<<netamt;
getch();
}