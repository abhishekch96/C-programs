#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,n,count=0;
cout<<"enter a no"<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==2)
cout<<"Prime no."<<endl;
else
cout<<"not prime number"<<endl;
getch();
}