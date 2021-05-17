#include<stdio.h>
struct st
{
    int roll;
    char name[20];
    int fee;
};
void main()
{
    struct st s1,*ptr;
    ptr=&s1;
    printf("enter roll");
    scanf("%d",&s1.roll);
    printf("enter name");
    scanf("%s",&s1.name);
    printf("enter fee");
    scanf("%d",&s1.fee);
    printf("roll:%d\n",ptr->roll);
    printf("name:%s\n",ptr->name);
    printf("fee:%d\n",ptr->fee);
}
