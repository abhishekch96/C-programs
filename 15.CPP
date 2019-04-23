#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float bp,da,hra,pf,ns;
cout<<"Enter Basic pay "<<endl;
cin>>bp;
if(bp<10000)
{
da=60*bp/100;
hra=10*bp/100;
pf=10*bp/100;
}
else if(bp>10000 && bp<=20000)
{
da=80*bp/100;
hra=20*bp/100;
pf=12*bp/100;
}
else
{
da=80*bp/100;
hra=10000;
pf=15*bp/100;
}
ns=bp+da+hra-pf;
cout<<"Basic pay = "<<bp<<endl;
cout<<"DA = "<<da<<endl;
cout<<"HRA = "<<hra<<endl;
cout<<"Profit = "<<pf<<endl;
cout<<"Net Salary = "<<ns<<endl;
getch();
}