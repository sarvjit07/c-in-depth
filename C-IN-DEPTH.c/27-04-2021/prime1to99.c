#include <stdio.h>
int main()
{
    int a = 1, b, i, c = 99, j;

    for (j = a; j <= c; j++)
    {
        b = 0;
        for (i = 1; i <= j; i++)
        {
            if (j % i == 0)
            {
                b++;
            }
        }
        if (b == 2)
        {
            printf("%d ", j);
        }
    }
}
