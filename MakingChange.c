#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int cents;
    scanf("%d",&cents);
    int t=0,l=0,q=0,d=0,n=0,p=0;
    if(cents>=200){
        while(cents>=200){
            cents = cents-200;
            t+=1;
        }
    }
    if(cents<200 && cents>=100){
        while(cents>=100){
            cents = cents-100;
            l+=1;
        }
    }
    if(cents<100 && cents>=25){
        while(cents>=25){
            cents = cents-25;
            q+=1;
        }
    }
    if(cents<25 && cents>=10){
        while(cents>=10){
            cents = cents-10;
            d+=1;
        }
    }
    if(cents<10 && cents>=5){
        while(cents>=5){
            cents = cents-5;
            n+=1;
        }
    }
    if(cents<5 && cents>=1){
        while(cents>=1){
            cents = cents-1;
            p+=1;
        }
    }
printf("%d toonies" ,t);
printf("\n");
printf("%d loonies" ,l);
printf("\n");
printf("%d quarters" ,q);
printf("\n");
printf("%d dimes" ,d);
printf("\n");
printf("%d nickels" ,n);
printf("\n");
printf("%d pennies" ,p);
    

    
   

    
}
