#include <stdio.h>
#include <stdlib.h>

void PrintArray(int* p, int length){
  printf("<");
  for(int i = 0; i < length; i++){
    printf("%d ", p[i]); // *(p+2)
  }
  printf(">\n");
}

int main(){
  int count = 4;
  int* arr = (int*)malloc(sizeof(int) * count);
  for(int i = 0; i < 40; i++){
    if(i >= count){
      count *= 2;
      arr = (int*)realloc(arr, count * sizeof(int));
    }
    arr[i] = i*i;
    PrintArray(arr, i + 1);
    PrintArray(arr, count);
  }

  free(arr);
  return 0;
}
