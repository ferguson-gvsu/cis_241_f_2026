#include <stdio.h>
#include <stdlib.h>

void foo(){
  int* p = (int*)malloc(7 * sizeof(int));
  p[0] = 5;
}

void main(){
	float my_arr[] = {1.0, 3.7, 100.9};
	// Do stuff
	free(my_arr);
}

