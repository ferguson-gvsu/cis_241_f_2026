#include <stdio.h>
#include <stdlib.h>

void main(){
  while(1){
      char* s = NULL;
      size_t n = 0;
      int res = getline(&s, &n, stdin);
      if(res == -1) break;
      printf("Received: %s\n", s);
      printf("n is now: %ld\n", n);
      free(s);
  }
}

