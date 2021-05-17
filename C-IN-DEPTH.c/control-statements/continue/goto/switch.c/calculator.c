#include<stdio.h>
int main()
{
    char op;
    int a,b;
    printf("enter number ,operator and another number:");
    scanf("%d%c%d",&a,&op,&b);
    switch(op)
    {
        case '+':
        printf("result =%d\n",a+b);
        break;
        case '-':
        printf("result =%d\n",a-b);
        break;
        case '*':
        printf("result =%d\n",a*b);
        break;
        case '/':
        printf("result =%d\n",a/b);
        break;
        case '%':
        printf("result =%d\n",a%b);
        break;
        default:
        printf("enter valid operator\n");

    }
    return 0;
}