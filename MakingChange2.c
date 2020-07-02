#include <stdio.h>

int main()
{
    int cent,i;
    int d[6] = {200,100,25,10,5,1};
    int c[6];
    scanf("%d",&cent);
    for(i=0;i<6;i++){
        c[i]=cent/d[i];
        cent%=d[i];
    }
    printf("%d toonies",c[0]);
    printf("\n%d loonies",c[1]);
    printf("\n%d quarters",c[2]);
    printf("\n%d dimes",c[3]);
    printf("\n%d nickels",c[4]);
    printf("\n%d pennies",c[5]);
    
}
