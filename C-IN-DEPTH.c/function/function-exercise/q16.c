#include<stdio.h>
int main(void)
{
    int func(int a,int b)
    {
        return(a+b);
    }
    int c;                              //output  8
    c=func(3,5);
    printf("%d",c);
    return 0;
}