#include<stdio.h>
int larger(int x,int y);
int main()
{
    int x,y;
    printf("enter two number ");
    scanf("%d%d",&x,&y);
    printf("larger number=%d\n",larger(x,y));
    return 0;
}
int larger(int x,int y)
{
    return x>y?x:y;
}