#include<stdio.h>
int main()
{
    int a, b, c, i, count;
    scanf("%d", &count);
    for(i=1; i<=count; i++)
    {
        int sum=0;
        scanf("%d %d %d", &a, &b, &c);
        sum = a+b+c;
        sum==180 ? printf("YES\n") : printf("NO\n");
    }
    return 0;
}
