#include <stdlib.h>
#include <stdio.h>
#define NUM_INTS 4

int main(void) {

    int i;

    // allocate memory on the heap
    int* int_block = malloc(NUM_INTS * sizeof(int));

    // fill it with numbers
    for (i = 0; i < NUM_INTS; i++) {
        int_block[i] = i;
    }

    // Free the ints
 //   for (i = 0; i < NUM_INTS; i++) {
       // printf("The -1st int is %d\n", int_block[-1]);
//	free(&int_block[i]);
  //  }

    return 0;
}
