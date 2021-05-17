#include<stdio.h>
void convert(int,int);
int main(void)
{
    int num;
    printf("enter a positive decimal number");
    scanf("%d",&num);
    convert(num,2);
    convert(num,8);
    convert(num,16);
    return 0;
}
void convert(int num,int base)
{
          int rem=num%base;
          if(num==0)
          return;
          convert(num/base,base);
          if(rem<10)
          printf("%d",rem);
          else
          printf("%c",rem-10+'A');
        
}