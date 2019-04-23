//**********************************************************
//                PROJECT SCHOOL MANAGMENT
//**********************************************************


//**********************************************************
//	INCLUDED HEADER FILES
//**********************************************************
#include<ctype.h>
#include<string.h>
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<dos.h>


//****************************************************************************
//  FUNCTION NAME - LINE_HOR(INT,INT,INT)
//        PURPOSE - TO DRAW THE HORIZONTAL LINES
//           WORK - INPUT TWO COLUMNS AND A ROW
//****************************************************************************

void line_hor(int column1,int column2,int row)
{
char ch=219;
  for(column1;column1<=column2;column1++)
   {
   gotoxy(column1,row);
    cout<<ch;
    }
}


//****************************************************************************
//  FUNCTION NAME - LINE_VER(INT,INT,INT)
//        PURPOSE - TO DRAW THE VERTICALS LINES
//           WORK - INPUT TWO ROWS AND A COLUMN
//****************************************************************************

void line_ver(int row1, int row2, int column)
{
   for ( row1; row1<=row2; row1++ )
   {  char cv=219;
      gotoxy(column,row1) ;
      cout <<cv ;
   }
}


//****************************************************************************
// CLASS NAME - STUDENT
//       USES - THIS CLASS IS TO THE OPERATION RELATED TO STUDENT
// FUNCTIONS - ADD(),MODIFY(), ST_MODIFY(),ST_OUT(), GETDATA(), DISPLAY(),etc
//****************************************************************************
class student
{public:
int  adno;
int  clas;
char name[100];

char gender[10];
char section;
int  rn;
char fname[100];
char mname[100];
char paddress[150];
char taddress[150];
char mno1[11];
char tno[11];

int getadno()
{return adno;
}
int getrn()
{return rn;
}
void getdata();
void display();
void add();
void st_out();
void st_modify();
void modify();
};


//****************************************************************************
// class name - start
//        uses- to start the program and select the choice
//   function - welcome(), close(), open(), call(), menu(), choice()
//****************************************************************************
class start
{
public:
int option;
void open();
void welcome();
void close();
int call();
void menu();
void choice();
};


//****************************************************************************
// function - getdata()
//    class - student
//      use - to get details of student
//****************************************************************************

void student::getdata()
{ clrscr();
  line_hor(1,80,1);
  line_hor(1,80,24);
  line_ver(1,24,1);
  line_ver(1,24,80);
   textcolor(YELLOW);
  gotoxy(10,2);
  cprintf("Enter the details of the student");
   textcolor(RED);
  gotoxy(3,4);
  cprintf("Enter the admission no. of the student");
  cin>>adno;
 gotoxy(3,5);
 cprintf(" Enter the name of the student  ");
 gets(name);
 gotoxy(3,6);
 cprintf(" Enter the father's name of the student  ");
 gets(fname);
 gotoxy(3,7);
 cprintf(" Enter the mother's name of the student  ");
 gets(mname);
 gotoxy(3,8);
 cprintf(" Enter the permanent address of the student  ");
 gets(paddress);
 gotoxy(3,9);
 cprintf(" Enter the temprary address of the student  ");
 gets(taddress);

 m:
 gotoxy(3,10);
 cprintf(" Enter the moble no. of the student  ");
 cin>>mno1;
  if(strlen(mno1)<10||strlen(mno1)>10)
   { textcolor(YELLOW);
   for(int u=0;u<5;u++)
   {  gotoxy(5,20);
     cprintf(" Re-enter the moble no. of the student  ");
     delay(250);
     gotoxy(5,20);
     cprintf("                                         ");
     delay(100);
   }
   gotoxy(5,20);
     cprintf(" Re-enter the moble no. of the student  ");
     textcolor(RED);
     gotoxy(38,10);
     cprintf("                          ");
     goto m;
  }
  else
   {gotoxy(5,20);
    cprintf("                                                          ");
   }

 n:
 gotoxy(3,11);
 cprintf(" Enter Telephone no. of the student  ");
 cin>>tno;
 if(strlen(tno)<10||strlen(tno)>10)
 { textcolor(YELLOW);
   for(int u=0;u<5;u++)
   {gotoxy(5,20);
    cprintf(" Re-enter the Telephone no. of the student  ");
    delay(260);
    gotoxy(5,20);
    cprintf("                                                 ");
    delay(80);
   }
    gotoxy(5,20);
    cprintf(" Re-enter the Telephone no. of the student  ");

    textcolor(RED);
    gotoxy(45,11);
    cprintf("                          ");
   goto n;
 }
 else
 {gotoxy(5,20);
 cprintf("                                                          ");
 }

 o:
 gotoxy(3,12);
 cprintf(" Enter the class of the student (1-5)  ");
 cin>>clas;

 if(clas>5||clas<1)
 {textcolor(YELLOW);
   for(int u=0;u<5;u++)
  {
   gotoxy(5,20);
   cprintf(" Re-enter the class of the student (1-5) ");
   delay(270);
   gotoxy(5,20);
   cprintf("                                                   ");
   delay(70);
  }
  gotoxy(5,20);
   cprintf(" Re-enter the class of the student (1-5) ");
   gotoxy(46,12);
   cprintf("                          ");
   textcolor(RED);
   goto o;
 }
 else
 {gotoxy(5,20);
 cprintf("                                                          ");
 }

 w:
 gotoxy(3,13);
 cprintf(" Enter the section of the student (A,B,C)   ");
 section=getch();
 cout<<section;
 section=toupper(section);
 if(section!='A'&&section!='B'&&section!='C')
 {textcolor(YELLOW);
    for(int qq=0;qq<5;qq++)
     {gotoxy(5,20);
      cprintf(" Re-enter the section of the student (A,B,C) ");
      delay(250);
      gotoxy(5,20);
      cprintf("                                              ");
      delay(70);
     }
     gotoxy(43,13);
      cprintf("                          ");
   textcolor(RED);
   goto w;
 }
 else
 {gotoxy(5,20);
 cprintf("                                                          ");
 }

 gotoxy(3,14);
 cprintf(" Enter the gendre of the student (M/F)  ");
 cin>>gender;


 gotoxy(3,15);
 cprintf("Enter the roll no. of the student  ");
 cin>>rn;
textcolor(BROWN);
}


