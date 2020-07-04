#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x,y;
    scanf("%d",&x);
    scanf("\n");
    scanf("%d",&y);
    if(y>=x){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
