#include<stdio.h>
int main()
{
    int number;
    printf("enter a number to check positive,negative or zero\n");
    scanf("%d",&number);

    if (number>0)
    {
        printf("%d number is positive",number);
    }
    else if(number<0)
    {
        printf("%d number is negative",number);
    }
    else if (number==0)
    {
        printf("%d number is zero",number);
    }
    
    
}