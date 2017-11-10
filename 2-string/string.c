#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {

    // allocate space for a string on the heap
    char* s = malloc(strlen("Hello World!"));
    strcpy(s, "Hello World!");

    // printing test
    printf("%s\n", s);

    free(s);

    return 0;
}
