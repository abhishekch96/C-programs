#include<iostream.h>
#include<conio.h>
#include<math.h>
long int calfact (int x)
{int i;
long int y=x;
for(i=x-1;i>0;i--)
 { y=y*i;
 }
return y;
}
float series(int x, int l)
{ float s=0,i;
 for(i=1;i<=l;i++)
 {  s= s+(-1*(pow(-1,i)*(pow(x,i)/calfact(i))));
 }
 return s;
}
void main()
{ clrscr();
   int n,l;
cout<<"enter no.";
cin>>n;
cout<<"enter limit";
cin>>l;
cout<<series(n,l);
getch();
}

