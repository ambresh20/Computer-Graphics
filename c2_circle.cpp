#include<conio.h>
#include<graphics.h>
#include<iostream>
using namespace std;
int main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");
   circle(40,60,30);
   getch();
   closegraph();
   return 0;
}