#include<stdio.h>
int reverse(int n);
int ispalindrome(int num);
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(ispalindrome(num))
    printf("number is a palindrome\n");
    else
       printf("number is not palindrome\n");
    return 0;
}
int ispalindrome(int num)
{
    if(num==reverse(num))
    return 1;
    return 0;


}
int reverse(int n)
{
    int rev=0;
    do
    {
        rev=rev*10+n%10;
        n/=10;

    }while(n>0);
    return rev;
}