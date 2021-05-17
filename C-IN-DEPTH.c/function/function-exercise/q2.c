#include<stdio.h>
void func(int a,int b);
int main()
{
    int x;
    x=func(2,3);            /*we use void so can't use (=) assignment expression.*/
    return 0;
}
void func(int a, int b)
{
    int s;
    s=a+b;
    return;
}