// C program for DDA line generation

#include <graphics.h>
#include <math.h>
#include <stdio.h>
// Function for finding absolute value
int abs(int n) { return ((n > 0) ? n : (n * (-1))); }

// DDA Function for line generation
void DDA(int X0, int Y0, int X1, int Y1)
{
 // calculate dx & dy
 int dx = X1 - X0;
 int dy = Y1 - Y0;

 // calculate steps required for generating pixels
 int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

 // calculate increment in x & y for each steps
 float Xinc = dx / (float)steps;
 float Yinc = dy / (float)steps;

 // Put pixel for each step
 float X = X0;
 float Y = Y0;
 for (int i = 0; i <= steps; i++) {
  putpixel(round(X), round(Y),
    RED); 
  X += Xinc; 
  Y += Yinc; 
  delay(100); 
    
 }
}


int main() {
 int gd = DETECT, gm;
 initgraph(&gd, &gm, "c:\\tc\\bgi");

 int X0 = 2, Y0 = 2, X1 = 14, Y1 = 16;
 DDA(2, 2, 14, 16);
 return 0;
}
