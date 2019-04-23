#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{int rn;
char name[25];
float marks;
char select[30];
void assignselection();
public:
void input();
void output();
};
void student::assignselection()
{
 if(marks>=50)
 strcpy(select,"selected");
 else
 strcpy(select,"not selected");
}
void student::input()
{
clrscr();
cout<<"enter the name, Roll no. , marks of student"<<endl;
cin>>name>>rn>>marks;
assignselection();
}
void student::output()
{
clrscr();
cout<<"Roll No. = "<<rn<<endl;
cout<<"name = "<<name<<endl;
cout<<"marks = "<<marks<<endl;
cout<<"selection = "<<select;
getch();
}
void main()
{
student ob;
ob.input();
ob.output();
}
