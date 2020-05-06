#include<stdio.h>
int main()
{
    long long int a, j, count, count2;
    scanf("%llu", &count);
    while(count--)
    {
        scanf("%llu", &count2);
        for(j=0; j<count2; j++) scanf("%llu", &a);
        printf("%llu\n", (count2*(count2-1)/2));
    }
    return 0;
}
