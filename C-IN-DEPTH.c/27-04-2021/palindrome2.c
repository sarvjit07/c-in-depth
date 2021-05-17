
#include <stdio.h>
int main()
{
    int i, rem, sum, temp, start = 1000, end = 9999;

    for (i = start; i <= end; i++)
    {
        temp = i;
        sum = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            sum = (sum * 10) + rem;       
            temp = temp / 10;
        }
        if (i == sum)
            printf("%d ", i);
    }
    return 0;
}
