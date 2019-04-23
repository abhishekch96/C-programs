//***********PROJECT **WORK**ON**CANTEEN**MANAGEMENT************//

//******************** HEADER FILES *********************//
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
#include<iomanip.h>
#include<dos.h>
#include<graphics.h>

main()
{ 
clrscr();
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
setbkcolor(MAGENTA);
setcolor(YELLOW);
rectangle(10,10,630,470);
settextstyle(7,0,6);
outtextxy(200,15,"WELCOME");
outtextxy(250,200,"TO");
settextstyle(7,0,6);
outtextxy(70,370," CANTEEN");
sleep(5);
clearviewport();
setbkcolor(BLACK);
setcolor(YELLOW);
rectangle(8,8,630,470);
settextstyle(7,0,6);
outtextxy (200,15,"DEVELOPED BY");
outtextxy(50,200,"abhishek chauhan");
settextstyle(7,0,6);
sleep(5);
clearviewport();
  clrscr();
  unsigned int sum,add,choice,e,f,g,h,j,k,l,w,x,y,z;
  unsigned int b_no;
  unsigned int bir=20,colr=45,axr=90,sr=5,swr=118,cor=110,sowr=899, per=25,rir=60,
	       rer=1755;
  int qubis=1000,abis=0,qucol=1000,acol=0,quaxe=110,aaxe=0,qustar=1000,astar=0,quset=500,aset=0,qucoc=400,acoc=0,quson=100,ason=0,qupears=1000,apears=0,qurin=1000,arin=0,quree=300,aree=0;
  unsigned int m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0;
  char name[50],rank[10],put,ph_no[20],s_no[15],c_no[25],ok;

clrscr();
  main:;
   cout<<setw(50)<<"BABA CANTEEN MANAGEMENT"<<endl;
      cout<<setw(25)<<"CONSUMER INFORMATION";
      cout<<"\n"<<" NAME:";
      gets(name);
      cout<<"\n "<<"RANK:";
      gets(rank);
      cout<<"\n"<<" SERVICE NO.:";
      cin>>s_no;
     cout<<"\n"<<" PHONE NO.:";
      cin>>ph_no;
       cout<<"\n"<<"CREDIT CARD NUMBER.:";
      cin>>c_no;
      cout<<"\n"<<" ENTER BILL NO.:";
      cin>>b_no;
      again:;
      clrscr();
      cout<<"\n\n\n\n\ 1.MENU & PURCHASE";
      cout<<"\n\n\n\ 2.DETAILS";
      cout<<"\n\n\n\ 3.NEW CUSTOMER";
      cout<<"\n\n\n\ 4.QUANTITY AVAILABLE";
      cout<<"\n\n\n\ 5.EXIT";
      cout<<"\n\n\nENTER YOUR CHOICE:";
      cin>>choice;
      clrscr();
  switch(choice)
  {
     case 1:
      cout<<"\nITEMS\t\t\t\t\t\t\t      RATE(RS)";
      cout<<"\n\n\nBISCUIT\t\t\t\t\t\t\t\t20  ";
      cout<<"\n\nCOLGATE\t\t\t\t\t\t\t\t45";
      cout<<"\n\nAXE POWDER\t\t\t\t\t\t\t\t90   ";
      cout<<"\n\n5 STAR\t\t\t\t\t\t\t\t5  ";
      cout<<"\n\nSET WET PERFUME\t\t\t\t\t\t\t\t118   ";
      cout<<"\n\nCOCONUT HAIR OIL\t\t\t\t\t\t\t\t110  ";
      cout<<"\n\nSONATA WATCH\t\t\t\t\t\t\t\t899   ";
      cout<<"\n\nPEARS SOAP\t\t\t\t\t\t\t\t25   ";
      cout<<"\n\nRIN\t\t\t\t\t\t\t\t60   ";
      cout<<"\n\nREEBOK SHOES\t\t\t\t\t\t\t\t1755   ";
      start:
      cout<<"\n\n\nDO YOU WANT TO PURCHASE(Y/N):\n";
      cin>>put;
	if(put=='Y'||put=='y')
	{clrscr();
		    switch(put)
	 case 1:
	  clrscr();
	  cout<<"\n\n\n\t\t\t\tPURCHASE LIST";
	  bis:;
	  cout<<"\nBISCUIT(MAX 25): ";
	  cin>>m;

	  if(m>25)
	  {
	   cout<<"Enter Quantity Smaller than 25";
	  getch();
	  goto bis;
	  }
	  else
	  abis=qubis-m;
	  col:;
	  cout<<"\nCOLGATE(MAX 4): ";
	  cin>>n;
	   if(n>4)
	  {
	   cout<<"Enter Quantity Smaller than 4";
	  getch();
	  goto col;
	  }
	  else
	  acol=qucol-n;
	  axe:;
	  cout<<"\nAXE POWDER(MAX 2): ";
	  cin>>o;
	  if(o>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();
	  goto axe;
	  }
	  else
	  aaxe=quaxe-o;
	  star: ;
	  cout<<"\n5 STAR(MAX 10): ";
	  cin>>p;

	  if(p>10)
	  {
	   cout<<"Enter Quantity Smaller then 10";
	  getch();
	  goto star;
	  }
	  else
	  astar=qustar-p;
	  set:;
	  cout<<"\nSET WET PERFUME(MAX 4): ";
	  cin>>q;

	  if(q>4)
	  {
	   cout<<"Enter Quantity Smaller then 4";
	  getch();
	  goto set;
	  }
	  else
	  aset=quset-q;
	  coco:;
	  cout<<"\nCOCONUT HAIR OIL(MAX 5): ";
	  cin>>r;

	  if(r>5)
	  {
	   cout<<"Enter Quantity Smaller then 5";
	  getch();
	  goto coco;
	  }
	  else
	  acoc=qucoc-r;
	  sonata:;
	  cout<<"\nSONATA WATCH(MAX 2): ";
	  cin>>s;

	  if(s>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();

	  goto sonata;
	  }
	  else
	  ason=quson-s;
	  pears:;
	  cout<<"\nPEARS SOAP(MAX 20): ";
	  cin>>t;

	  if(t>20)
	  {
	   cout<<"Enter Quantity Smaller then 20";
	  getch();
	  goto pears;
	  }
	  else
	  apears=qupears-t;
	  rin:;
	  cout<<"\nRIN(MAX 10): ";
	  cin>>u;

	  if(u>10)
	  {
	   cout<<"Enter Quantity Smaller then 10";
	  getch();
	  goto rin;
	  }
	  else
	  arin=qurin-u;
	  ree:;
	  cout<<"\nREEBOK SHOES(MAX 3): ";
	  cin>>v;

	  if(v>3)
	  {
	   cout<<"Enter Quantity Smaller then 3";
	  getch();
	  goto ree;
	  }
	  else
	  aree=quree-v;
	  cout<<"\n";
	  clrscr();
	  cout<<"\n\n\n\n\n\n\t\t\t\tBABA CANTEEN\n";
	  cout<<"\n\n\t\t\t\t  CASH MEMO\n";
	  cout<<"\n\nBILL NO.:"<<b_no;
	 cout<<"\n\n\n\n\n";
	  cout<<"===============================================================================";
	  cout<<"\nITEMS"            <<setw(40)<<"QUANTITY"<<setw(35)<<"PRICE(Rs.)";
	  cout<<"===============================================================================";
	  if(m>0)
	    cout<<"\n\nBISCUIT"        <<setw(38)<<m<<setw(18)<<"Rs."<<m*bir;
	  if(n>0)
	    cout<<"\n\nCOLGATE"        <<setw(38)<<n<<setw(18)<<"Rs."<<n*colr;
	  if(o>0)
	    cout<<"\n\nAXE POWDER"     <<setw(38)<<o<<setw(18)<<"Rs."<<o*axr;
	  if(p>0)
	    cout<<"\n\n5 STAR"            <<setw(38)<<p<<setw(18)<<"Rs."<<p*sr;
	  if(q>0)
	    cout<<"\n\nSET WET PERFUME"<<setw(38)<<q<<setw(18)<<"Rs."<<q*swr;
	  if(r>0)
	    cout<<"\n\nCOCONUT HAIR OIL" <<setw(38)<<r<<setw(18)<<"Rs."<<r*cor;
	  if(s>0)
	    cout<<"\n\nSONATA WATCH"      <<setw(38)<<s<<setw(18)<<"Rs."<<s*sowr;
	  if(t>0)
	    cout<<"\n\nPEARS SOAP"         <<setw(38)<<t<<setw(18)<<"Rs."<<t*per;
	  if(u>0)
	    cout<<"\n\nRIN"             <<setw(38)<<u<<setw(18)<<"Rs."<<u*rir;
	  if(v>0)
	    cout<<"\n\nREEBOK SHOES"     <<setw(38)<<v<<setw(18)<<"Rs."<<v*rer;
		e=m*bir;
		f=n*colr;
		g=o*axr;
		h=p*sr;
		k=q*swr;
		l=r*cor;
		w=s*sowr;
		x=t*per;
		y=u*rir;
		z=v*rer;
		sum=e+f+g+h+k+l+w+x+y+z;
		add=m+n+o+p+q+r+s+t+u+v;
	    cout<<"\n===============================================================================";
	    cout<<"\nTOTAL:"<<setw(40)<<add<<setw(27)<<"Rs."<<sum;
	    cout<<"\n\nTHANK YOU .\t\t\t     VISIT US AGAIN\n";
                       cout<<"\n\nGoods Once Sold Cannot Replaced..........\n";
	getch();
	clrscr();
	goto again;
	}
	else
	{
                        goto again;

	}


	case 2:
	cout<<"\n\n\n\n\n\t\t\t\tCANTEEN DETAILS";
	cout<<"\n\n#TIMING:\n\n 09 AM TO 01 PM \n 04 PM TO 06 PM";
	cout<<"\n\n#CANTEEN WILL CLOSED ON THURSDAY";
	cout<<"\n\n#GOODS ONCE SOLD WILL NOT BE EXCHANGED/REPLACED";
	cout<<"\n\n#PLEASE TAKE YOUR CREDIT CARD WITH YOU";
	cout<<"\n\n#PLEASE COLLECT YOUR CREDIT CARD & BILL AFTER PAYMENT";
	cout<<"\n\n#PLEASE DO NOT BREAK ANY CANTEEN ITEMS";
	getch();
	clrscr();
	goto again;
	case 3:
	goto main;
	case 4:
	   if(m>0||n>0||o>0||p>0||q>0||r>0||s>0||t>0||u>0||v>0)
	  {cout<<"\n\t\t\tItems Avaliable in Canteen.\n\n\n";
	  cout<<"===============================================================================";
	  cout<<"\nITEMS"            <<setw(40)<<"QUANTITY";
	  cout<<"\n===============================================================================";
	  cout<<"\n\n\nBISCUIT"        <<setw(50)<<abis;
	  cout<<"\n\n\nCOLGATE"        <<setw(50)<<acol;
	  cout<<"\n\n\nAXE POWDER"     <<setw(50)<<aaxe;
	  cout<<"\n\n\n5 STAR"            <<setw(50)<<astar;
	  cout<<"\n\n\nSET WET PERFUME"<<setw(50)<<aset;
	  cout<<"\n\n\nCOCONUT HAIR OIL" <<setw(50)<<acoc;
	  cout<<"\n\n\nSONATA WATCH"      <<setw(50)<<ason;
	  cout<<"\n\n\nPEARS SOAP"         <<setw(50)<<apears;
	  cout<<"\n\n\nRIN"             <<setw(50)<<arin;
	  cout<<"\n\n\nREEBOK SHOES"     <<setw(50)<<aree;
	  cout<<"\n*******************************************************************************";
	  getch();
	  goto again;
	  }
	  else
	  {{cout<<"\n\t\t\tItems Avaliable in Canteen.\n\n\n";
	  cout<<"===============================================================================";
	  cout<<"\nITEMS"            <<setw(40)<<"QUANTITY";
	  cout<<"\n===============================================================================";
	  cout<<"\n\n\nBISCUIT"        <<setw(38)<<qubis;
	  cout<<"\n\n\nCOLGATE"        <<setw(36)<<qucol;
	  cout<<"\n\n\nAXE POWDER"     <<setw(33)<<quaxe;
	  cout<<"\n\n\n5 STAR"            <<setw(40)<<qustar;
	  cout<<"\n\n\nSET WET PERFUME"<<setw(26)<<quset;
	  cout<<"\n\n\nCOCONUT HAIR OIL" <<setw(29)<<qucoc;
	  cout<<"\n\n\nSONATA WATCH"      <<setw(34)<<quson;
	  cout<<"\n\n\nPEARS SOAP"         <<setw(37)<<qupears;
	  cout<<"\n\n\nRIN"             <<setw(41)<<qurin;
	  cout<<"\n\n\nREEBOK SHOES"     <<setw(33)<<quree;
	  cout<<"\n\n*******************************************************************************";
	  getch();
	  goto again;

	  }
	case 5:
	cleardevice();
	setbkcolor(0);
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS";
	sleep(1);
	     cleardevice();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKYOU.....";
	sleep(1);
	cleardevice();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKYOU.....";
	sleep(1);
	cleardevice();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKYOU.....";
	sleep(1);
	cleardevice();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   GOOD BYE.....";
	sleep(1);
	cleardevice();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   HAVE A NICE DAY..."<<"Press any key to Exit.......";
	getch();
	exit(0);
	default:
		cout<<"Your choice is wrong";
	getch();
	goto again;
	 }
 //getch();
// return 0;
 }

}

