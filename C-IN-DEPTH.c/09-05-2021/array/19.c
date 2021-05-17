#include<stdio.h>
int main()
{
    int a[50],i,large,small,diff=0;
    int n=5;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
       large=small=a[0];
    for ( i = 1; i < n; i++)
    {
        if(a[i]>large)
        large=a[i];
        if(a[i]<small)
        small=a[i];
    }
    diff=large-small;
    printf("%d  ",large);
    printf("%d  ",small);
    printf("%d",diff);
    
    
}