#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int sumPositiveIntegers(float A[], int n)
{
    int sum = 0, i = 0;
    while(i < n)
    {
        if(A[i] < 0){
            i++;
        }
        else if(A[i] >= 0)
        {
            float a = A[i];
            float b = floor(a);
            
            if(a == b)
            {
                sum = sum + A[i];
                i++;
            }
            
            else{
                i++;
            }
        }
    }
    return sum;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    float A[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%f", &A[i]);
    }
    
    printf("%d",sumPositiveIntegers(A,n));
    
    
    return 0;
    
}
