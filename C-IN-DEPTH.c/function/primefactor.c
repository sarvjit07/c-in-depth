#include <stdio.h>
void pfact(int num);
int main()
{
    int num;
    printf("enter a number :");
    scanf("%d", &num);
    pfact(num);
    printf("\n");
    return 0;
}
void pfact(int num)
{
    int i;
    for (i = 2; num != 1; i++)
        while (num % i == 0)
        {
            printf("%d", i);
            num = num / i;
        }
}