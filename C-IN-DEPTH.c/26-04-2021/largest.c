 
#include <stdio.h>
int main()
{
    int n,i,max=0,loction=1 ;
    printf("enter number of elements");
    scanf("%d", &n);
    int arr[n];

    for ( i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &arr[i]);

        if (max < arr[i])
        {
            max = arr[i];
            loction=i+1;
        }
    }

    printf("Largest element = %d loction of element =%d ",max,loction);

    return 0;
}