#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{clrscr();
char s[20],*rs;
cout<<"input string"<<endl;
cin>>s;
rs=strrev(s);
if(strcmp(s,rs)==0)
cout<<"pallindrome"<<endl;
else
cout<<"not pallindrom"<<endl;
getch();
}