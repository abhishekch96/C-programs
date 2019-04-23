#include<iostream.h>
#include<conio.h>
int add(int r1,int r2)
{int r=0;
r=r1+r2;
return r;
}
int mul(int m1,int m2)
{int m=1;
m=m1*m2;
return m;
}
int cald(int c)
{
 for(int m=1;c!=0;m++)
 {c=c/10;
 }
 return m;
}
void main()
{long n1,n2=0;
int i,j;
  clrscr();
  char ch;
  cin>>n1;

 while(ch!='q')
 {
  ch=getch();
  if(ch=='+')
  {gotoxy(cald(n1)+1,1);
   cout<<" + ";
   cin>>n2;
 n1=add(n1,n2);
 }
  else if(ch=='*')
  {cout<<"*";
   cin>>n2;
   n1=mul(n1,n2);
   }
 }

cout<<n1;
getch();
}