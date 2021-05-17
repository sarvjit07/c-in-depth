#include<stdio.h>
int main()
{
    int number1,number2,reminder,quatient,zero;
    printf("enter number1 and number2\n",number1,number2);
    scanf("%d\n%d",&number1,&number2);


    if (number1>0||number2>0)

    {
       reminder=number1/number2;
       printf("%d",reminder);
       quatient=number1%number2;
       printf("%d",quatient);
    }
    
else if (number1==0||number2==0);
{
   printf("number is zero",zero);
}
    
}