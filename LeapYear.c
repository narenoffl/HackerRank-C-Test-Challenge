#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int year;
    scanf("%d",&year);
    if(year % 400 == 0){
        printf("Leap Year");
    }
    else if(year % 100 == 0){
        printf("Not a Leap Year");
    }
    else if(year % 4 == 0){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}
