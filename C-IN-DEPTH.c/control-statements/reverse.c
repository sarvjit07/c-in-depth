/*#include<stdio.h>
int main()
{
    long int n,r,sum=0;
    printf("enter n:",n);
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;

    }
    {
        printf("%d is reverse of n",sum);

    }
    return 0;
    
}*/

#include<stdio.h>
#include<string.h>
 int main()
 {
     long int number, lastDigit;
    char ch[10] = "0022233", rev[10];
    //  printf("Enter a number: ");
    //  scanf("%d",&number);
    int  i = strlen(ch), j=0;
     while( i > -1 )
     {
        //  lastDigit = number%10;
         printf("%c",ch[i]); 
        rev[j] = ch[i];
         i--; j++;
        //  number /= 10;
     }

     return 0;
 }



//  #include <stdio.h>
// int main() {
//     int n, rev = 0, remainder;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     while (n != 0) {
//         remainder = n % 10;
//         rev = rev * 10 + remainder;
//         n /= 10;
//     }
//     printf("Reversed number = %d", rev);
//     return 0;
// }
