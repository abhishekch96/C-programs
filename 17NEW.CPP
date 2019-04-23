#include<iostream.h>
#include<conio.h>
void main()
{int a[34],size,n,p,i;
clrscr();
cout<<"enter the size of the array ";
cin>>size;
cout<<"enter the elements of the array "<<endl;
for(i=0;i<size;i++)
cin>>a[i];
cout<<"enter the element to be insertes"<<endl;
cin>>n;
cout<<"enter the position to insert"<<endl;
cin>>p;

for(i=size;i>=p;i--)
{a[i]=a[i-1];
}
a[p-1]=n;

cout<<endl<<"new array is :-"<<endl;
for(i=0;i<=size;i++)
cout<<a[i]<<"  ";
getch();
}