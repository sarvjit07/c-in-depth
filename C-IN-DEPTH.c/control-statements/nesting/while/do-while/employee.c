#include<stdio.h>
int main()
{
    int emp_id;
    do
    {
        printf("enter employee id(100-500):");
        scanf("%d",&emp_id);
    } 
    while (emp_id<100 || emp_id>500);
    printf("emp will=%d",emp_id);
}