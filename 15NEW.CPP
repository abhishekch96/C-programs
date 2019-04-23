#include<iostream.h>
#include<conio.h>
void lsearch(int a[],int n,int size)
{int i,found = 0,pos;

for(i=0;i<size;i++)
{if(a[i]==n)
 {found=1;
  pos=i+1;
  break;
 }
}

if(found==1)
cout<<"found on pos="<<pos;

 else
cout<< "element not found"<<endl;
}
void main()
{int a[555],i,n,size;
clrscr();
a:
cout<<"enter the size of array ";
cin>>size;
if(size<0)
{cout<<"re";
goto a;
}
cout<<endl<<"enter the elements of array"<<endl;
for(i=0;i<size;i++)
cin>>a[i];
cout<<"enter element to be search ";
cin>>n;
lsearch(a,n,size);
getch();
}
