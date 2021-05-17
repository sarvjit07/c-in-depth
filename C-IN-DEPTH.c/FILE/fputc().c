#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fptr;
   int ch;
   if((fptr=fopen("myfile","w"))==NULL)
   {
       printf("Error in opening file\n");
       exit(1);
   }
   printf("Enter taxt:\n");
   /*press ctrl+z/ctrl+d to stop reading characters*/
   while((ch=getchar())!=EOF)
   
   fputc(ch,fptr);
   fclose(fptr);
   return 0;
}