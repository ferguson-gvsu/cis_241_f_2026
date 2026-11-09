#include <stdio.h>

int main(){

  long arr[3] = {0,0,0};
  long* p = arr;

  printf("Initial: arr = {%ld %ld %ld}, p=%p\n", arr[0], arr[1], arr[2], p);
  p[0] = 10;
  printf("p[0] = 10; arr = {%ld %ld %ld}, p=%p\n", arr[0], arr[1], arr[2], p);
  *p += 10;
  printf("*p += 10; arr = {%ld %ld %ld}, p=%p\n", arr[0], arr[1], arr[2], p);
  *(p + 1) = 9;
  printf("*(p + 1) = 9; arr = {%ld %ld %ld}, p=%p\n", arr[0], arr[1], arr[2], p);
  p += 2;
  printf("p += 2; arr = {%ld %ld %ld}, p=%p\n", arr[0], arr[1], arr[2], p);
  *p = 1;
  printf("*p = 1; arr = {%ld %ld %ld}, p=%p\n", arr[0], arr[1], arr[2], p);
  p--;
  printf("p--; arr = {%ld %ld %ld}, p=%p\n", arr[0], arr[1], arr[2], p);
  *p -= 2;
  printf("*p -= 2; arr = {%ld %ld %ld}, p=%p\n", arr[0], arr[1], arr[2], p);
  p[0]--;
  printf("p[0]--; arr = {%ld %ld %ld}, p=%p\n", arr[0], arr[1], arr[2], p);
  return 0;
}
