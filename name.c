#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
int a;
int main (){

int gd = DETECT, gm;
initgraph(&gd,&gm, "");
for(a=1; a<29; a++) {
gotoxy(30,33);
delay(200); 
textcolor(a);
cprintf( "Ambresh Vaishya");
}
for(a=65; a>28 ;a--) {
gotoxy(20,23);
delay(200); 
textcolor(a);
cprintf("Ambresh Vaishya");
}
getch();
}

