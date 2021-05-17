#include <stdio.h>
int main()
{
    int i;
    int n = 0;
    int even = 0, odd = 0;
    printf("enter number of elements:");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("enter value of %d index", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d: ", arr[i]);

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("\n%d even number\n,%d odd number", even, odd);
    return 0;
}