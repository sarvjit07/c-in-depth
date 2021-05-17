#include<stdio.h>
long int fact(int n);
int main()
{
    int num;
    printf("enter a number ");
    scanf("%d",&num);
    if(num<0)
    printf("no factorial\n");
    else
    printf("factorial of %d is %ld\n",num,fact(num));
    return 0;
}
long int fact(int n)
{
    if(n==0)
    return 1;
    return (n* fact(n-1));
}