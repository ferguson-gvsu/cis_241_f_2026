#include <stdio.h>
#include <stdlib.h>

void PrintIntArray(int* p, int length){
  printf("<");
  for(int i = 0; i < length; i++){
    printf("%d ", p[i]);
  }
  printf(">\n");
}

int main(){
  int count = 0;
  int length = 4;
  int* arr = (int*)malloc(sizeof(int) * length);
  for(int i = 0; i < 50; i++){
    if(count >= length){
      length *= 2;
      arr = (int*)realloc(arr, sizeof(int) * length);
      printf("Reallocated to length: %d\n", length);
    }
    arr[count] = i * i;
    count += 1;
    PrintIntArray(arr, count);
    PrintIntArray(arr, length);
  }
}
