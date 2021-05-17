#include <stdio.h>
struct st
{
    int roll;
    char name[20];
    int fee;
};
void disp(struct st s1[]);
void main()
{
    struct st s1[5] = {
        {1, "ram", 7000},
        {2, "shyam", 8000},
        {3, "mohan", 9000},
        {4, "gautam", 8000},
        {5, "pratham", 6000},
    };
    disp(s1);
}
void disp(struct st s1[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("roll:%d\n",s1[i].roll);
        printf("name:%s\n",s1[i].name);
        printf("fee:%d\n",s1[i].fee);
    }
}
