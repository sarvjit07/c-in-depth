#include<stdio.h>
#define size 10
int main()
{
      int arr[size],i,even=0,odd=0;
      for ( i = 0; i < size; i++)
      {
          printf("enter a value for arr[%d]:",i);
          scanf("%d",&arr[i]);
          if(arr[i]%2==0)
          even++;
          else
          odd++;
      }
      printf("even number =%d , odd number=%d\n",even,odd);
      return 0;
}