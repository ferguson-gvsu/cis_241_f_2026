#include <stdio.h>

int main(){

  int i = 17;
  int* p = &i;

  printf("sizeof(i) = %lu\n", sizeof(i));
  printf("sizeof(int) = %lu\n", sizeof(int));
  printf("sizeof(p) = %lu\n", sizeof(p));
  printf("sizeof(int*) = %lu\n", sizeof(int*));

  return 0;
}
