#include<stdio.h>
int a,b;
void print()
{
    printf("%d %d",a,b);
}
int fun1(){
    int a,c;
    a=0;b=1;c=2;
    return c;
}
void fun2(){
    int b;
    a=3;b=4;
    print();
}
int main(){
    a=fun1();
    fun2();
}