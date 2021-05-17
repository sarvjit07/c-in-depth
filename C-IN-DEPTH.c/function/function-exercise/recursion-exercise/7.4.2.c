#include<stdio.h>
int summation(int n);
int main()
{
    int num=4;
    printf("%d of %d \n",num,summation(num));
}
int summation(int n)
{
    if(n==0)
    return 0;
    return(n+summation(n-1));
}