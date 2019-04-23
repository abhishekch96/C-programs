#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[10],n,i;
cout<<"Enter 10 no.s"<<endl;
for(i=0;i<10;i++)
cin>>a[i];
cout<<"Enter a no. for searching. "<<endl;
cin>>n;
for(i=0;i<10;i++)
{
if(a[i]==n)
{
cout<<"No. found at "<<i<<" index position."<<endl;
break;
}
}
getch();
}