#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
    printf("sizeof(char)=%u\n",sizeof(char));
    printf("sizeof(short)=%u\n",sizeof(short));
    printf("sizeof(int)=%u\n",sizeof(int));
    printf("sizeof(long)=%u\n",sizeof(long));
    printf("sizeof(float)=%u\n",sizeof(float));
    printf("sizeof(double)=%u\n",sizeof(double));
    printf("sizeof(long double)=%u\n",sizeof(long double));

    printf("SCHAR_MIN=%d\n",SCHAR_MIN);
    printf("SCHAR_MAX=%d\n",SCHAR_MAX);
    printf("UCHAR_MAX=%d\n",UCHAR_MAX);

    printf("SHRT_MAX=%d\n",SHRT_MAX);
    printf("SHRT_MIN=%d\n",SHRT_MIN);
    printf("USHRT_MIN=%d\n",USHRT_MAX);

    printf("INT_MIN=%d\n",INT_MIN);
    printf("INT_MAX=%d\n",INT_MAX);
    printf("UINT_MAX=%d\n",UINT_MAX);

    printf("LONG_MIN=%ld\n",LONG_MIN);
    printf("LONG_MAX=%ld\n",LONG_MAX);
     printf("ULONG_MAX=%lu\n",ULONG_MAX);

     printf("FLT_MIN=%lu\n",FLT_MIN);
     printf("FLT_MAX=%lu\n",FLT_MAX);

     printf("DBL_MAX=%lu\n",DBL_MAX);
     printf("DBL_MIN=%lu\n",DBL_MIN);

     printf("LDBL_MAX=%lu\n",LDBL_MAX);
     printf("LDBL_MIN=%lu\n",LDBL_MIN);


     printf("LDBL_DIG=%lu\n",LDBL_DIG);
      printf("FLT_DIG=%lu\n",FLT_DIG);
      printf("DBL_DIG=%lu\n",DBL_DIG);

return 0;
}