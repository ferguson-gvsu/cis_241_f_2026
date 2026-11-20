#include <stdio.h>
#include <stdlib.h>

int main(){
  while(1){
    int user_input;
    printf("Enter an integer: ");
    int result = scanf(" %d", &user_input);
    if(result == EOF) break;
    if(result == 0) getchar();
    else printf("Received: %d\n", user_input);
  }
  return 0;
}
