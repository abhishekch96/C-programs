#include<iostream.h>
#include<conio.h>
void main()
{int a[35],size,i,j,t;
clrscr();
cout<<"enter size of array  ";
cin>>size;
cout<<"enter elements of the array "<<endl;
for(i=0;i<size;i++)
cin>>a[i];

for(i=0;i<size;i++)
{ for(j=i;j<size;j++)
   { if(a[i]>a[j])
      {t=a[i];
       a[i]=a[j];
       a[j]=t;
      }
   }
}
cout<<"sorted array is "<<endl;
for(i=0;i<size;i++)
cout<<a[i]<<"  ";

getch();
}

