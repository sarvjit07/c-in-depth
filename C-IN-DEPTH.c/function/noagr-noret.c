#include<stdio.h>
void displaymenu(void);
int main()
{
    int choice;
    displaymenu();
    printf("enter your choice:");
    scanf("%d",&choice);
    return 0;
}
void displaymenu()
{
    printf("1.create database\n");
    printf("2.insert new record\n");
    printf("3.modify a record\n");
    printf("4.delete a record\n");
    printf("5.exit\n");
}