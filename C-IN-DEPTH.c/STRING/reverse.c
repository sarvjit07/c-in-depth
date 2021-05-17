#include <stdio.h>
#include <string.h>
void revstr(char x[]);
int main()
{
    char x[] = "sarvjit";
    revstr(x);
    return 0;
}
void revstr(char x[])
{
    int i = 0, j = 6;
    char temp;
    while (i < j)
    {
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
        i++;
        j--;
    }
    printf("%s", x);
}