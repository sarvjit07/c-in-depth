#include<stdio.h>
int main()
{
    int n,choice,notes;
    printf("enter the total amount in Rs :");
    scanf("%d",&n);
    printf("enter the value of note from which you want to begin :");
    scanf("%d",&choice);
    switch (choice)
    {
    case 100:
        notes=n/100;
        printf("number of 100 Rs notes=%d\n",notes);
        n=n%100;
    case 50:
        notes=n/50;
        printf("number of 50 Rs notes=%d\n",notes);
        n=n%50;
       case 20:
        notes=n/20;
        printf("number of 20 Rs notes=%d\n",notes);
        n=n%20;
            case 10:
        notes=n/10;
        printf("number of 10 Rs notes=%d\n",notes);
        n=n%10;
            case 5:
        notes=n/5;
        printf("number of 5 Rs notes=%d\n",notes);
        n=n%5;
            case 2:
        notes=n/2;
        printf("number of 2 Rs notes=%d\n",notes);
        n=n%2;
            case 1:
        notes=n/1;
        printf("number of 1 Rs notes=%d\n",notes);
        break;
    
    default:
    printf("enter only valid values");
        break;
    }
    printf("\n");
    return 0;
}