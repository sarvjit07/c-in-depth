#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
    if(n%i==0)
    break;
    if(i>sqrt(n))
    printf("%d is prime\n",n);
    else
    printf("% is not prime",n);
    return 0;
}
