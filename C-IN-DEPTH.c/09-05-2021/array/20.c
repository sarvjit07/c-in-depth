#include<stdio.h>
int main()
{
    int a[50],i,n=5,large,sec_large;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    large=a[0];
    for ( i = 0; i < n; i++)
    {
        if(a[i]>large)
        large=a[i];
    }
    sec_large=a[0];
    for ( i = 1; i < n; i++)
    {
        if(a[i]>sec_large && a[i]<large)
        sec_large=a[i];
    }
    printf("%d\n%d\n",large,sec_large);
    
    
}