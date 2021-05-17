#include<stdio.h>
int func();
int main()
{
    int x=10;
    x=func();        /* output=  x=gv  arrah*/
    printf("%d\n",x);       
    return 0;
}
int func(void)
{
    printf("arrah\n");
}