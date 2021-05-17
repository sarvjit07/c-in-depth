#include<stdio.h>
int rseries(int n);
int main()
{
    int n=0;
    printf("enter terms");
    scanf("%d",&n);
    printf("\b\b=%d\n\n\n",rseries(n));
    return 0;
}
int rseries(int n)
{
    int sum;
    if(n==0)
    return 0;
    sum=n+rseries(n-1);
    printf("%d+",n);
    return sum;
}