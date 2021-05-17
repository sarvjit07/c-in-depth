#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int fibiterative(int n)
{
    int a=0,b=1;
    for(int i=0;i<n-1;i++)
    {
        b=a+b;
        a=b-a;
    }
    return a;
}

int fiborecusive(int n)
{
    if ((n == 1) || (n == 2))
    {
        return n - 1;
    }
    else
    {
        return fiborecusive(n - 1) + fiborecusive(n - 2);
    }
}
int main()
{
    int n,s,d;
    printf("enter number");
    scanf("%d",&n);
    d=fibiterative(n);
    
    s=fiborecusive(n);
    printf("result:%d\n",d);
    printf("result:%d\n",s);


    return 0;
}
