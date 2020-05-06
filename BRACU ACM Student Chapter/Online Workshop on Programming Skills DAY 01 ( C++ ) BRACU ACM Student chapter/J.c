#include<stdio.h>
int main()
{
    int i, j, count, factorial, sum=1;
    scanf("%d", &count);
    for(i=1; i<=count; i++)
    {
        scanf("%d", &factorial);
        for(j=1; j<=factorial; j++) sum*=j;
        printf("%d\n", sum);
        sum=1;
    }
    return 0;
}
