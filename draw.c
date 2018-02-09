#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

//Insert your line algorithm here
//OCTANT I
void draw_line(int x0, int y0, int x1, int y1, screen s, color c){
  int x = x0;
  int y = y0;
  int A = y1 - y;
  int B = -(x1 - x);
  int d = 2*A + B;

  //assume x0 < x1
  while(x <= x1){
    plot(s,c,x,y);
    if(d > 0){
      y++;
      d+=2*B;
    }
    x++;
    d+=2*A;
  }

}
