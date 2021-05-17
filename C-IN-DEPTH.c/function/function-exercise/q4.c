#include<stdio.h>
int add(int x,y,z)
{
    return x+y+z;
}                        /*not decleared parameter in function 1,2,3*/
int main()
{
    int sum;
    sum=add(1,2,3);
    return 0;
}