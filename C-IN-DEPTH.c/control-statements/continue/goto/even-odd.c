#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n%2==0)
    goto even;
    else
    goto odd;
    even:
    printf("number is even\n");
    goto end;
    odd:
    printf("number is odd\n");
    goto end;
    end:
    printf("\n");
    return 0;
}