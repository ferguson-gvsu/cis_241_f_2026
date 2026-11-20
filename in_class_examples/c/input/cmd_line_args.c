#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  for(int i = 0; i < argc; i++){
    printf("Argument %d is: %s\n", i, argv[i]);
  }
  int atoi_int = atoi(argv[1]);
  printf("First argument (as an int via atoi) is: %d\n", atoi_int);
  int sscanf_int;
  sscanf(argv[1], " %d", &sscanf_int);
  printf("First argument (as an int via sscanf) is: %d\n", sscanf_int);
  int strtol_int = strtol(argv[1], NULL, 0);
  printf("First argument (as an int via strtol) is: %d\n", strtol_int);
  return 0;
}
