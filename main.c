#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;

  c.red = MAX_COLOR;
  c.green = MAX_COLOR;
  c.blue = MAX_COLOR;

  clear_screen(s);

  //draw_line(50,400,450,400,s,c);
  //draw_line(50,200,450,200,s,c);

  //draw_line(0,0,0,500,s,c);
  draw_line(0,0,50,500,s,c);
  draw_line(0,0,100,500,s,c);
  draw_line(0,0,150,500,s,c);
  draw_line(0,0,200,500,s,c);
  draw_line(0,0,250,500,s,c);
  draw_line(0,0,300,500,s,c);
  draw_line(0,0,350,500,s,c);
  draw_line(0,0,400,500,s,c);
  draw_line(0,0,450,500,s,c);
  draw_line(0,0,500,500,s,c);

  //draw_line(0,500,0,0,s,c);
  draw_line(0,500,50,0,s,c);
  draw_line(0,500,100,0,s,c);
  draw_line(0,500,150,0,s,c);
  draw_line(0,500,200,0,s,c);
  draw_line(0,500,250,0,s,c);
  draw_line(0,500,300,0,s,c);
  draw_line(0,500,350,0,s,c);
  draw_line(0,500,400,0,s,c);
  draw_line(0,500,450,0,s,c);
  draw_line(0,500,500,0,s,c);

  //draw_line(0,500,0,0,s,c);
  draw_line(500,500,450,0,s,c);
  draw_line(0,500,0,0,s,c);
  draw_line(0,500,400,0,s,c);
  draw_line(0,500,200,0,s,c);
  draw_line(0,500,250,0,s,c);
  draw_line(0,500,300,0,s,c);
  draw_line(0,500,350,0,s,c);
  draw_line(0,500,400,0,s,c);
  draw_line(0,500,450,0,s,c);
  draw_line(0,500,500,0,s,c);

  //draw_line(0,500,0,0,s,c);
  draw_line(0,500,50,0,s,c);
  draw_line(0,500,100,0,s,c);
  draw_line(0,500,150,0,s,c);
  draw_line(0,500,200,0,s,c);
  draw_line(0,500,250,0,s,c);
  draw_line(0,500,300,0,s,c);
  draw_line(0,500,350,0,s,c);
  draw_line(0,500,400,0,s,c);
  draw_line(0,500,450,0,s,c);
  draw_line(0,500,500,0,s,c);

  draw_line(0,0,500,0,s,c);

  display(s);
  save_extension(s, "lines.png");
}
