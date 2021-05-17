#include<stdio.h>
int sum(int x,int y);
int multiply(int x,int y);
int main(void)
{
    int m=6,n=3;
    printf("%d\t",multiply(m,n));
    printf("%d\t",multiply(15,4));
    printf("%d\t",multiply(m+n,m-n));
    printf("%d\t",multiply(6,sum(m,n)));
    return 0;                                            /*output 18   60   27  54*/
}
int multiply(int x,int y)
{
    return x*y;
}
int sum(int x,int y)
{
    return x+y;
}