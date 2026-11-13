#include <stdio.h>

int main(){

  printf("size of long: %lu\n", sizeof(long));
  int arr1[3] = {1,2,3};
  int arr2[3] = {4,5,6};
  int arr3[3] = {7,8,9};
  int* p = arr1;

  printf("arr2[-1] -> %d\n", arr2[-1]);

  return 0;
}
