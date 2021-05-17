#include<stdio.h>
int main()
{
    int sum=0,num;
    
        printf("enter a number(enter 0 to stop):");
        scanf("%d",&num);
        sum=sum+num;
        while (num!=0)
        {
            printf("enter a number (enter 0 to stop):");
            scanf("%d",&num);
            sum=sum+num;
        }
        printf("sum of number is=%d",sum);
        return 0;
}