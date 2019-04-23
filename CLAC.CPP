#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<dos.h>


int add(int r1, int r2)
{int r=0;
r=r1+r2;
return r;
}
void line_hor(int column1,int column2,int row)
{char ch=219;
  for(column1;column1<=column2;column1++)
   {gotoxy(column1,row);
    cout<<ch;
    }
}
void line_ver(int row1, int row2, int column)
{
   for ( row1; row1<=row2; row1++ )
   {  char cv=219;
      gotoxy(column,row1) ;
      cout <<cv ;
   }
}

class start
{
void student_details();
public:
int option,st_option;
void welcome();
void menu();
void choice();
void call();
void close();
void st_menu();
void sc_menu();
void con_menu();
void st_choice();
void addition();
void st_call();
};



void start::welcome()
{

  for(int i=0;i<30;i++)
  {  sound(i*60);
     line_hor(1,80,1);
     line_hor(1,80,24);
     line_ver(1,24,1);
     line_ver(1,24,80);
    textcolor(GREEN);  //set GREEN color
    gotoxy(29,5);
    cprintf("welcome to..........");
    gotoxy(10,10);
    textcolor(13);
    cprintf("***********************************************************");
   gotoxy(10,14);
    cprintf("***********************************************************");
   gotoxy(15,12);
    textcolor(i); //to change the color from(0-15)
   cprintf("* SCINTIFIC CALCULATOR AND CONVERTER *");
   textcolor(BLUE);
   gotoxy(38,19);
   cprintf("Developed by......");
   gotoxy(38,20);
   textcolor(11);
   cprintf("***********************************");
   gotoxy(57,21);
   textcolor(i);
   cprintf("A");
   textcolor(i+1);
   cprintf("B");
   textcolor(i+2);
   cprintf("H");
   textcolor(i+3);
   cprintf("I");
   textcolor(i+4);
   cprintf("S");
   textcolor(i+5);
   cprintf("H");
   textcolor(i+6);
   cprintf("E");
   textcolor(i+7);
   cprintf("K");
   textcolor(i+8);
   cprintf(" ");
   textcolor(i+9);
   cprintf("C");
   textcolor(i+10);
   cprintf("H");
   textcolor(i+11);
   cprintf("A");
   textcolor(i+12);
   cprintf("U");
   textcolor(i+13);
   cprintf("H");
   textcolor(i+14);
   cprintf("A");
   textcolor(i+15);
   cprintf("N");
   delay(300);
   clrscr();
   nosound();
   }
delay(1000);
}
void start::menu()
{
 line_hor(1,80,1);
 line_hor(1,80,24);
 line_ver(1,24,1);
 line_ver(1,24,80);
 line_hor(25,57,6);
 line_hor(25,57,17);
 line_ver(6,17,25);
 line_ver(6,17,57);
 gotoxy(37,8);
 textcolor(GREEN);
 cprintf("OPTIONS");
 gotoxy(27,9);
 textcolor(BLUE);
 cprintf("-----------------------------");
 gotoxy(30,10);
 textcolor(RED);
 cprintf("STANDARD CALCULATOR");
 delay(200);
 gotoxy(30,11);
 cprintf("SCINTIFIC FACULTY ");
 delay(200);
 gotoxy(30,12);
 cprintf("CONVERTER");
 delay(200);
 gotoxy(30,13);
 cprintf("HELP");
 delay(200);
 gotoxy(30,14);
 cprintf("ABOUT SOFTWARE");
 delay(200);
 gotoxy(30,15);
 cprintf("EXIT");
 gotoxy(3,23);
 char z1=24,z2=25;
 cout<<z1<<z2;
 textcolor(CYAN);
 cprintf(" - MOVE");
 choice();
}

void start::choice()
{ int n=10,c;
char a=175,ch;

gotoxy(27,n);
cout<<a;
while(1)
{ch=getch();
 sound(700);
 delay(50);
 nosound();
if(ch==13)
{c=n;
break;
}
else if(ch==0)
{n=n+1;
 if(n==16)
 {n=10;
 gotoxy(27,15);
 cout<<" ";
 }
gotoxy(27,n-1);
cout<<" ";
 gotoxy(27,n);
 cout<<a;
}}
option=c;
call();
}
void start::call()
{
 if(option==15)
 {close();
 }
 else if(option==10)
 {st_menu();
 }
}
void start::st_menu()
{clrscr();
 line_hor(1,80,1);
 line_hor(1,80,24);
 line_ver(1,24,1);
 line_ver(1,24,80);
 line_hor(25,57,6);
 line_hor(25,57,17);
 line_ver(6,17,25);
 line_ver(6,17,57);
 gotoxy(37,8);
 textcolor(GREEN);
 cprintf("OPTIONS");
 gotoxy(27,9);
 textcolor(BLUE);
 cprintf("-----------------------------");
 gotoxy(30,10);
 textcolor(RED);
 cprintf("ALL OPERATIONS");
 delay(200);
 gotoxy(30,11);
 cprintf("ADDITION");
 delay(200);
 gotoxy(30,12);
 cprintf("SUBSTRACTION");
 delay(200);
 gotoxy(30,13);
 cprintf("MULTIPLICATION");
 delay(200);
 gotoxy(30,14);
 cprintf("DIVISION");
 delay(200);
 gotoxy(30,15);
 cprintf("EXIT");
 gotoxy(3,23);
 char z1=24,z2=25;
 cout<<z1<<z2;
 textcolor(CYAN);
 cprintf(" - MOVE");
 st_choice();
}
void start::st_choice()
{ int n=10,c;
char a=175,ch;

gotoxy(27,n);
cout<<a;
while(1)
{ch=getch();
 sound(700);
 delay(50);
 nosound();
if(ch==13)
{c=n;
break;
}
else if(ch==0)
{n=n+1;
 if(n==16)
 {n=10;
 gotoxy(27,15);
 cout<<" ";
 }
gotoxy(27,n-1);
cout<<" ";
 gotoxy(27,n);
 cout<<a;
}}
st_option=c;
st_call();
}
void start::st_call()
{if(st_option==15)
 {close();
 }
 else if(st_option==10)
 {addition();
 }
}
void start::addition()
{clrscr();
 long double n1,n2;
 line_hor(1,80,1);
 line_hor(1,80,24);
 line_ver(1,24,1);
 line_ver(1,24,80);
 gotoxy(3,3);
 cprintf("type the numbers and press enter for sum ");
 gotoxy(3,24);
 cprintf("press esc to go back and '=' to get result");
 gotoxy(3,4);
 char w='+';

 cin>>n1;
 while(1)
 {
 if(w=='+')
 {cin>>n2;
 n1=add(n1,n2);
 }
 else if(w==13)
 {cout<<endl<<n1;
 }
 else if(w=='q')
 {exit(0);
 }
 w=getch();
}
}

void start::close()
{clrscr();
 line_hor(1,80,1);
 line_hor(1,80,24);
 line_ver(1,24,1);
 line_ver(1,24,80);
 gotoxy(10,5);
 textcolor(MAGENTA);
 cprintf("****  KENDRIYA VIDHAYLYA NO.-1, SECTOR 30, GANDHINAGAR  ****");
 delay(500);
 gotoxy(35,12);
 textcolor(GREEN);
 cprintf("THANK YOU");
 delay(500);
 gotoxy(47,19);
 textcolor(RED);
 cprintf("HAVE A NICE DAY DEAR .....");
 delay(3000);
 exit(0);
}


void main()
{clrscr();
start ob;

ob.menu();

getch();
}