// #include<stdio.h>
// int main()
// {
//     int i=1,n,sum=0;
//     float avg;
//     printf("enter 10 positive numbers :\n");
//     while(i<=10)
//     {
//         printf("enter number %d :",i);
//         scanf("%d",&n);
//         if(n<0)
//         {
//             printf("enter only positive number\n");
//             continue;
//         }
//         sum+=n;
//         i++;

//     }
//     avg=sum/10.0;
//     printf("sum=%d  avg=%f\n",sum,avg);
//     return 0;
// }


#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    float avg;
    printf("enter 10 positive numbers :\n");
    while(i<=10)
    {
        printf("enter number %d :",i);
        scanf("%d",&n);
        if(n>=0)
        {
            sum+=n;
            i++;
        }
        else
        printf("enter only positive number ");
        
    }
    avg=sum/10.0;
    printf("sum=%d avg=%f\n",sum,avg);
}




