#include<stdio.h>
int main()
{
    int a, b, i, count;
    scanf("%d", &count);
    for(i=1; i<=count; i++)
    {
        scanf("%d %d", &a, &b);
        (a%b)!=0 ? printf("%d\n",b-(a%b)) : printf("%d\n",a%b);
    }
    return 0;
}
