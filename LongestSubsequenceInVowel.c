#include <stdio.h>

int main()
{
    char s[100];
    int a=0,b=0,c=0,d=0,e=0,i,count=0;
    printf("Enter the string : ");
    scanf("%s",&s);
    for(i=0; s[i]!='\0'; i++){
        if(s[i]=='a' && b==0){
            a+=1;
        }
        if(s[i]=='e' && c==0 && a!=0)
        {
            b+=1;
        }
        if(s[i]=='i' && d==0 && b!=0){
            b+=1;
        }
        if(s[i]=='i' && d==0 && b!=0){
            c+=1;
        }
        if(s[i]=='o' && e==0 && c!=0){
            d+=1;
        }
        if(s[i]=='u' && d!=0)
        {
            e+=1;
        }
    }
    count = a+b+c+d+e;
 printf("Number of vowels :%d ",count);
}
