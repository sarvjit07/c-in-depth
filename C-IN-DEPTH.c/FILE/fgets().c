#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fptr;
   char str[80];
   if((fptr=fopen("test2","r"))==NULL)
   {
       printf("Error in opening file\n");
       exit(1);
   }
   
   while(fgets(str,80,fptr)!=NULL)
             puts(str);
  fclose(fptr);
   return 0;
}