#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <dos.h>
#include <conio.h>
#include <iostream.h>


int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
     /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "f:\\tc\\bgi");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
	  printf("Graphics error: %s\n", grapherrormsg(errorcode));
	  printf("Press any key to halt:");
	  getch();
	  exit(1);
   }

   setcolor(getmaxcolor());

   /* draw a diagonal line */


int startx=500,maxx,maxy,x=0;

	maxx = getmaxx();
	maxy = getmaxy();


	 delay(1500);
	 setcolor(8);
	  circle(100,100,10);
	  circle(160,120,10);
	  circle(220,80,10);
	  circle(280,140,10);
	  circle(340,180,10);
	  circle(400,80,10);
	  circle(460,120,10);

	  setcolor(BROWN);
	  setfillstyle(SOLID_FILL, BROWN);
	  rectangle(0,291,maxx,maxy);
	  floodfill(2, 295, BROWN);



//for(int k=0;k<=35;k++)
int k=-1;
flushall();
while(!kbhit())

{
   k++;
   
   
   int m=0,n=0;
   for(int i=0;i<=28;i++)
   {
	  x++;
	  if(x==8)
	  x++;
	  if(x==16)
	  x=0;
	  setfillstyle(SOLID_FILL,x);
	  floodfill(100,100,8);
	  floodfill(160,120,8);
	  floodfill(220,80,8);
	  floodfill(280,140,8);
	  floodfill(340,180,8);
	  floodfill(400,80,8);
	  floodfill(460,120,8);

	  setcolor(WHITE);
	  m=i/4;
	  n=i/7;

	  line(startx-6-m,216,startx-3-m,212);             //hat left verti
	  line(startx+8-m,224,startx+11-m,219);            //hat right verti
	  line(startx-3-m,212,startx+11-m,219);             //hat top hori


	  line(startx-m,242,startx+15-m,235);    //hand  arm
	  line(startx+15-m,235,startx+12-m,226);  //handwrist

	  arc(startx-m+1, 222, 135, 350, 8);
	  line(startx-10-m,215,startx+12-m,226);
	  line(startx-m,250,startx+7-m-m,260);
	  line(startx+7-m-m,260,startx-7,284+n);
	  line(startx-7,284+n,startx-5,290);



	  if(i<=27)
	  {
	   line(startx-m,250,startx,260);
	   line(startx,260,startx-m*2,290);
	   line(startx-m*2,290,startx+4-m*2,290);

	   }
	  else
	  {
	   line(startx-m,250,startx,260);
	   line(startx,260,startx-m*2,290-n);
	   line(startx-m*2,290-n,startx+4-m*2,290);
	  }

	  line(startx-m,230,startx-m,249);

	  delay(22);
	  setcolor(BLACK); //raster
	  line(startx-6-m,216,startx-3-m,212);             //hat left verti
	  line(startx+8-m,224,startx+11-m,219);            //hat right verti
	  line(startx-3-m,212,startx+11-m,219);             //hat top hori


	  line(startx-m,242,startx+15-m,235);    //hand  arm
	  line(startx+15-m,235,startx+12-m,226);  //handwrist

	  arc(startx-m+1, 222, 135, 350, 8);
	  line(startx-10-m,215,startx+12-m,226);
	  line(startx-m,250,startx+7-m-m,260);
	  line(startx+7-m-m,260,startx-7,284+n);
	  line(startx-7,284+n,startx-5,290);



	  if(i<=27)
	  {
	   line(startx-m,250,startx,260);
	   line(startx,260,startx-m*2,290);
	   line(startx-m*2,290,startx+4-m*2,290);

	   }
	  else
	  {
	   line(startx-m,250,startx,260);
	   line(startx,260,startx-m*2,290-n);
	   line(startx-m*2,290-n,startx+4-m*2,290);
	  }

	  line(startx-m,230,startx-m,249);
	}
	startx=startx-m ;
   }   /* clean up */
   cleardevice();
   getch();
   closegraph();
   return 0;
}

