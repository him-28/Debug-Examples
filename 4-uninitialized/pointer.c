#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int main(void) {

    // allocate space for an int on the heap
    int* p = malloc(sizeof(int));

    // p is pointing to junk memory that we dereference into i
    int i = *p;

    // i is technically initialized with junk data
    assert(i == 0);

    printf("Assert OK\n");
   
    // clean up 
    free(p);

    return 0;
}
