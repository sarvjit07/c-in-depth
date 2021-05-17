#include<stdio.h>
void fun1(void);
void fun2(void);
int a,b=6;
int main(void)
{
    printf("inside main():a=%d,b=%d\n",a,b);
    fun1();
    fun2();
    return 0;
}
void fun1(void)
{
    printf("inside fun1():a=%d,b=%d\n",a,b);
}
void fun2(void)
{
    int a=8;
    printf("inside fun2():a=%d,b=%d\n",a,b);
}