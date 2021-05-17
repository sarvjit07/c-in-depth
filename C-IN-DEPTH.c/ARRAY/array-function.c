#include<stdio.h>
void check (int num);
int main()
{
    int arr[10],i;
    printf("enter the array elements");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
        check(arr[i]);
    }
    return 0;
    }
    void check(int num)
    {
        if(num%2==0)
        printf("%d is even\n",num);
        else
        printf("%d is odd\n",num);
    }

#include<stdio.h>
int main()
{
    int arr[10],i,sum=0;
    for(i=0;i<10;i++)
    {
        printf("enter a value of arr[%d]:",i)
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("sum=%d",sum);
    return 0;
    
}