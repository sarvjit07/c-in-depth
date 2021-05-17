#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number");
    scanf("%d",&number);
    for (int i = 0; i < number; i++)
    {
       if(i%2==0) 
    {
        printf("%d\n",i);
    }
    }
    
}