//***************************************************************************
// Function name - display()
//         class - student
//          uses - to display the records of a student
//***************************************************************************

void student::display()
{ clrscr();

  line_hor(1,80,1);
  line_hor(1,80,24);
  line_ver(1,24,1);
  line_ver(1,24,80);
  textcolor(GREEN);
  gotoxy(3,4);
 cprintf(" Admission no. ------- ");
 cout<<adno;
 textcolor(RED);
 gotoxy(3,5);
 cprintf(" Name ---------------- ");
 cout<<name;
 gotoxy(3,6);
 cprintf(" Father's name ------- ");
 cout<<fname;
 gotoxy(3,7);
 cprintf(" Mother's name ------- ");
 cout<<mname;
 gotoxy(3,8);
 cprintf(" Permanent address --- ");
 cout<<paddress;
 gotoxy(3,9);
 cprintf(" Temprary address ---- ");
 cout<<taddress;
 gotoxy(3,10);
 cprintf(" Moble no. ----------- ");
 cout<<mno1;
 gotoxy(3,11);
 cprintf(" Telephone no.  ------ ");
 cout<<tno;
 gotoxy(3,12);
 cprintf(" Class & Section ----- ");
 cout<<clas<<" '"<<section<<"'";
 gotoxy(3,13);
 cprintf(" Gendre -------------- ");
 cout<<gender;
 gotoxy(3,14);
 cprintf(" Roll no. ------------ ");
 cout<<rn;
textcolor(BROWN);
}

//***************************************************************************
// function name - add()
//         class - student
//          uses - to add the record in the binary file 'school.dat'
//***************************************************************************

void student::add()
{
clrscr();
 line_hor(1,80,1);
  line_hor(1,80,24);
  line_ver(1,24,1);
  line_ver(1,24,80);
student s1;
ofstream of;
of.open("school.dat",ios::app|ios::out|ios::binary);
char p='y',pp;
gotoxy(3,2);
while(p=='y'||p=='Y')
{textcolor(MAGENTA);
s1.getdata();
gotoxy(3,17);
cprintf("ARE YOU SURELY WANT TO ADD THIS RECORD? (Y/N) ");
cin>>pp;
if(pp=='y'||pp=='Y')
{of.write((char*)&s1,sizeof(s1));
textcolor(GREEN);
gotoxy(25,20);
cprintf("RECORD IS ADDED SUCCESSFULLY!!!!!!");
textcolor(BLUE);
gotoxy(3,22);
cprintf("want to enter more records? (y/n) ");
cin>>p;
}
else
{textcolor(GREEN);
gotoxy(25,20);
cprintf("YOU DECLINE TO ADD!!!!! ");

break;
}
}
of.close();
textcolor(BROWN);
}

