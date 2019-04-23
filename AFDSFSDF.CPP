#include<iostream.h>
#include<conio.h>
class math
{int a,b;
 public:
 math()
 {a=45;
 b=54;
 cout<<"hii"<<endl;
 }
~math()
{cout<<"byeeeeeeee";
}
 void print()
 {cout<<endl<<"a= "<<a<<"\t\tb= "<<b;
 }
 };
 void main()
 {clrscr();
 math m1;
   {math m2;
    {math m3;
      {math m4;
      }
    }
   }
 getch();
 }