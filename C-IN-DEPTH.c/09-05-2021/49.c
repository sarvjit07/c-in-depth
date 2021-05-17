#include<stdio.h>
int main()
{
    int n,i,count=0;
    for ( n = 1; n <99; n++)
    {
        count=0;
    
    for ( i = 2; i < n/2; i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }

    if(count==0 && n!=1)
    {
        printf("%d ",n);
    }
}
}