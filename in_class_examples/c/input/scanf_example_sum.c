#include <stdio.h>

int main(){
  int x = 0;
  int sum = 0;
  printf("Enter one number per line, then send an EOF (Ctrl + D) to sum them!\n");
  while(1){
    int res = scanf("%d", &x);
    if(res == EOF) break;
    sum += x;
  }
  printf("Sum is %d\n", sum);
}
