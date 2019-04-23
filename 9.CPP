#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n;
cout<<"Enter a year"<<endl;
cin>>n;
if(n%4==0)
cout<<"Leap year"<<endl;
else
cout<<"Not a leap year"<<endl;
getch();
}