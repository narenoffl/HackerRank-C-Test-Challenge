#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void Count(char a[],char b,int ct)
{
    int i,count=0;
    for(i=0;i<ct;i++)
    {
        if(a[i]==b)
        {
            count++;
        }
    }
    
    
    if(count==1)
    {
        printf("character \'%c\' is presented %d time in a given string",b,count);
    }
    else if(count>1)
    {
        printf("character \'%c\' is presented %d times in a given string",b,count);
    }
    else{
        printf("character \'%c\' not presented in a given string",b);
    }
}
