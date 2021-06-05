#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() 
{
    char str[100];
    scanf("%[^\n]",str);
    
    int n=strlen(str);
    int i,j=0,k=0;
    for(i=0;i<n;i++)
    {
        if(str[i]==' '||i==n-1)
        {
            if(str[i]==' ')
            {
                j=i-1;
            }
            else{
                j=i;
            }
            
            int temp;
            while(k<j)
            {
                temp=str[k];
                str[k]=str[j];
                str[j]=temp;
                k++;
                j--;
            }
            k=i+1;
        }
    }
    
    for(i=n-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    
    return 0;
}
