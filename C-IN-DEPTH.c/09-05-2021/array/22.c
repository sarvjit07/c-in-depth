#include <stdio.h>
int main()
{
    int i, j, n = 10, temp;
    int a[100] = {1, 2, 5, 4, 8, 9, 6, 4, 6, 4, 8};
    // for ( i = 0; i < n; i++)
    // {
    //     scanf("%d",&a[i]);
    // }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
            if (a[i] > a[j] )
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}