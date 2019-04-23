#include<stdio.h>
#include<conio.h>
void main()

{
int p,c,m,e,h;
int tot;
float per;
printf("enter any five sub:-masrks");
scanf("%f%f%f%f%f",&p,&c,&m,&e,&h);
tot=p+c+m+e+h;
per=tot*100/500;
printf("%f",per);
if(per>33&&per<45);
printf("DIVISION=THIRD");
if(per>=45&&per<60)
printf("DIVISION=SECOND");
if(per>=60&&per<=100)
printf("DIVISION=FRIST");
else
printf("fail");
getch();
}

