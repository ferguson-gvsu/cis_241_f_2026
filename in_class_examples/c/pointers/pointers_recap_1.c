#include <stdio.h>

int main(){
  int i = 100;   
  printf("int i = 100;\n");
  printf("i=%d;\n", i);
  
  int* p = &i;   
  printf("int* p = &i;\n");
  printf("\n");
  printf("i=%d; p=%p; *p=%d\n", i, p, *p);

  i = i + 5;     
  printf("i = i + 5;\n");
  printf("i=%d; p=%p; *p=%d\n", i, p, *p);
  *p += 6;       
  printf("*p += 6;\n");
  printf("i=%d; p=%p; *p=%d\n", i, p, *p);

  p += 1;        
  printf("p += 1;\n");
  printf("i=%d; p=%p; *p=%d\n", i, p, *p);
  i--;           
  printf("i--;\n");
  printf("i=%d; p=%p; *p=%d\n", i, p, *p);
  *p = *p * 2;   
  printf("*p = *p * 2;\n");
  printf("i=%d; p=%p; *p=%d\n", i, p, *p);

  p--;           
  printf("p--;\n");
  printf("i=%d; p=%p; *p=%d\n", i, p, *p);
  *p = 0;        
  printf("*p = 0;\n");
  printf("i=%d; p=%p; *p=%d\n", i, p, *p);
  return 0;
}

