#include<stdio.h>
int main()
{
    int d,m,y;
    int flag=1,isleep=0;
    printf("enter data (dd/mm/yyyy):");
    scanf("%d/%d/%d,&d,&m,&y");
    if(y%100!=0 && y%4==0 || y%400==0)
    isleep=1;
    if(y<1850 || y>2050 || m<1 || m>12 || d<1 || d>31)
    flag=0;
    else if(m==2)
    {
        if (d==30||d==31||(d==29 && !isleep))
        flag=0;
    }
    else if(m==4||m==6||m==9||m==11)
    {
        if(d==31)
        flag=0;
    }
    if(flag==0)
    printf("not a valid data\n");
    else 
    printf("valid data\n");
    return 0;
} 