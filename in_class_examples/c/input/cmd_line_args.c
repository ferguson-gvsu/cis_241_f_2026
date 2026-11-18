#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  for(int i = 0; i < argc; i++){
    printf("Argument %d is: %s\n", i, argv[i]);
  }
  int x = atoi(argv[1]);
  printf("First argument (as an int) is: %d\n", x);
  return 0;
}
