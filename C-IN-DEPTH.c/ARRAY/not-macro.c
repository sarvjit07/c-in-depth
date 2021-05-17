#include<stdio.h>
int main()
{
    int a[3],i;
    for(i=0;i<3;i++)
    {
        printf("%d",i);
        scanf("%d",&a[i]);
    }
    printf("\n array elements are follows:\n");
    for(i=0;i<3;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}