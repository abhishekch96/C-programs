#include<iostream.h>
#include<conio.h>
#include<string.h>
class stu
{ int no;
char name[45];
public:
stu(int no,char *name)
{this->no=no;
strcpy(this->name,"ram");
cout<<"\nthis= "<<this;
}
void printstu()
{cout<<endl<<"this= "<<this<<"\tno.= "<<this->no<<"\t\tname= "<<this->nname;
}};
void main()
{clrscr();
stu s1(2,"fdf"),s2(4,"ggsfdf"),s3(6,"dfdfdf");
s1.printstu();
s2.printstu();
s3.printstu();
getch();
}