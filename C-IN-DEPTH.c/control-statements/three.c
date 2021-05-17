// #include<stdio.h>
// int main()
// {
//     int a,b,c,max;
//     printf("Enter three number:");
//     scanf("%d%d%d",&a,&b,&c);
    
//     max=a>b?a>c?a:c:b>c?b:c;
//     printf("largest number is %d\n",max);
// }



#include<stdio.h>
int main()
{
    int number1,number2;
    int result=0;
    printf("enter two number");
    scanf("%d\n%d",&number1,&number2);
    for ( i = 1; i <= number1; i++)
    {
        result=result+number1;
        printtf("%d * %d=%d",number1,number2,result);

    }
    
}


