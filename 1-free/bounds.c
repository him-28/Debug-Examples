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

    // try to read out of bounds
    printf("The %dth int is %d\n", NUM_INTS, int_block[NUM_INTS]);
    
    // this also should not work
    printf("The -1st int is %d\n", int_block[-1]);
    
    // Free the ints
    free(int_block);
}
