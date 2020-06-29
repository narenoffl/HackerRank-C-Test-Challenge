#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

int parse_int(char*);



/*
 * Complete the 'closedPaths' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER number as parameter.
 */

int closedPaths(int number) {
    int cp = 0 , rem;
    while(number != 0) {
        rem = number % 10;
        if(rem == 0 || rem == 4 || rem == 6 || rem == 9){
            cp = cp+1;

        }
        if (rem == 8){
            cp = cp+2;
        }
        number = number/10;

    }
    return cp;
}
    
