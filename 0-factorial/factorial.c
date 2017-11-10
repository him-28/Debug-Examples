// Example computing the factorial of an integer
// 5! = 5 * 4 * 3 * 2 * 1 
// Debug with gdb
// list     - list the source 
// break .. - insert break points at line or function ..
// print ..     - print the current value of .. Setting: print var=value
// info locals  - list local variables of current stack

#include <stdio.h>
#include "common.h"

int main(int argc, char** argv) {
     if (argc != 2) {
        printf("ERROR Missing input number\n");
        return 1;  
     }
     
     int num = atoi(argv[1]);
     if (num <= 0) {
        printf("ERROR expecting an input number greater than 0, got '%s'\n", argv[1]);
        return 1;  
     }

     int factorial=1;
     int i;
     for (i = 1; i <= num; i++) {
         factorial *= i;
     }

     printf("%d! = %d\n", num, factorial);

     return EXIT_SUCCESS;
}


