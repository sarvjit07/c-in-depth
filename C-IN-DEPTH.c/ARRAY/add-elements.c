#include<stdio.h>
int main()
{
    int i=0,sum=0,n=0;
    printf("enter number of elements");
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf("enter a value for arr[%d]:",i);
        scanf("%d",&arr[i]);
         sum=sum+arr[i];
    }
    
    printf("sum=%d\n",sum);
    return 0;
}

