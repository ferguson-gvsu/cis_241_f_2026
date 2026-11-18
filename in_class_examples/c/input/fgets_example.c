#include <stdio.h>

int main(){
  char s[10];
  while(1){
		char* res = fgets(s, 10, stdin);
		printf("received input: %s\n", s);
		if(res == NULL) break;
  }
}

