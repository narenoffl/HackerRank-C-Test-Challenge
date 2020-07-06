#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b;
    scanf("%d",&a);
    scanf("%d\n",&b);
    if(a % 10 == b % 10){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}
