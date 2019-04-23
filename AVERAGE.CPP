//PROGRAM TO PRINT AVERAGE OF 10 NUMBERS

#include<iostream.h>
#include<conio.h>
void avg()
{ int num[10],r,sum=0;
  for(r=0;r<10;r++)
  { cout<<"\nEnter the number  ";
    cin>>num[r];
  }
  for(r=0;r<10;r++)
  sum=sum+num[r];
  cout<<"\n\n\t\t\tAverage is "<<sum/10;
}

void main()
{ clrscr();
  avg();
  getch();
}
