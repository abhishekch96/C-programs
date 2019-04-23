#include<iomanip.h>
#include<stdio.h>
#include<iostream.h>
#include<conio.h>

long double add(long double r1, long double r2)
{long double r=0.0;
r=r1+r2;
return r;
}
long double mul(long double m1,long double m2)
{long double m=1.0;
 if(m1==0.0)
 m1=1.0;
else if(m2==0.0)
 m2=1.0;

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
{long double n=0.0,n1=0.0,n2=0.0;
char c,p;
float m=1;
clrscr();
while(1)
{c=getch();
 cout<<c;
 if(c=='1')
 {n=n*10+1.0;
 }
 else if(c=='2')
 {n=n*10+2.0;
 }
 else if(c=='3')
 {n=n*10+3.0;
 }
 else if(c=='4')
 {n=n*10+4.0;
 }
 else if(c=='5')
 {n=n*10+5.0;
 }
 else if(c=='6')
 {n=n*10+6.0;
 }
 else if(c=='7')
 {n=n*10+7.0;
 }
 else if(c=='8')
 {n=n*10+8.0;
 }
 else if(c=='9')
 {n=n*10+9.0;
 }
 else if(c=='0')
 {n=n*10+0.0;
 }
 else if(c=='.')
  {
      for(m=0.1;1;m=m/10)
      {
       c=getch();
       cout<<c;

       if(c=='1')
	{n=n+(1*m);
	}
	else if(c=='2')
	{n=n+(2*m);
	}
	else if(c=='3')
	{n=n+(3*m);
	}
	else if(c=='4')
	{n=n+(4*m);
	}
	else if(c=='5')
	{n=n+(5*m);
	}
	else if(c=='6')
	{n=n+(6*m);
	}
	else if(c=='7')
	{n=n+(7*m);
	}
	else if(c=='8')
	{n=n+(8*m);
	}
	else if(c=='9')
	{n=n+(9*m);
	}
	else if(c=='0')
	{n=n+(0*m);
	}
	else if(c=='+')
	{n2=n;
	 n1=add(n1,n2);
	 n=0.0;
	 p='a';
	 break;
	}
	else if(c=='*')
	{n2=n;
	 n1=mul(n1,n2);
	 n=0.0;
	 p='m';
	 break;
	 }
	else if(c==13)
	{n2=n;
	if(p=='a')
	 cout<<endl<<setw(60)<<"="<<add(n1,n2);
	else if(p=='m')
	 cout<<endl<<setw(60)<<"="<<mul(n1,n2);
	 p='q';
	 break ;
	}

      }
}

   else if(c=='+')
   { n2=n;
    if(p=='a')
     {n1=add(n1,n2);
     }
    else if(p=='m')
     {n1=mul(n1,n2);
     }
    n=0.0;
    p='a';
  }
   else if(c=='*')
    {if(p=='a')
      {n2=n;
       n1=add(n1,n2);
      }
     else if(p=='m')
     {n2=n;
      n1=mul(n1,n2);
     }
    n=0.0;
    p='m';
    }
   else if(c==13)
   {n2=n;
   if(p=='a')
   cout<<endl<<setw(60)<<"="<<add(n1,n2);
    else if(p=='m')
    cout<<endl<<setw(60)<<"="<<mul(n1,n2);
    break;
   }
   else if(p=='q')
   {break;
   }
   else
   {cout<<"invalid key";
   }
}

getch();
}