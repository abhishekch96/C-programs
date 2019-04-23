//PROGRAM TO ADD TWO INTEGERS AND SUBTRACT FROM THIRD

#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
  int a,b,c;
  cout<<"Enter first number  ";
  cin>>a;
  cout<<"\nEnter second number  ";
  cin>>b;
  cout<<"\nEnter third number  ";
  cin>>c;
  cout<<"\n\n\t\t\t"<<c<<"-("<<b<<"+"<<a<<")="<<c-(a+b);
  getch();
}
