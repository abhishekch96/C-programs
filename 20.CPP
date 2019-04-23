#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,rn=0,d,tn;
cout<<"enter number"<<endl;
cin>>n;
tn=n;
while(tn!=0)
{
d=tn%10;
rn=rn*10+d;
n=tn/10;
}
if(n==rn)
cout<<"number is pallindrome"<<endl;
else
cout<<"not pallindrome"<<endl;
getch();
}