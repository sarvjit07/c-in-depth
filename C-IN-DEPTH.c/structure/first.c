#include<stdio.h>
void main()
{struct num
{
    int a;
    int b;
    int c;
};
struct num n1;
n1.a=10;
n1.b=20;
n1.c=30;

printf("the value of a=%d\n",n1.a);
printf("the value of b=%d\n",n1.b);
printf("the value of c=%d\n",n1.c);
}