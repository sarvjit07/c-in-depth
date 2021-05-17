#include<stdio.h>
int main()
{
    int count=0,n=346583;
    while(n!=0){
        n=n/10;
        count++;

    }
    printf("%d",count);

}