#include<stdio.h>
#include<math.h>
int main()
{
     double n,s;
     printf("enter a number:");
     scanf("%lf",&n);
     s=sqrt(n);
     printf("square root of % .2lf is % .2lf\n",n,s);
     return 0;
}