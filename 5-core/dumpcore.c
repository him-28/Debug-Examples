#include <stdio.h>
#include <stdlib.h>

void init(double* a, const int count){
  
	int i;
	for (i=0; i<count; i++){
		a[i] = (double)i;
		printf("Init a[%d] with %f\n", i, a[i]);
	 }
}

int main(int argc, char **argv){
	
	const int count = 100000;
	double* a;
	
	a = (double*)malloc(count);
	init(a, count);

	return 0;
}
