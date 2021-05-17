#include <stdio.h>

int main()
{
  int n,r,sum=0,i;
  printf("Enter n:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  r=i*i;
  sum=sum+r;
  
  }
  
  printf("Sum of square of number from 1 to %d is %d",n,sum);
  return 0;
}