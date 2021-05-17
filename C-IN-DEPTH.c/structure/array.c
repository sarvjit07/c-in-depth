#include <stdio.h>
#include <string.h>
struct st
{
    int roll;
    char name[20];
    int fee;
};
void main()
{
    int i;
    int size = 1;
    struct st s1[size];
    for (i = 0; i < size; i++)
    {
        printf("enter roll");
        scanf("%d", &s1[i].roll);
        printf("enter name\n");
        // scanf(" %[^\n]%*c",s1[i].name);
        scanf("%s",s1[i].name);
        // gets(s1[i].name);
        printf("enter fee");
        scanf("%d", &s1[i].fee);
    }

    for (i = 0; i < size; i++)
    {
        printf("roll:%d\n", s1[i].roll);
        printf("name:%s\n", s1[i].name);
        printf("fee:%d\n", s1[i].fee);
    }
}
