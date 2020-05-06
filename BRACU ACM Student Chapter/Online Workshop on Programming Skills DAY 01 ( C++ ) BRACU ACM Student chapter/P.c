#include<stdio.h>
int main()
{
    char letterA[100];
    char letterB[100];
    scanf("%s %s", &letterA, &letterB);
    printf("%d\n", strcasecmp(letterA, letterB));
    return 0;
}
