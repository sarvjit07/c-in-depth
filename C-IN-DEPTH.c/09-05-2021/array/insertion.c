#include<stdio.h>  
void main ()  
{  
    int j, i,temp=0,a[100],n=0;  
    // int a[10] = { 10, 9, 7, 101, 23, 44, 12, 78, 34, 23}; 
       printf("enter the number of elements:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
         printf("enter elements %d-->",i+1);
         scanf("%d",&a[i]);
    }   
    for(i=1; i<n; i++)   
    {  
        temp = a[i];  
        j= i-1;  
        while(j>=0 && temp <= a[j])  
        {  
            a[j+1] = a[j];   
            j = j-1;  
        }  
        a[j+1] = temp;  
    }  
    for(i=0;i<n;i++)  
    {  
        printf("%d\n",a[i]);  
    }  
}
