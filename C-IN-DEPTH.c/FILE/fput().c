#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    char str[80];
    if((fptr=fopen("test","w"))==NULL)
    {
        printf("Error in opening file\n");
        exit(1);
    }
printf("enter the text\n");
printf("To stop entering;press ctrl+d/ctrl+z\n");
while(gets(str)!=NULL)
fputs(str,fptr);
fclose(fptr);
return 0;
}