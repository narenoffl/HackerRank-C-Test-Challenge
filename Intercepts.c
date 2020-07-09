#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int m,c,y,x,houseno;
    scanf("%d",&m);
    scanf("%d/n",&c);
    printf("The line equation is y = %dx + %d",m,c);
    y = m*x + c ;
    x = -c/m ;
    houseno = x + y ;
    printf("\nThe x intercept is %d",x);
    printf("\nThe y intercept is %d",y);
    printf("\nThe house number is %d",houseno);
    return 0;
}
