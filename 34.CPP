#include<iostream.h>
#include<conio.h>
#include<string.h>
void main ()
{
char name[10][20],temp[20];
int i,j;
cout<<"Enter 10 names";
for(i=0;i<10;i++)
{
cin>>name[i];
}
for(i=0;i<10;i++)
{
for(j=i;j<10;j++)
{
if(strcmp(name[i],name[j])>0)
{
strcpy(temp,name[i]);
strcpy(name[i],name[j]);
strcpy(name[j],temp);
}
}
}
for(i=0;i<10;i++)
cout<<name[i]<<endl;
}