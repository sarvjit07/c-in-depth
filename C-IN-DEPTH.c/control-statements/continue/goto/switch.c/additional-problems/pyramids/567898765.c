#include<stdio.h>
int main()
{
    int i,j,n,p;
    printf("enter number of lines");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i+1;j++)
        printf(" ");
        p=n+1-i;
        for(j=1;j<=i+1;j++)
        printf("%d",p++);
        p=p-2;
        for(j=1;j<=n-i;j++)
        printf("%d",p--);
        printf("\n");
           
           
    }

}