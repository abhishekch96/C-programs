#include<iostream.h>
#include<conio.h>
class bank
{ int an;
char cname[50];
int bal;
public:
void openac()
{cout<<"enter account no., customer name and balance resp.";
cin>>an>>cname>>bal;
}
void printac()
{cout<<endl<<"account no.= "<<an<<endl<<"customer name= "<<cname<<endl<<"balance= "<<bal;
}
void withdraw()
{cout<<endl<<"enter the amount to be withdraw";
int x;
cin>>x;
bal-=x;
}
void deposite()
{cout<<endl<<"enter the amount to be deposite";
int x;
cin>>x;
bal+=x;
}
};

void main()
{ bank ob;
clrscr();
ob.openac();
ob.printac();
ob.withdraw();
ob.printac();
ob.deposite();
ob.printac();

getch();
}

