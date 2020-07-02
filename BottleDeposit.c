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
    float c;
    scanf("%d",&a);
    scanf("\n");
    scanf("%d",&b);
    c = a*0.10 + b*0.25;
    printf("%.2f",c);

    return 0;
}
