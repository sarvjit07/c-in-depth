#include<stdio.h>

int main()
{
    int arr[106],i,j,temp,n,xchange;
    printf("enter number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter elements",i+1);
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
        xchange=0;
        for ( j = 0; j < n-1-i; j++)
        {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            xchange++;
        }
        }
        if(xchange==0)
        break;
        
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    
    
}
