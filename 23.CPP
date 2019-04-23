#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int f=1,n,i;
cout<<"Enter a no."<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
f=f*i;
}
cout<<"Factorial value = "<<f<<endl;
getch();
}


