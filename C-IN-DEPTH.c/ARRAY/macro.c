#include<stdio.h>
#define n 5
int main()
{
    int a[n],i;
    for(i=0;i<n;i++)
    {
        printf("%d",i);
        scanf("%d",&a[i]);
    }
    printf("\n array element are as follow:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
