#include<stdio.h>
int sum(int a,int b);
int main(void)
{
    (void)sum(1,2);
    return 0;
}
int sum(int a,int b)                            //  sum is 3
{
    printf("sum is %d\n",a+b);
    return a+b;
}