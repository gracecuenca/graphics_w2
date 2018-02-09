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

  draw_line(50,400,450,400,s,c);
  draw_line(50,200,450,200,s,c);

  display(s);
  save_extension(s, "lines.png");
}
