#include <stdio.h>
int main()
{
    int x = 2, n = 2, temp = 1, sum = 0, i;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            
            temp = temp * x;
        }
        sum = sum + temp;
    }

    printf("%d", sum);
}