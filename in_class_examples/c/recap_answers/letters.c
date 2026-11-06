#include <stdio.h>
int main(){
	char letters[] = {'g', 'v', 's', 'u'};
	for(int i = 0; i < 4; i++){
		if(letters[i] > 115){
			printf("Hit! %c->%d\n", letters[i], letters[i]);
		}
	}
}
