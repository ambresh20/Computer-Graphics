#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main() {
	int gd = DETECT, gm ;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	
	// arc(x, y, start_angle, end_angle, radius);
	// line(x1,y1,x2,y2);
	
       arc(70,110,270,90,30);   
       arc(70,50,270,90,30);    
        line(70,80,130,80);  // 2 arc ke bich wali 
	    line(130,20,130,150); //  jodne wali
	    line(60,16,600,16);  // sabse upper wali line
	    
	    // half M ke liye
	     line(250,20,250,130);  // upper se niche wali
	     line(250,130,180,130); // A ki or jane wali 
	     line(180,130,180,80); // niche se upper line
	     line(180,80,300,80) ;   // M rectangle banane wali
	     
	     // B ke liye
	     line(420,20,420,150); // b ke liye upeer se niche 
	     arc(420,80,90,270,50) ; // this are define arc shapes 
    	 line(420,130,380,50);    //  thirchi dandi ke liye
         line(420,130,390,190)  ;            // R ke liye 
         line (420,16,380,-50)   ;   // E ke liye
	     
	     // S ke liye 
	     circle(500,35,20);  // small and upper circle 
	     circle(480,100,30) ;  // big circle and down 
	     line(520,35,510,100) ;
	     line(510,100,550,160) ;
	     
	     // H ke liye 
	     line(580,150,580,20) ;
	    
	
	getch();
	closegraph();
}