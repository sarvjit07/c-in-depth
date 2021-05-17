#include<stdio.h>

int fun(int n)
{
    if(n==1)
        return 1;
    else
         return n*fun(n-1);

}
int main()
{
    printf("%d",fun(4));
    return 0;
}