#include<stdio.h>
float power(float a,int n);
int main(void)
{
    float a,p;
    int n;
    printf("enter a and n");
    scanf("%f%d",&a,&n);
    p=power(a,n);
    printf("%f raised to power %d is %f\n",a,n,p);
    return 0;
}
float power(float a,int n)
{
    if(n==0)
    return 1;
    else
    return(a*power(a,n-1));
}