#include<stdio.h>
int sum(int n);
int main(void)
{
    int num;
    printf("enter a number ");
    scanf("%d",&num);
    printf("sum of digits of %d is %d\n",num,sum(num));
    return 0;
}
int sum(int n)
{
    int sum=0;
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}