#include<stdio.h>
#include <graphics.h>


int main() {
 int gd = DETECT, gm;
 initgraph(&gd, &gm, "c:\\tc\\bgi");

 // line for x1, y1, x2, y2
 line(150, 150, 450, 150);

 line(150, 200, 450, 200);
 line(150, 250, 450, 250);

 getch();
 closegraph();
}
