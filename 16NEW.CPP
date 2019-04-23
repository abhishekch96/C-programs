#include<iostream.h>
#include<conio.h>

int bsearch(int a[],int size,int n)
{
  int mid,beg=0,last=size-1;

while(beg<=last)
{ mid=(beg+last)/2;
  if(n==a[mid])
   {return mid;
    break ;
   }
   else
   {
    if( n > mid)
     {beg=mid+1;
     }
    else
    {last=mid-1;
    }
   }
}

}

void main()
{clrscr();
int a[454],size,n;
a:
cout<<"enter the size of  the array"<<endl;
cin>>size;
if(size<=0)
{ cout<<"re";
 goto a;
}
cout<<"enter the elements of the array"<<endl;
for(int i=0;i<size;i++)
cin>>a[i];
cout<<"enter the elements to be search"<<endl;
cin>>n;

cout<<"element is found at"<<bsearch(a,size,n)+1;
getch();
}