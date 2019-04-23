#include<iostream.h>
#include<conio.h>
class student
{int rn;
char name[25];
float marks[3];
public:
void input();
void output();
};
void student::input()
{cout<<"enter the Roll no. ,name and marks of 3 subject of the student"<<endl;
cin>>rn>>name>>marks[0]>>marks[1]>>marks[2];
}
void student::output()
{
clrscr();
cout<<"roll no. of student = "<<rn<<endl;
cout<<"name of student =  "<<name<<endl;
for(int i=0;i<3;i++)
{
cout<<"marks of sub. "<<i+1<<" = "<<marks[i]<<endl;
}
getch();
}
void main()
{student ob;
ob.input();
ob.output();
}
