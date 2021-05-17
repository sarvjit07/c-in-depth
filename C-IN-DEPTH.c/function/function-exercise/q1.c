#include<stdio.h>
int func();
int main()
{
    printf("lucknow\n");
    goto ab;
    return 0;                                                                 /*error goto not used in function or show ab not defind*/
}
void func()
{
    ab:
    printf("arrah\n");
}