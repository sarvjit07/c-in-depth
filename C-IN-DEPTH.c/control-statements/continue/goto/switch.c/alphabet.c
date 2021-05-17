#include<stdio.h>
int main()
{
    char ch;
    printf("enter an alphabet");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
         case 'e':
          case 'i':
           case 'o':
            case 'u':
            printf("alphabet is vowel\n");
            break;
            default:
            printf("alphabet is a consonant\n");
    }
    return 0;
}