#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float amount,a;
    scanf("%f",&a);
    if(a==0.0f){
        printf("Unacceptable");
        printf("\n$0.00");
    }
    else if(a==0.4f){
        printf("Acceptable");
        printf("\n$%.2f",(2400.00*0.4));
    }
    else if(a == 0.6f){
        printf("Meritorious");
        printf("\n$%.2f", (2400.00*0.6));
    }
    else{
        printf("Not a valid rating");
    }
    return 0;
}
