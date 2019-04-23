#include<iostream.h>
void main()
{ int n,p;
char* b,a[7]="zero ",a1[7]="one ",a2[9]="two ",a3[7]="three ",a4[6]="four ",a5[8]="five ",a6[8]="six ",a7[9]="seven ",a8[9]="eight ",a9[9]="nine ",a10[9]="ten ",a11[9]="eleven ",a12[9]="twelve ",a13[9]="thirtee ",a14[9]="fourteen ",a15[9]="fifteen";
cin>>n;
p=n;
if(p==0)
b=a;
if(p==1)
b=a1;
else if(p==2)
b=a2;
else if(p==3)
b=a3;
else if(p==4)
b=a4;
else if(p==5)
b=a5;
else if(p==6)
b=a6;
else if(p==7)
b=a7;
else if(p==8)
b=a8;
else if(p==9)
b=a9;
else if(p==10)
b=a10;
else if(p==11)
b=a11;
else if(p==12)
b=a12;
else if(p==13)
b=a13;
else if(p==14)
b=a14;
else
b=a15;
cout<<b;
}