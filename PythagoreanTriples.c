#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,n;
    scanf("%d",&a);
    scanf("%d\n",&b);
    scanf("%d\n",&n);
    if(a*a + n*n == b*b ||a*a + b*b == n*n || b*b + n*n == a*a ){
      
       printf("yes");
    }
    else{
        printf("no");
    }
    
}
