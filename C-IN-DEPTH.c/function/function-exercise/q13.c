#include<stdio.h>
int func(int a,int b,int c);
int main(void)
{
    int x=1,y=2,z=3,result;
    result=func(x,y,(z=5,z+10));
    printf("x=%d,y=%d,z=%d",x,y,z);
    printf("result=%d\n",result);                        //x=1,y=2,z=5result=36
    return 0;
}
int func(int a,int b,int c)
{
    return 2*(a+b+c);
}