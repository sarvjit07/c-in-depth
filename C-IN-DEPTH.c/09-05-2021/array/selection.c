#include<stdio.h>
int main()
{

    int arr[100],i,j,n,temp,min;
    printf("enter the number of elements:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
         printf("enter elements %d-->",i+1);
         scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n-1; i++)
{
    min=i;
    for ( j=i+1; j < n; j++)
    {
      if(arr[min]>arr[j])
      min=j;
    }
    if(i!=min)
    {
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    
}
for ( i = 0; i < n; i++)
{
    printf("%d\n",arr[i]);
}

    
}