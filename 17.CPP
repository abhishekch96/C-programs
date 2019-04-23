#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
int num[10],t,i,j;
cout<<"Enter the 10 no.s"<<endl;
for(i=0;i<10;i++)
{
cin>>num[i];
}
for(i=0;i<10;i++)
{
for(j=i;j<10;j++)
{
if(num[i]>num[j])
{
t=num[i];
num[i]=num[j];
num[j]=t;
}
}
}
cout<<"Your Sorted values are "<<endl;
for(i=0;i<10;i++)
cout<<num[i]<<endl;
getch();
}
