#include<stdio.h>
void selection(int age,float ht);
int main()
{
    int age;
    int ht;
    printf("enter age and height");
    scanf("%d%f",&age,&ht);
    selection(age,ht);
    return 0;

}
void selection(int age,float ht)
{
    if(age>25)
    {
        printf("age should be less than 25\n ");
        return;
    }
    if(ht>5)
    {
        printf("height should be more than 5\n");
        return;
    }
    printf("selected\n");
}
