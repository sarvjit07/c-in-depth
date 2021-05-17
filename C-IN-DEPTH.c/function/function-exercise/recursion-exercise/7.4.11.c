#include<stdio.h>
int divby9(long int n);
int main()
{
   int num=58;
   printf("%d",divby9(num));
}
int divby9(long int n)
{
    int sumofdigits;
    if(n==9)
    return 1;
    if(n<9)
    return 0;
    sumofdigits=0;
    while(n>0)
    {
        sumofdigits+=n%10;
        n/=10;
    }
    return divby9(sumofdigits);
}