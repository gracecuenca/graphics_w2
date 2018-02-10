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

  int change = 50;
  int count = 0;

  //first shootout
  while(count < 10){
    draw_line(0,0,change,500,s,c);
    change+=50;
    count++;
  }

  count = 0;
  change = 50;

  while(count < 10){
    draw_line(0,500,change,0,s,c);
    change+=50;
    count++;
  }

  count = 0;
  change = 50;

  while(count < 10){
    draw_line(500,500,change,0,s,c);
    change+=50;
    count++;
  }

  count = 0;
  change = 50;

  while(count < 10){
    draw_line(500,0,change,500,s,c);
    change+=50;
    count++;
  }

  display(s);
  save_extension(s, "lines.png");
}
