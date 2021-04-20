#include<stdio.h>
int main()
{
    int a, starts;
    scanf("%d", &a);
    for(starts=2; starts<10000; starts+=a) printf("%d\n", starts);
    return 0;
}
