#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int a[100][100],b[10000],i,j,m,n;
cout<<"enter no. of raws and columns"<<endl;
cin>>m>>n;
cout<<"enter matrix"<<endl;
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
cin>>a[i][j];
}
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
cout<<a[i][j]<<" ";
cout<<endl;
}
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{b[n*i+j]=a[i][j];
}}
for(i=0;i<m*n;i++)
cout<<b[i]<<" ";

for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{a[i][j]=b[n*i+j];
}}

for(i=0;i<m;i++)
{cout<<endl;
for(j=0;j<n;j++)
cout<<a[i][j]<<"  " ;
}
getch();
}

