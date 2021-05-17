#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX],i,j,temp,n,xchanges;
    printf("enter the number of elements:");
    scanf("%d",&n);;
    for ( i = 0; i < n; i++)
    {
        printf("enter elements %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
        xchanges=0;
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+i])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                xchanges++;

            }
        }
        if(xchanges==0)
        break;

    }
    printf("sorted list is :\n");
    for (i = 0; i < n; i++)
        printf("%d ",arr[i]);
    
    printf("\n");
    return 0;
    
    
}