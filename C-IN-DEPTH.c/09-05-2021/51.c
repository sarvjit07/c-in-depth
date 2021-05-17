#include<stdio.h>
int main()
{
    int n,rev=0,rem,ori;
    n=1001;
    ori=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(ori==rev)
    printf("palimdrone",ori);
    else
    printf("not");
}