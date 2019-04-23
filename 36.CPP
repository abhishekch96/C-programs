#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
clrscr();
char s[20];
int i;
cout<<"input a string"<<endl;
cin>>s;
for(i=0;s[i]!='\0';i++)
{
if(isupper(s[i]))
{
s[i]=tolower(s[i]);
}
else if(islower(s[i]))
{
s[i]=toupper(s[i]);
}
else
{
cout<<"Invailed character"<<endl;
}
}
cout<<s;
getch();
}


