#include<stdio.h>
struct st
{
    int roll;
    char name[20];
    int fee;
};
void main()
{
    struct st s1;
    printf("enter roll\n");
    scanf("%d",&s1.roll);
    printf("enter name\n");
    scanf("%s",&s1.name);
    printf("enter fee\n");
    scanf("%d",&s1.fee);

    printf("roll:%d\n",s1.roll);
    printf("name:%s\n",s1.name);
    printf("fee:%d",s1.fee);
}
