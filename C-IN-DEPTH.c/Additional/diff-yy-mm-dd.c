#include <stdio.h>
int main(void)
{
    int d1, d2, d, m1, m2, m, y1, y2, y;
    printf("enter first data (dd/mm/yyyy):");
    scanf("%d/%d/%d",&d1,&m1,&y1);
    printf("enter second data (dd/mm/yyyy):");
    scanf("%d/%d/%d",&d2,&m2,&y2);
    if (d2 < d1)
    {
        if (m2 == 3)
        {
            if (y % 100 != 0 && y % 4 == 0 || y % 400 == 0)
                d2 = d2 + 29;
            else
                d2 = d2 + 28;
        }
        else if (m2 == 5 || m2 == 7 || m2 == 10 || m2 == 12)
            d2 = d2 + 30;
        else
            d2 = d2 + 31;
        m2 = m2 - 1;
    }
    if (m2 < m1)
    {
        y2 = y2 - 1;
        m2 = m2 + 12;
    }
    y = y2 - y1;
    m = m2 - m1;
    d = d2 - d1;
    printf("difference of the two date is:");
    printf("%d years %d months %d days\n", y, m, d);
    return 0;
}