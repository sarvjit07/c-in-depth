#include<stdio.h>
void pfactors(int num);
int main()
{
    int num=4;
    pfactors(num);
}



void pfactors(int num)
{
    int i=2;
    if(num==1)
    return;
    while(num%1!=0)
    i++;
    printf("%d",i);
    pfactors(num/i);
}