//***************************************************************************
//function name - st_out()
//        class - student
//         uses - to display the record of a student from file 'school.dat'
//***************************************************************************

void student::st_out()
{
z:
clrscr();
 line_hor(1,80,1);
  line_hor(1,80,24);
  line_ver(1,24,1);
  line_ver(1,24,80);
ifstream ifi;
student s2;
ifi.open("school.dat",ios::in|ios::beg|ios::binary);
char l;
int an;
ifi.seekg(0);
textcolor(BLUE);
gotoxy(10,2);
cprintf("Enter the admission no. of the student...");
cin>>an;
textcolor(BROWN);
while(!ifi.eof())
{ifi.read((char*)&s2,sizeof(s2));
 if(s2.getadno()==an)
 {s2.display();
  l='n';
  break ;
 }
}

if(l!='n')
  {textcolor(YELLOW);
 gotoxy(3,10);
 cprintf("admission no. does not exist!!!!!!");
  }

gotoxy(3,20);
textcolor(BLUE);
 cprintf("want to see anathor record? (y/n) ");
l=getch();
cout<<l;
if(l=='y'||l=='Y')
{clrscr();
ifi.close();
goto z;
}
ifi.close();
textcolor(BROWN);
}

//**************************************************************************
// function name - st_modify()
//         class - student
//          uses - to modify the record of a student
//**************************************************************************

void student::st_modify()
{b:
clrscr();
 line_hor(1,80,1);
  line_hor(1,80,24);
  line_ver(1,24,1);
  line_ver(1,24,80);
 student s3;
fstream f;
f.open("school.dat",ios::in|ios::out|ios::binary);
int adn;
long ps;
char found='f',u;
textcolor(YELLOW);
gotoxy(3,2);
cprintf("Enter the admission no. of the student whose record is to be");
 cprintf("modify.... ");
cin>>adn;
while(!f.eof())
{ps=f.tellg();
 f.read((char*)&s3,sizeof(s3));
 if(s3.getadno()==adn)
 {s3.modify();
  f.seekg(ps);
  f.write((char*)&s3,sizeof(s3));
  found='t';
  break ;
 }
}
clrscr();
line_hor(1,80,1);
  line_hor(1,80,24);
  line_ver(1,24,1);
  line_ver(1,24,80);
if(found=='f')
{gotoxy(25,12);
cprintf("Record not found!!!!!\n");
}
else if(found=='t')
{gotoxy(25,12);
cprintf("record is modifing...");
delay(1000);
gotoxy(25,12);
textcolor(GREEN);
cprintf("record gets modified.");
}
gotoxy(4,15);
cprintf("want to modify more records? (y/n)");
cin>>u;
if(u=='y'||u=='Y')
{f.close();
goto b;
}
else
 { f.close();
 }
textcolor(BROWN);
}


//***************************************************************************
// function name - modify()
//         class - student
//          uses - to display old data and take new one for modification
//***************************************************************************

