#include<stdio.h>
struct st
{
    int roll;
    char name[20];
    int fee;
};
void disp(struct st *ptr);
void main()
{
    struct st s1={1001,"mahesh",7000};
    disp(& s1);
}
void disp(struct st *ptr)
{
    printf("roll: %d\n",ptr->roll);
    printf("name:%s\n",ptr->name);
    printf("fee:%d\n",ptr->fee);
}