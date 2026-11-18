#include <stdio.h>
#include <stdlib.h>

void PrintArray(int* p, int length){
  printf("<");
  for(int i = 0; i < length; i++){
    printf("%d ", p[i]); // *(p + i)
  }
  printf(">\n"); 
}

int main(){
  int count = 4;
  int* arr = (int*) malloc(sizeof(int) * count);
  for(int i = 0; i < 40; i++){
    if(i >= count){
      count *= 2;
      arr = realloc(arr, sizeof(int) * count);
    }
    arr[i] = i * i;
    PrintArray(arr, i);
    PrintArray(arr, count);
  }
  // Change second item to 5
  free(arr);
}
