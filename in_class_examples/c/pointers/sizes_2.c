#include <stdio.h>

int main(){

  int i = 17;
  int* p = &i;

  printf("sizeof(i) = %lu\n", sizeof(i));
  printf("sizeof(int) = %lu\n", sizeof(int));
  printf("sizeof(p) = %lu\n", sizeof(p));
  printf("sizeof(int*) = %lu\n", sizeof(int*));
  printf("\n");

  int values[5];
  int* p2 = values;
  
  printf("sizeof(values) = %lu\n", sizeof(values));
  printf("sizeof(int[5]) = %lu\n", sizeof(int[5]));
  printf("sizeof(p2) = %lu\n", sizeof(p2));
  printf("sizeof(int*) = %lu\n", sizeof(int*));

  return 0;
}
