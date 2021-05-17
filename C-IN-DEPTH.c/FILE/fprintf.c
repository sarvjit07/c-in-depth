#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char name[10];
    int age;
    if((fp=fopen("rec","w"))==NULL)
    {
        printf("Error in opening file\n");
        exit(1);
    }
printf("enter your name and age");
scanf("%s%d",name,&age);
fprintf(fp,"my name is %s and age is %d",name,age);
fclose(fp);
return 0;
}