void student::modify()
{
int nadno;
int  nclas;
char nname[100];

char ngender[10];
char nsection;
int  nrn;
char nfname[100];
char nmname[100];
char npaddress[150];
char ntaddress[150];
char nmno1[11];
char ntno[11];

 textcolor(GREEN);

  gotoxy(3,3);
 cprintf(" Admission no. ---     ");
 cout<<adno;
 gotoxy(3,4);
 cprintf(" Enter new Admission no. (press -1 to retain old one) ---    ");
 cin>>nadno;
 if(adno!=nadno)
  adno=nadno;
 textcolor(RED);
 gotoxy(3,5);
 cprintf(" Name -                ");
 cout<<name;
 gotoxy(3,6);
 cprintf(" Enter new name (press r to retain old one) - ");
 gets(nname);
 if(strcmp(nname,"r")!=0)
 strcpy(name,nname);

 gotoxy(3,7);
 cprintf(" Father's name ---     ");
 cout<<fname;
 gotoxy(3,8);
 cprintf(" Enter new father'sname (press r to retain old one) - ");
 gets(nfname);
 if(strcmp(nfname,"r")!=0)
 strcpy(fname,nfname);

 gotoxy(3,7);
 cprintf(" Mother's name ---     ");
 cout<<mname;
 gotoxy(3,8);
 cprintf(" Enter new mother'sname (press r to retain old one) - ");
 gets(nmname);
 if(strcmp(nmname,"r")!=0)
 strcpy(mname,nmname);

 gotoxy(3,9);
 cprintf(" Permanent address -   ");
 cout<<paddress;
 gotoxy(3,10);
 cprintf(" Enter new permanent address (press r to retain old one) - ");
 gets(npaddress);
 if(strcmp(npaddress,"r")!=0)
 strcpy(paddress,npaddress);

 gotoxy(3,11);
 cprintf(" Temprary address --   ");
 cout<<taddress;
 gotoxy(3,12);
 cprintf(" Enter new temprary address (press r to retain old one) - ");
 gets(ntaddress);
 if(strcmp(ntaddress,"r")!=0)
 strcpy(taddress,ntaddress);

 gotoxy(3,13);
 cprintf(" Moble no. ---         ");
 cout<<mno1;
 gotoxy(3,14);
 cprintf(" Enter new mobile no. (press r to retain old one) - ");
 gets(nmno1);
 if(strcmp(nmno1,"r")!=0)
 strcpy(mno1,nmno1);

 gotoxy(3,15);
 cprintf(" Telephone no.  ---    ");
 cout<<tno;
 gotoxy(3,16);
 cprintf(" Enter new Telephone no. (press r to retain old one) - ");
 gets(ntno);
 if(strcmp(tno,"r")!=0)
 strcpy(tno,ntno);

 gotoxy(3,17);
 cprintf(" Class & Section ---   ");
 cout<<clas<<" '"<<section<<"'";
 gotoxy(3,18);
 cprintf(" Enter new class (press -1 to retain old one) - ");
 cin>>nclas;
 if(nclas!=-1)
 clas=nclas;
 gotoxy(3,19);
  cprintf(" Enter new section (press r to retain old one) - ");
  cin>>nsection;
 if(nsection!='r')
 section=nsection;
 section=toupper(section);

 gotoxy(3,20);
 cprintf(" Gendre ---            ");
 cout<<gender;
 gotoxy(3,21);
  cprintf(" Enter new gender (press r to retain old one) - ");
 cin>>ngender;
 if(strcmp(ngender,"r")!=0)
strcpy(gender,ngender);
 gotoxy(3,22);
 cprintf(" Roll no. ---          ");
 cout<<rn;
 gotoxy(3,23);
  cprintf(" Enter new roll no. (press -1 to retain old one) - ");
 cin>>nrn;
 if(nrn!=-1)
 rn=nrn;
textcolor(BROWN);
}

//***************************************************************************
// function name - open()
//         class - start
//          uses - provide security by taking username and passward
//***************************************************************************

void start::open()
{
xc:
clrscr();
   line_hor(1,80,1);
   line_hor(1,80,24);
   line_ver(1,24,1);
   line_ver(1,24,80);
   char username[30];
   char p[10]="",c;
gotoxy(20,5);
textcolor(GREEN);
cprintf("ENTER USERNAME AND PASSWARD");
textcolor(YELLOW);
gotoxy(25,10);
cprintf("usename  = ");
cin>>username;
gotoxy(25,11);
cprintf("passward = ");
textcolor(BROWN);
int z=0;

for(z=0;z<10;z++)
{p[z]=getch();
 if(p[z]==13)
 {p[z]='a';
 break ;
 }
 else
 cout<<"*";
}

if(strcmp(username,"kv3gandhinagar")==0 && strcmp(p,"bhandaria")==0)
{textcolor(GREEN);
gotoxy(32,20);
cprintf("CORRECT PASSWARD....");
gotoxy(55,22);
textcolor(RED);
cprintf("program is loading...");
delay(2000);
textcolor(BROWN);
}
else
{
gotoxy(25,20);
textcolor(RED);
cprintf("passward is wrong");
delay(1000);
textcolor(GREEN);
gotoxy(15,22);
cprintf("press r for retry and any other key to exit");
textcolor(BROWN);
c=getch();
if(c=='r')
goto xc;
else
delay(2000);
close();
textcolor(BROWN);
}
}

