#include <stdio.h>

int exponent(int base, int exp){
  int res = 1;
  for(int e = 0; e < exp; e++){
    res *= base;
  }
  return res;
}

int main(){
  for(int b = 1; b < 5; b++){
    for(int e = 0; e < 4; e++){
      printf("%d^%d = %d\n", b, e, exponent(b, e));
    }
  }
  return 0;
}
