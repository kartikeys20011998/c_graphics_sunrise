  /*   COMPUTER GRAPHICS PROJECT        $$*/
  /*   PROJECT NAME : --> SUNRISE       $$*/
  /*  SUBMITTED TO --> Ms. NILIMA PATEL $$*/
  /*  SUBMITTED BY --> Kartikey Sharma  $$*/
  /*  BRANCH --> CS   YEAR -->III       $$*/
  /*           SECTION --> A            $$*/


#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
int i,j,k,t,q;
float x,y;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(2); // setting the background color
rectangle(2,2,getmaxx(),getmaxy()); //draws the rectangular canvas
setcolor(2); //setting the rectangular color
i=0;
//drawing the mountains
for(t=0;t<getmaxx();t+=120)
{
line(t,250,t+60,170);
line(t+60,170,t+120,250);
}

line(0,400,getmaxx(),400);
setfillstyle(11,CYAN);
floodfill(2,420,2);
setfillstyle(4,YELLOW);
floodfill(1,300,2);


i=0;
while(i!=150)
{
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
fillellipse(k,j,30,30);
setfillstyle(SOLID_FILL,YELLOW); //SUN CREATION
fillellipse(170+i,235-i,30,30);
j=235-i;
k=170+i;
i++;
setcolor(2);
for(t=0;t<getmaxx();t+=120) 	//MOUNTAIN CREATION
{
 line(t,250,t+60,170);
 line(t+60,170,t+120,250);
}
setfillstyle(1,BROWN);
floodfill(202,200,GREEN);
delay(25);
}

//SUN RAYS
for(i=36;i<80;i++)
for(j=0;j<=360;j+=20)
{
x=319+i*cos(((float)j*3.14)/180);
y=86+i*sin(((float)j*3.14)/180);
putpixel(x,y,YELLOW);
delay(1);
}

 /* Draw Hut */
    setcolor(WHITE);
    rectangle(330,330,430,450);
    rectangle(430,330,610,450);
    rectangle(360,400,400,450);

    line(380,250,330,330);
    line(380,250,430,330);
    line(380,250,560,250);
    line(560,250,610,330);

    /* Fill colours */
    setfillstyle(SLASH_FILL,BLUE);
    floodfill(332,332, WHITE);
    floodfill(432,332, WHITE);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(362,402, WHITE);
    setfillstyle(HATCH_FILL, GREEN);
    floodfill(380,255, WHITE);
    floodfill(390,255, WHITE);

//ENDING OF DRAWING HUT

//closegraph();
getch();
}