//***************************************************************************
// function name - welcome()
//         class - start()
//          uses - to display a welcome page
//***************************************************************************

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
   cprintf("KENDRIYA VIDHYALYA No.-3, ARMY CANTT, GANDHINAGAR");
   textcolor(BLUE);
   gotoxy(38,19);
   cprintf("Developed by......");
   gotoxy(38,20);
   textcolor(11);
   cprintf("***********************************");
   gotoxy(57,21);
   textcolor(i);
   cprintf("S");
   textcolor(i+1);
   cprintf("A");
   textcolor(i+2);
   cprintf("C");
   textcolor(i+3);
   cprintf("H");
   textcolor(i+4);
   cprintf("I");
   textcolor(i+5);
   cprintf("N");
   textcolor(i+6);
   cprintf(" ");
   textcolor(i+7);
   cprintf("B");
   textcolor(i+8);
   cprintf("H");
   textcolor(i+9);
   cprintf("A");
   textcolor(i+10);
   cprintf("N");
   textcolor(i+11);
   cprintf("D");
   textcolor(i+12);
   cprintf("A");
   textcolor(i+13);
   cprintf("R");
   textcolor(i+14);
   cprintf("I");
   textcolor(i+15);
   cprintf(" ");
   delay(300);
   clrscr();
   nosound();
   }
delay(1000);
textcolor(BROWN);
}

//***************************************************************************
// function name - menu()
//         class - start
//          uses - to display basic menu options
//***************************************************************************

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
 cprintf("STUDENTS DETAIL");
 delay(200);
 gotoxy(30,11);
 cprintf("SCHOOL FACULTY ");
 delay(200);
 gotoxy(30,12);
 cprintf("ADD NEW STUDENT ");
 delay(200);
 gotoxy(30,13);
 cprintf("MODIFY RECORDS");
 delay(200);
 gotoxy(30,14);
 cprintf("ABOUT SCHOOL");
 delay(200);
 gotoxy(30,15);
 cprintf("EXIT");
 gotoxy(5,23);
 char z1=24,z2=25;
 cout<<z1<<z2;
 textcolor(CYAN);
 cprintf(" - MOVE");
textcolor(BROWN);
}

//***************************************************************************
// function name - choice()
//         class - start
//          uses - to take the choice from the user
//***************************************************************************

void start::choice()
{
int n=10,c;
char a=175,ch;

gotoxy(27,n);
cout<<a;
while(1)
{ch=getch();
if(ch==13)
{c=n;
break;
}
else if(ch==0)
 { n=n+1;
   if(n==16)
    {n=10;
     gotoxy(27,15);
     cout<<" ";
    }
  gotoxy(27,n-1);
  cout<<" ";
  gotoxy(27,n);
  cout<<a;
 }
}
option=c;
textcolor(BROWN);
}

//***************************************************************************
// function name - call()
//         class - start
//          uses - to return the option selected by the user
//***************************************************************************

int start::call()
{
 return option;
}

//***************************************************************************
// function name - close()
//         class - start
//          uses - to display close up page
//***************************************************************************

void start::close()
{clrscr();
 line_hor(1,80,1);
 line_hor(1,80,24);
 line_ver(1,24,1);
 line_ver(1,24,80);
 gotoxy(10,5);
 textcolor(MAGENTA);
 cprintf("****  KENDRIYA VIDHAYLYA NO.-3, ARMY CANTT, GANDHINAGAR  ****");
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
textcolor(BROWN);
}

