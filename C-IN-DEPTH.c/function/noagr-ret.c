#include<stdio.h>
int func(void);
int main()
{
    printf("%d\n",func());
    return 0;
}
int func(void)
{
    int num,s=0;
    for(num=1;num<=25;num++)
    {
        if(num%2!=0)
        s=s+num*num;
    }
    return s;
}