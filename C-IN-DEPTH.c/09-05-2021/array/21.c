#include<stdio.h>
int main()
{
    int arr[10]={5,2,3,4,5,6,7,8,9,10};
    int i,n=10;
    for ( i = 0; i < n--; ++i)
    {
        int temp=arr[i];
        arr[i]=arr[n];
        arr[n]=temp;

    }
    for ( i = 0; i < 10; ++i)
    {
        printf("    %d",arr[i]);
    }
    
    
}