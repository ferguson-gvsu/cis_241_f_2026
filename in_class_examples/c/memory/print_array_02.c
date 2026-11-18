#include <stdio.h>

void PrintArray(int* p, int length){
  printf("<");
  for(int i = 0; i < length; i++){
    printf("%d ", p[i]); // *(p+2)
  }
  printf(">\n");
}

int main(){
  int scores[] = {80, 90, 100, 92};
  PrintArray(scores, 10);

  return 0;
}
