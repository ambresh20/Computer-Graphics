#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int main() {
int gd =DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
//setbkcolor(14);
//setcolor(6);
settextstyle(2,0,4);
outtextxy(180,130,"G");
//setcolor(5);
settextstyle(2,0,4);
outtextxy(120,120,"O");
//setcolor(6);
settextstyle(2,0,4);
outtextxy(300,120,"O");
//setcolor(5);
settextstyle(2,0,4);
outtextxy(250,130,"G");
//setcolor(2);
settextstyle(2,0,4);
outtextxy(360,160,"L");
//setcolor(3);
settextstyle(2,0,4);
outtextxy(310,130,"E");
//setcolor(9);
settextstyle(2,0,4);
//setcolor(8);
settextstyle(2,0,4);
outtextxy(110,250,"surf");
settextstyle(2,0,4);
//outtextxy(350,320,"Go AHEAD");
//setcolor(6);
//rectangle(130,210,450,210);
//rectangle(90,310,170,340);
//rectangle(360,320,510,320);
getch();
closegraph();
}