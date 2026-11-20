#include <stdio.h>

typedef struct Coord{
  float x;
  float y;
} Coord;

void PrintCoord(Coord* c_ptr){
  printf("<%0.2f, %0.2f>\n", c_ptr->x, c_ptr->y);
}

int main(){
  Coord c1;
  c1.x = 1;
  c1.y = 0;
  Coord c2 = {0.707, 0.707};
  PrintCoord(&c1);
  PrintCoord(&c2);
}
