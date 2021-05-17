 #include<stdio.h>    
int fibo(int);
int main()

{int n,i;
printf("enter a limit");
scanf("%d",&n);
for(i=0;i<n;i++)
printf("%d ",fibo(i));
return 0;

}
int fibo(int x)
{
    if(x==0||x==1)
    return x;
    else
    return(fibo(x-2)+fibo(x-1));
}