#include<stdio.h>
int main()
{
    
    for (int n = 1; n<= 5; n++)
    {
        if(n==5)
        break;
        printf("number=%d\n",n);
    }
    printf("out of for loop\n");
    return 0;
    
}