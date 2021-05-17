#include<stdio.h>
int main()
{
    int n=10,c=0,big=0,i;
    for ( i = 1; i <=n; i++)
    {
        printf("enter number");
        scanf("%d",&c);
        if(big<c)
        big=c;
    }
    printf("max=%d",big);
    
}