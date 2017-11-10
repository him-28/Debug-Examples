#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {

    // allocate space for a string on the heap
    char* s = malloc(strlen("Hello World!") + 1);
    char* t = malloc(strlen("Hello World!") + 1);

    // there should not be enough space for this string
    strcpy(s, "Hello World!                    Hello World!");
    
    // this should work
//    strcpy(t, "Hello World!");

    // printing test
    printf("s = %s\n", s);
    printf("t = %s\n", t);

    return 0;
}
