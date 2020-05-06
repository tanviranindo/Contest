#include<stdio.h>
int main()
{
    int i, j, count, sum=0;
    char input[1000];
    scanf("%d", &count);
    for(i=1; i<=count; i++)
    {
        scanf("%s", &input);
        for(j=0; j<strlen(input); j++) if(input[j]=='4') sum++;
        printf("%d\n", sum);
        sum=0;
    }
}
