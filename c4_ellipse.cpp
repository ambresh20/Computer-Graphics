#include<graphics.h>
#include<iostream>
using namespace std;

int main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\TC\BGI");
   
   ellipse(250,200,0,360,100,50) ;
   
   getch();
   closegraph();
   return 0;
}