#include<stdio.h>
int main()
{
    int choice;
    while(1)
    {
        printf("1.create database\n");
        printf("2.insert new record\n");
        printf("3.modify a record\n");
        printf("4.delete a record\n");
        printf("5.display all records\n");
        printf("6.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("database created.......\n\n");
            break;
            case 2:
            printf("record inserted.........\n\n");
            break;
            case 3:
            printf("record modified......\n\n");
            break:
            case 4:
            printf("record deleted.........\n\n");
            break;
            case 5:
            printf("records displayed.......\n\n");
            break;
            case 6:
            exit(1);
            default:
            printf("wrong choice\n");

        }

    }
    return 0;
}