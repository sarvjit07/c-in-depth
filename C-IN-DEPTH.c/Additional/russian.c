#include<stdio.h>
int main()
{
    int a,b,x,y,s=0;
    printf("enter two numbers to be multiplied");
    scanf("%d%d",&x,&y);
    a=x;
    b=y;
    while (a>=1)
    {
        if(a%2!=0)
        s=s+b;
        a/=2;
        b*=2;

    }
    printf("%d * %d =%d\n",x,y,s);
    return 0;
}