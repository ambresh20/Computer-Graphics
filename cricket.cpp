
#include <conio.h>
#include <graphics.h>
#include <stdio.h>

// Driver Code
int main() {
 int gd = DETECT, gm;
 initgraph(&gd, &gm, "C:\\tc\\bgi");

 // Ground Outline
 circle(700, 350, 300);

 // Coloring Green
 setfillstyle(SOLID_FILL, GREEN);
 floodfill(402, 350, 15);

 // 30 Yards Outline
 ellipse(700, 350, 0, 360, 150, 200);

 // Pitch Outer Line
 rectangle(675, 265, 725, 435);

 // Pitch Inner Line
 rectangle(690, 265, 710, 435);

 // Coloring Pitch Brown
 setfillstyle(SOLID_FILL, BROWN);
 floodfill(695, 300, 15);

 // Upper Stump Line
 rectangle(690, 265, 710, 280);
 line(680, 280, 720, 280);

 // Lower Stump Line
 rectangle(690, 435, 710, 420);
 line(680, 420, 720, 420);

 getch();
 closegraph();
}
