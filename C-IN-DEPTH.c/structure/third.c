#include<stdio.h>
struct num
{
int a;
int b;
int c;
} 
n1;
void main()
{
   struct num n1= {100,200,300};
    printf("the value of a=%d\n",n1.a);
    printf("the value of b=%d\n",n1.b);
    printf("the value of c=%d\n",n1.c);
}
