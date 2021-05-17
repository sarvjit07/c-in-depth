#include<stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("enter a number :");
    scanf("%d",&n);
    while (n>0)
    {
        rem=n%10;
        sum=rem+sum;
        n=n/10;
    }
    printf("sum of digit=%d\n",sum);
}