#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void main()
{
clrscr();
char ch;
cout<<"Enter a character"<<endl;
cin>>ch;
if(isupper(ch))
cout<<"Upper Case"<<endl;
else if(islower(ch))
cout<<"Lower Case"<<endl;
else
cout<<"Invaid key"<<endl;
getch();
}