#include <stdio.h>

int main(){
  unsigned char count = 255;
  printf("Your int is %d\n", count);
  count = count + 1;
  printf("Your int is %d\n", count);

  double num = 12736182367;
  printf("float notation: %f\n", num);
  printf("exp notation: %e\n", num);
  printf("g notation: %g\n", num);

  return 0;
}
