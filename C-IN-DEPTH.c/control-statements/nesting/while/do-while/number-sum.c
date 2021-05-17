#include<stdio.h>
int main()
{
    int num,sum=0;
    do
    {
        printf("enter a number(enter 0 to stop):");
        scanf("%d",&num);
        sum=sum+num;
    } while (num!=0);
    printf("sum of number is=%d\n",sum);
    return 0;
    
}