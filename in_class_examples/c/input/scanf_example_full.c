#include <stdio.h>
#include <stdlib.h>

void PrintArray(int* p, int length){
  printf("[ ");
  for(int i = 0; i < length; i++){
    printf("%d ", p[i]);
  }
  printf("]\n");
}


int main(){
  int array_size = 4;
  int cur_index = 0;
  int* values = (int*)malloc(array_size * sizeof(int));
  while(1){
    int user_input;
    int result = scanf("%d", &user_input);
    if(result == EOF) break;
    printf("Value is: %d\n", user_input);
    //*(values + cur_idx) = user_input;
    values[cur_index] = user_input;
    cur_index++;
    if(cur_index >= array_size){
      array_size *= 2;
      values = realloc(values, sizeof(int) * array_size);
    }
    printf("Based on index:\n");
    PrintArray(values, cur_index);
    printf("Based on array_size:\n");
    PrintArray(values, array_size);
  }
  return 0;
}
