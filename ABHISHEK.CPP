#include<iostream.h>
void main()
{ int n,p;
char* b,a[7]="zero ",a1[7]="one ",a2[9]="two ",a3[7]="three ",a4[6]="four ",a5[8]="five ",a6[8]="six ",a7[9]="seven ",a8[9]="eight ",a9[9]="nine ",a10[9]="ten ",a11[9]="eleven ",a12[9]="twelve ",a13[9]="thirtee ",a14[9]="fourteen ",a15[9]="fifteen ",a16[10]="sixteen ",a17[19]="seventeen ",a18[9]="eighteen ",a19[9]="ninteen ",a20[9]="twenty ",a30[9]="thirty ",a40[9]="fourty ",a50[9]="fifty ",a60[9]="sixty ",a70[9]="seventy ",a80[9]="eighty ",a90[9]="ninty ",a100[9]="hundrad ",a1000[9]="thousand ",al[9]="lakh ",ac[9]="crore ";

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
else if(p==15)
b=a15;
else if(p==16)
b=a16;
else if(p==17)
b=a17;
else if(p==18)
b=a18;
else if(p==19)
b=a19;
else if(p==20)
b=a20;
else if(p==30)
b=a30;
else if(p==40)
b=a40;
else if(p==50)
b=a50;
else if(p==60)
b=a60;
else if(p==70)
b=a70;
else if(p==80)
b=a80;
else if(p==90)
b=a90;
else if(p==100)
b=a100;
else if(p=1000)
b=a1000;
else if(p=100000)
b=al;
else
b=ac;
cout<<b;
}