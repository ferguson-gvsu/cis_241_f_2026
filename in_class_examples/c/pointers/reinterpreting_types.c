#include <stdio.h>

int main(){
  char str[] = "Hello world!";
  printf("String before: %s\n", str);
  long long* p = str;
  *p = 11644078981801286;
  printf("String after: %s\n", str);
  return 0;
}
