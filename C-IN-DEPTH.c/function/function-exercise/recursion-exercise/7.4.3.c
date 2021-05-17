#include<stdio.h>
void display(int n);
int main()
{
    int num=4;
    display(num);
}
void display(int n)
{
    if(n==0)
    return ;
    printf("%d  ",n);
    display(n-1);
}