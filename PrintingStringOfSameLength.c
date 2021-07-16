#include <stdio.h> 
#include <string.h> 
int main() 
{ char s1[100], s2[100]; 
fgets(s1, 100, stdin); 
fgets(s2, 100, stdin);

int len1=0,len2=0;
while(s1[len1] != '\n' && s1[len1] != '\r'){
    len1++;
}

while(s2[len2] != '\n' && s2[len2] != 'r'){
    len2++;
}

if(len1==len2){
    printf("yes");
}
else{
    printf("no");
}

return 0;
}
