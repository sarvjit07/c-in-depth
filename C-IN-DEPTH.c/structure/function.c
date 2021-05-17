#include<stdio.h>
struct st
{
    int roll;
    char name[20];
    int fee;
};
void disp(struct st s1);
void main()
{
    struct st s1={1001,"mahesh",7000};
    disp(s1);
}
void disp(struct st s1)
{
    printf("roll:%d\n",s1.roll);
    printf("name:%s\n",s1.name);
    printf("fee:%d\n",s1.fee);
}
