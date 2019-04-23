#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float r1,r2,b,a,c;
cout<<"Enter the value of a,b,c"<<endl;
cin>>a>>b>>c;
r1=(-b+sqrt(b*b-4*a*c)/2*a);
r2=(-b-sqrt(b*b-4*a*c)/2*a);
cout<<"Roots of quadratic equations are "<<r1<<" & "<<r2<<endl;
getch();
}
