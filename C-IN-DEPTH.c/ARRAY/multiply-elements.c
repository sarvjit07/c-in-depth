#include<stdio.h>
int main()
{
    int i=0,mul=1,n=0;
    printf("enter number of elements");
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf("enter a value for arr[%d]:",i);
        scanf("%d",&arr[i]);
         mul=mul*arr[i];
    }
    
    printf("mul=%d\n",mul);
    return 0;
}