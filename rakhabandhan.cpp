#include <stdio.h>
#include<conio.h>
#include<graphics.h>

int main() {

 int i,gd =DETECT, gm =4;
 int i1, x1, y1;
 initgraph(&gd, &gm, "c:\\tc\\bgi");

 setcolor(CYAN);

 setfillstyle(CLOSE_DOT_FILL,MAGENTA);

 circle(230,200,40);
 floodfill(230,200,CYAN); 

 setcolor(RED);
 arc(260,160,290,180,32);
 arc(285,219,202,118,32);
 arc(232,255,140,50,30);
 arc(180,222,75,338,32);
 arc(195,160,0,263,32);

 setcolor(YELLOW);

 arc(366,280,155,300,120);
 arc(112,60,300,52,150);

 setcolor(WHITE);

 outtextxy(100,425," ***  Happy Rakshabandan By Ambresh Vaishya ***");

 while (!kbhit()) {

 settextstyle(BOLD_FONT,HORIZ_DIR,7);

//		setcolor(RED);
//	outtextxy(100,30,"Happy");
//
//		setcolor(WHITE);
//	outtextxy(120,50,"Rakshabandan");
//
//		setcolor(GREEN);
//		outtextxy(140,70,"By Ambresh Vaishya");

	   setcolor(WHITE);

   for(i1=0; i1<=500; i1++) {

       x1=rand()%getmaxx();

          y1=rand()%getmaxy();

          putpixel(x1,y1,2);
      }

      delay(4000);
    }

 getch();

}