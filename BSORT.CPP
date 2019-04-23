#include<iostream.h>
#include<conio.h>

void bubblesort(int a[],int size)
{int tmp;
for(int i=0;i<size;i++)
{for(int j=0;j<size-i;j++)
 {if(a[j]>a[j+1])
   {tmp=a[j];
    a[j]=a[j+1];
    a[j+1]=tmp;
   }
 }
 cout<<"array after iteration - "<<i+1<<" -is ";
 for(int k=0;k<size;k++)
 cout<<a[k]<<" ";
 cout<<endl;

}
cout<<"sorted array :- "<<endl;
for(i=0;i<size;i++)
cout<<a[i];
}
void main()
{int a[100],size,i;
cout<<"enter the size of the array "<<endl;
cin>>size;
cout<<"enter elements of the array "<<endl;
for(i=0;i<size;i++)
cin>>a[i];
bubblesort(a,size);
getch();
}