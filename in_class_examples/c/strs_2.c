#include <stdio.h>

int main(){
  char str1[] = "gvsu";
  printf("My string is %s\n", str1);

  char str2[4];
  str2[0] = 'a';
  str2[1] = 'b';
  str2[2] = 'c';
  str2[3] = 'd';
  printf("My string is %s\n", str2);

  printf("Index %d is %c\n", 0, str2[0]);
  printf("Index %d is %c\n", 1, str2[1]);
  printf("Index %d is %c\n", 2, str2[2]);
  printf("Index %d is %c\n", 3, str2[3]);
  printf("Index %d is %c\n", 4, str2[4]);
  
  printf("s1 Index %d is %c\n", 5, str1[5]);
  printf("s1 Index %d is %d\n", 5, str1[5]);
  for(int i = 0; i < 32000; i++){
    printf("s2 Index %d is %d\n", i, str2[i]);
  }


  return 0;
}
