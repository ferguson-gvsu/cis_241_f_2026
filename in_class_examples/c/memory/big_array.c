#include <stdio.h>
#include <stdlib.h>

void foo(){
  long long mem[2000000];
  printf("First number is: %lld\n", mem[0]);
}

void bar(){
  long long* mem = (long long*)malloc(sizeof(long long) * 2000000000);
  printf("First number is: %lld\n", mem[0]);
  free(mem);
}

int main(){
  //foo();
  bar();
  return 0;
}
