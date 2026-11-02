#include <stdio.h>

int main(){
  unsigned long long total = 0;
  for(unsigned long long i = 0; i < 100000000; i++){
    printf("%d\n", i);
    total += i;
  }
  printf("Total is: %lld\n", total);
  return 0;
}
