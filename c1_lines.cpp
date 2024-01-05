#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main() {
	int gd = DETECT,gm;
	initgraph(&gd, &gm,  "C:\\TC\\BGI");
	
	line(150,150,450,150);
	
	getch();
	closegraph();
	
}