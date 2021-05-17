#include<stdio.h>
int main()
{
    long num;
    int dig,sum;
    printf("enter a number :");
    scanf("%ld",&num);
    printf("%ld->",num);
    do
    {
        sum=0;
     while (num!=0)
    {
        dig=num%10;
        sum=sum+dig;
        num=num/10;
    }
    printf("%d->",sum);
    num=sum;

    }
    while(num/10!=0);
    return 0;
}