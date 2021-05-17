#include<stdio.h>
#include<math.h>
void type(float a,float b,float c);
void area(float a,float b,float c);
int main()
{
    float a,b,c;
    printf("enter the sides of triangle");
    scanf("%f%f%f",&a,&b,&c);
    if(a<b+c && b<c+a && c<a+b)
    {
        type(a,b,c);
        area(a,b,c);
    }
    else 
    printf("no triangle possible with these sides\n");
    return 0;
}
void type(float a,float b,float c)
{
    if((a*a)+(b*b)==(c*c)||(c*c)+(b*b)==(a*a)||(a*a)+(c*c)==(b*b))
    printf("right angled triangle\n");
    if(a==b && b==c)
    printf("equilateral triangle\n");
    else if(a==b||b==c||c==a)
    printf("isosceles triangle\n");
    else
    printf("scalene triangle\n");
}
void area(float a,float b,float c)
{
    float s,area;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle=%f\n",area);
}