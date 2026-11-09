#include <stdio.h>

int main(){
  int x = 42;

  int* p = &x;

  printf("Pointer is: %p\n", p);
  printf("Value is: %d\n", *p);

  return 0;
}

