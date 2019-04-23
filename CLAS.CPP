#include<iostream.h>
#include<conio.h>

class math
{int x,y,z;
public:
void get()
{cin>>x>>y;
}
void put()
{cout<<"result="<<z<<endl;
}
void add()
{z=x+y;
put();
}
void sub()
{z=x-y;
put();}
void mul()
{z=x*y;
put();
}
void div()
{z=x/y;
put();
}
};
void main()
{   clrscr();
math ob;
ob.get();
ob.add();
getch();
ob.sub();
getch();
ob.mul();
getch();
ob.div();
getch();

}