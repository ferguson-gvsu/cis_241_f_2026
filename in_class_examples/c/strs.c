#include <stdio.h>

int main(){
  //char str[] = "gvsu";
  //printf("My str is: %s\n", str);
  unsigned int i = -1;
  char str2[4];
  str2[0] = 'a';
  str2[1] = 'b';
  str2[2] = 'c';
  str2[3] = 'd';
  printf("My str is: %s\n", str2);
  printf("Index %d, is %c\n", 0, str2[0]);
  printf("Index %d, is %c\n", 1, str2[1]);
  printf("Index %d, is %c\n", 2, str2[2]);
  printf("Index %d, is %c\n", 3, str2[3]);
  printf("Index %d, is %c\n", 4, str2[4]);
  printf("Index %d, is %d\n", 4, str2[4]);

  return 0;
}


