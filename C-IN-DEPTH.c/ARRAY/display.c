#include<stdio.h>
int main(void)
{
    int arr[3],i=0;
    for ( i = 0; i < 3; i++)
    {
        printf("enter a value of arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("the array elements are:\n ");
    for ( i = 0; i < 3; i++)
        printf("%d\t",arr[i]);
     printf("\n");
     return 0;   
    
    
}