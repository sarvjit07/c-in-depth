#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fptr;
   char str[80];
   if((fptr=fopen("test1","w"))==NULL)
   {
       printf("Error in opening file\n");
       exit(1);
   }
   printf("Enter the taxt:\n");
   printf("To stop entering;press ctrl+d/ctrl+z\n");
   while(gets(str)!=NULL)
   
 {
     strcat(str,"\n");
      fputs(str,fptr);
 }
   
 
   fclose(fptr);
   return 0;
}