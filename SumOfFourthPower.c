#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int n;
    scanf("%d",&n);
    int result=0;
    while(n)
    {
        int sum=1;
        for(int i=1; i<=4; i++)
        {
            sum = sum * n;
        }
        result = result + sum;
        n--;
    }
    printf("%d",result);
    return 0;
}

