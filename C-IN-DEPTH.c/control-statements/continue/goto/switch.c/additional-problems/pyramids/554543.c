#include<stdio.h>
int main ()
{
    int i,j,n;
    printf("enter number of lines:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf("%d",n+1-j);
        printf("\n");
    }
}