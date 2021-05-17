
#include <stdio.h>
int main()
{
    int num, temp, rem, sum=0;
    printf("enter number");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        sum = (sum * 10) + rem;
        num = num / 10;
    }
    if (temp == sum)
        printf("palindrome number");
    else
        printf("not palindrome number");
        return 0;
}
