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
    fp=fopen("stu","rb");
    if(fp==NULL)
    {
        printf("Error in opening file\n");
        exit(1);
    }
    printf("\nNAME\tROLLNO\tMARKS\n");
    while (fread(&student,sizeof(student),1,fp)==1)
    
    {
        printf("%s\t",student.name);
        printf("%d\t",student.roll);
        printf("%d\t",student.marks);
       
    }
    fclose(fp);
    return 0;
}
    