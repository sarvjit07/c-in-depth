// #include<stdio.h>
// int main()
// {
//     int year;
//     printf("enter year:");
//     scanf("%d",&year);
//     if (year%100!=0)
//     {
//         if (year%4==0)
        
//             printf("leap year\n");
//             else
//             printf("not leap\n");
        
        
//     }
//     else
//     {
//         if(year%400==0)
//         printf("leap year\n");
//         else
//         printf("not leap\n");
//     }
//     return 0;
// }



#include<stdio.h>
int main()
{
    int year;
    printf("enter year:");
   scanf("%d",&year);
    if (year%100!=0&&year%4==0||year%400==0)
    printf("leap year\n");
    else
    printf("not leap year");
}