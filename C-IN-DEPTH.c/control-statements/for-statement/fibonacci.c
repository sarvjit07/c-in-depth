#include<stdio.h>
int main()
{
    long x,y,z;
    int i,n;
    x=0;
    y=1;
    printf("enter the number of terms\t");
    scanf("%d",&n);
    printf("%ld ",y);
    for ( i = 1; i < n; i++)
    {
        z=x+y;
        printf("%ld ",z);
        x=y;
        y=z;
    }
    printf("\n");
    return 0;
}