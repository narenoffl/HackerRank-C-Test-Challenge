#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int p,t,i;
    scanf("%d %d",&p,&t);
    i = (t/4) - (t/7);
    printf("%d",p+i);


    return 0;
}
