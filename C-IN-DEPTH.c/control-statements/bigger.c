// #include<stdio.h>
// int main()
// {   int a,b;
//     printf("enter two number:");
//     scanf("%d %d",&a,&b);
//     if(a>b)
//     printf("Bigger number=%d\n",a);
//     else
//     printf("Bigger number=%d\n",b);
//     return 0;
// }

// #include<stdio.h>
// int main()

// {
//     int number1,number2;
//     printf("enter two number number1 and number2\n");
//     scanf("%d\n%d",&number1,&number2);
//     if (number1>number2)
//     {
//         printf("number1 is bigger");
//     }
//     else
//     {
//         printf("number2 is bigger");
//     }

//  }

#include <stdio.h>
int main()
{

    int age;
    int vippass = 0;

    // vip pass = 1;

    printf("enter your age\n ");
    scanf("%d", &age);

    // if age ("<= 70 && age> = 18")
    if (age <= 70 && age >= 18 || vippass == 1)

        printf("you are above 18 and below 70, you can drive\n");
    else
        printf(" not ");
} 




 