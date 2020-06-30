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
 * Complete the 'countDuplicate' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY numbers as parameter.
 */

int countDuplicate(int numbers_count, int* numbers) {
int a,b,c=0,d[numbers_count];
for(a=0; a<numbers_count; a++)
{
    for(b=a+1; b<numbers_count; b++){
        if(numbers[a]==numbers[b] && d[b] != numbers[b] ){
            d[a] = numbers[a];
            c = c+1;
            break;
        }
    }
}
return c;
}

int main()
