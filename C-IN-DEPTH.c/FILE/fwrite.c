#include<stdio.h>
#include<stdlib.h>
struct record
{
    char name[20];
    int marks;
    int roll;
}student;
int main()
{
    FILE *fp;
    int i,n;
    if((fp=fopen("stu","wb"))==NULL)
    {
        printf("Error in opening file\n");
        exit(1);
    }
    printf("Enter number of records:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter name:");
        scanf("%s",student.name);
        printf("enter roll no:");
        scanf("%d",student.roll);
        printf("enter marks:");
        scanf("%d",student.marks);
        fwrite(&student,sizeof(student),1,fp);
    }
    fclose(fp);
    return 0;
}
    