#include<iostream>
#include<graphics.h>

int main() {
	
	int gd = DETECT,gm ;
	initgraph(&gd,&gm, "c:\\tc\\bgi") ;

	line(330,180,310,230);
	line(310,230,350,230);
	line(330,180,350,230);


	
	getch();
	closegraph();
	
}