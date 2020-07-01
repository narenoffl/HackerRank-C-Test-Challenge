#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    scanf("%c",&ch);
    printf("%d",ch);
    char c1,c2;
    c1= --ch;
    c2 = c1+2;
    printf("\n");
    printf("%c %c",c1,c2);
    return 0;
}
