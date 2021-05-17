#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter a number :");
    scanf("%d",&n);
    do
    {
        n=n/10;
        count++;
    } while (n>0);
    printf("number of digits=%d\n",count);
    return 0;
}