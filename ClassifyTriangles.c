#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float a,b,c;
    scanf("%f",&a);
    scanf("%f\n",&b);
    scanf("%f\n",&c);
    if(a==b && b==c){
        printf("Equilateral");

    }
    else if(a==b || b==c || a==c){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}
