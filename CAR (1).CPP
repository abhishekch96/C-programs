#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

void main()
{
int gm,gd=DETECT;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int x[18]={123,137,380,64,100,88,80,65,43,462,438,450,465,487,484,465,445,448};
int y[18]={205,220,205,205,205,215,220,239,237,235,242,250,253,255,265,265,302,315};
int cords1[]={x[0],y[0],x[1],y[1],x[2],y[2]};
int cords2[]={x[3],y[3],x[4],y[4],x[5],y[5],x[6],y[6],x[7],y[7],x[8],y[8]};
int cords3[]={x[9],y[9],x[10],y[10],x[11],y[11],x[12],y[12],x[13],y[13]};
int cords4[]={x[14],y[14],x[15],y[15],x[16],y[16],x[17],y[17]};

setfillstyle(7,4);
floodfill(5,5,1);

//Outer body
setcolor(7);
arc(217,470,72.5,120,310);
arc(250,401,56,75.5,235);
line(380,206,407,207);
arc(293,412,50,61,235);
arc(335,434,49,68,235);
line(490,255,472,295);
arc(310,125,302,314,235);
arc(252,350,140,162,238);

//tyers
circle(375,302,63);
setfillstyle(2,15);
floodfill(375,250,7);

circle(82,302,63);
setfillstyle(2,15);
floodfill(85,250,7);

//Inner tyer
circle(375,302,40);
setfillstyle(7,8);
floodfill(375,302,7);


circle(82,302,40);
setfillstyle(7,8);
floodfill(85,300,7);

line(145,300,314,300);

//glass
arc(249,392,74,124,225);
drawpoly(3,cords1);
setfillstyle(6,1);
floodfill(200,200,7);


//Back light
setfillstyle(2,4);
fillpoly(6,cords2);

//Inner lines
setcolor(14);
setlinestyle(0,1,3);
line(55,218,79,218);
line(48,228,72,228);

//headlights
setcolor(7);
setlinestyle(0,1,1);
drawpoly(5,cords3);
setfillstyle(6,14);
floodfill(460,240,7);

//Front design
drawpoly(4,cords4);
setfillstyle(6,3);
floodfill(463,290,7);

setfillstyle(6,5);
floodfill(201,230,7);

getch();
closegraph();

}