#include<stdio.h>
double power(double a,int n);
#include<math.h>
int main()
{
    double a;
    int n;
    printf("enter base and exponent");
    scanf("%lf\n%d",&a,&n);
    printf("%lf raised to power %d is %lf\n",a,n,power(a,n));
    return 0;
}
double power(double a,int n)
{
    int i;
    double p=1;
    if(n==0)
    return 1;
    else
    {
          for(i=1;i<=abs(n);i++)
          p=p*a;
          if(n>0)
          return p;
          else  
          return 1/p;
    }
}