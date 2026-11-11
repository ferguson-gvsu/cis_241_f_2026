#include <stdio.h>

int main(){

  char i = 17;
  char* p = &i;

  printf("sizeof(i) = %lu\n", sizeof(i));
  printf("sizeof(char) = %lu\n", sizeof(char));
  printf("sizeof(p) = %lu\n", sizeof(p));
  printf("sizeof(char*) = %lu\n", sizeof(char*));

  return 0;
}
