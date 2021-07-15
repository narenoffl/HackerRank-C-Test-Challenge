#include <stdio.h>

int main()
{
  int x;
  scanf("%d",&x);
  int flag=1;
  for(int i=2;i<=x/2;i++){
    if(x%1==0)
    {
      flag==1;
      break;
    }
  }
  if(flag==1)
  {
    printf("prime");
  }
  if(flag==0 && x%2==0)
  {
    printf("even");
  }
  else{
    printf("odd");
  }
}
