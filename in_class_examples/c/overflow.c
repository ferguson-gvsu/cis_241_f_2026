#include <stdio.h>

int main(){
  unsigned char c1 = 255;
  printf("Your unsigned char is %d\n", c1);
  printf("Adding one...\n");
  c1 = c1 + 1;
  printf("Your unsigned char is %d\n", c1);
  
  printf("\n");
  unsigned char c2 = 0;
  printf("Your unsigned char is %d\n", c2);
  printf("Subtracting one...\n");
  c2 = c2 - 1;
  printf("Your unsigned char is %d\n", c2);
  
 
  printf("\n");
  char c3 = 127;
  printf("Your signed char is %d\n", c3);
  printf("Adding one...\n");
  c3 = c3 + 1;
  printf("Your signed char is %d\n", c3);
  
  /*
  printf("\n");
  char c4 = -128;
  printf("Your signed char is %d\n", c4);
  printf("Subtracting one...\n");
  c4 = c4 - 1;
  printf("Your signed char is %d\n", c4);
  */

  unsigned int i = (unsigned int) -1;
  printf("-1 as an uint is: %u\n", i);

  return 0;
}






