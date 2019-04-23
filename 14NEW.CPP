#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{clrscr();
char a[44],c;
cout<<"enter the string"<<endl;
gets(a);
cout<<"yours string is - ";
puts(a);
cout<<endl<<"enter character for search - "<<endl;
cin>>c;

int l;
l=strlen(a);
int j=0,b[121];

for(int i=0;i<l;i++)
{ if(a[i]==c)
  {b[j++]=i;
  }
}
for(i=0;i<j;i++)
{
cout<<endl<<"element '"<<c<<"' is found at position - "<<b[i]+1<<endl;
}
getch();
}
