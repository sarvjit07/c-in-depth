#include<stdio.h>
void func(void);
int main()
{
    int i=5;
    for(i=i+1;i<8;i++)
    func();
    return 0;                           //output 2     2 
}
void func(void)
{
    int j;
    for(j=1;j<3;j++)
    printf("%d\t",++j);
}