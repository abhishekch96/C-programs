#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void main()
{
clrscr();
char ch;
cout<<"Press a key"<<endl;
cin>>ch;
if(isalpha(ch))
cout<<"Alphabet"<<endl;
else if(isdigit(ch))
cout<<"Digit"<<endl;
else
cout<<"Special character"<<endl;
getch();
}