void main()
{char c;
start ob;
student ob1;
ob.welcome();
ob.open();
 a:
 clrscr();
 ob.menu();
 ob.choice();

  if(ob.call()==10)
   {ob1.st_out();
    textcolor(GREEN);
    gotoxy(30,23);
    cprintf(" press b to go back or press any key to close") ;
    c=getch();
    if(c=='b')
     {
      goto a;
     }
    else
     {ob.close();
     }
  }
 else if(ob.call()==11)
  {
  clrscr();
   line_hor(1,80,1);
 line_hor(1,80,24);
 line_ver(1,24,1);
 line_ver(1,24,80);
 gotoxy(8,3);
  textcolor(GREEN);
  cprintf("  ****  KENDRIYA VIDHAYLYA NO.-3, ARMY CANTT, GANDHINAGAR  ****");
  textcolor(MAGENTA);
  gotoxy(3,5);
  cprintf("The  School  has   magnificent  permanent  building  with  35 (thirty");
  cprintf("five)");
  gotoxy(3,6);
  cprintf("classrooms, a big sports ground with a volley ball court, ");
   cprintf("football, handball");
  gotoxy(3,7);
  cprintf("and  kho-kho groundsurrounded by  tall trees, reserve forest and");
   cprintf("vast open");

 gotoxy(3,8);
  cprintf("area, the school is self sufficient in all respect.The Vidyalaya");
  cprintf("is an ideal");
  gotoxy(3,9);
  cprintf("set-up for all round physical and mental development of the");
   cprintf("students.");
  textcolor(GREEN);
  gotoxy(3,12);
  cprintf("TYPE OF ROOM");
  gotoxy(25,12);
  cprintf("No. OF ROOMS");
  textcolor(BLUE);
  gotoxy(3,14);
  cprintf("class room");
  gotoxy(25,14);
  cprintf("35");
  gotoxy(3,15);
  cprintf("science lab.");
  gotoxy(25,15);
  cprintf("3");
  gotoxy(3,16);
  cprintf("computer lab.");
  gotoxy(25,16);
  cprintf("3");
  gotoxy(3,17);
  cprintf("library");
  gotoxy(25,17);
  cprintf("2");
  gotoxy(3,18);
  cprintf("staff room");
  gotoxy(25,18);
  cprintf("4");
  gotoxy(30,23);
 textcolor(GREEN);
 cprintf(" press b to go back or press any key to close") ;
 c=getch();
 if(c=='b')
 {textcolor(BROWN);
  goto a;
 }

 else
 {textcolor(BROWN);
 ob.close();
 }
}
 else if(ob.call()==12)
  {ob1.add();
   gotoxy(30,23);
   textcolor(GREEN);
   cprintf(" press b to go back or press any key to close") ;
   c=getch();
   if(c=='b')
    {
     goto a;
    }

   else
   {ob.close();
   }
 }


else if(ob.call()==13)
{ob1.st_modify();
  gotoxy(30,23);
 textcolor(GREEN);
 cprintf(" press b to go back and press any key to exit") ;
 c=getch();
 if(c=='b')
 {
  goto a;
 }

 else
 {ob.close();
 }
}
else if(ob.call()==14)
{ clrscr();
 gotoxy(8,3);
  textcolor(GREEN);
  cprintf("  ****  KENDRIYA VIDHAYLYA NO.-3, ARMY CANTT, GANDHINAGAR  ****");
  textcolor(MAGENTA);
  gotoxy(3,5);
  cprintf("Established in December 1971, KV No. 3 is situated in ARMY CANTT");
   cprintf("in Capital ");
  gotoxy(3,6);
  cprintf("city of Gandhinagar,  in sprawling area of 15 acres. It firmly");
   cprintf("believes in ");
  gotoxy(3,7);
cprintf("the ethos of The world is one family as it fulfills the");
cprintf("educational needs  ");
  gotoxy(3,8);
  cprintf("of wide cross section of students especially the wards of");
cprintf("defence personnel,");
  gotoxy(3,9);
  cprintf("paramilitary forces and transferable center govt employees.");
cprintf(" Competently     ");
  gotoxy(3,10);
  cprintf("maneuvered by the Principal, with an active support group of");
cprintf("VMC, PTA and   ");
  gotoxy(3,11);
  cprintf("highly committed staff of 59 members, the school is marching");
   cprintf("towards ");
  gotoxy(3,12);
  cprintf("excellence. The present strength of students is 1393.");
  textcolor(BROWN);
  line_hor(1,80,1);
 line_hor(1,80,24);
 line_ver(1,24,1);
 line_ver(1,24,80);

  gotoxy(30,23);
 textcolor(GREEN);
 cprintf(" press b to go back or press any key to close") ;
 c=getch();
 if(c=='b')
 {textcolor(BROWN);
  goto a;
 }

 else
 {textcolor(BROWN);
 ob.close();
 }
}

else if(ob.call()==15)
 {ob.close();
 }


getch();
}
