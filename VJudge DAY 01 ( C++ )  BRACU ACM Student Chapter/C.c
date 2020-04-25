#include<stdio.h>
int main()
{
    int i, counter, a, b;
    scanf("%d", &counter);
    for(i=1; i<=counter; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a%b);
    }
    return 0;
}
