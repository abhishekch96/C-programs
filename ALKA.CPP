 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int n[10],i,k=-1,a;
 clrscr();
 printf("enter any array element");
 for(i=0;i<10;i++)
 {
 scanf("%d",&n[i]);
  }
 printf("enter any no. you want to search in an array");
 scanf("%d",&a);
 for(i=0;i<10;i++)
 {
  if(n[i]==a)
  {
   k=i;
  }
  }
  if(k!=-1)
  {
   printf("the no. is present %d position",k);
   }
 if(k==-1)
  {
   printf("the value is not present in array");
  }
 getch();
}
