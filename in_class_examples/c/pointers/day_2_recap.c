#include <stdio.h>

int main(){
  char name[] = "Louie";
  char* cur_char = &name[2];
  *cur_char = 'k';
  printf("String is now: %s\n", name);
  cur_char -= 2;
  *cur_char = 'J';
  printf("String is now: %s\n", name);
  char* ptr = &name[1];
  *(ptr +3) = 'c';
  printf("String is now: %s\n", name);
  return 0;
}
