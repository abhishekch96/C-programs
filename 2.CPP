#include<iostream.h>
#include<conio.h>
class rectangle
{float l,b,a,p;
void area();
void perimeter();
public:
void input();
void display();
};
void rectangle::area()
{
a=l*b;
}
void rectangle::perimeter()
{
p=2*l+2*b;
}
void rectangle::input()
{
clrscr();
cout<<"enter the length and breadth of rectangle"<<endl;
cin>>l>>b;
area();
perimeter();
}
void rectangle::display()
{
clrscr();
cout<<"length of rectangle = "<<l<<endl;
cout<<"breadth of rectangle = "<<b<<endl;
cout<<"area of rectangle = "<<a<<endl;
cout<<"perimeter of rectangle = "<<p<<endl;
getch();
}
void main()
{
rectangle ob;
ob.input();
ob.display();
}