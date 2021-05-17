#include<stdio.h>
int sqr(int x);
int cube(int x);
int func(int n);
int main()
{
    int n=5;
    printf("%d\n",func(n));
    return 0;                            //output  22 
}
int sqr(int x)
{return x*x;}
int cube(int x)
{return x*x*x;}
int func(int n)
{
    return n+sqr(n-2)+cube(n-3);
}