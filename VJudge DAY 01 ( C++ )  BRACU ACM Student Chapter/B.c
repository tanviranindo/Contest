#include<stdio.h>
int main()
{
    int i, count, a, b, c, mid;
    scanf("%d",&count);

    for(i=1; i<=count; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        a>b && a<c || a<b && a>c ? mid=a : b>a && b<c || b<a && b>c ? mid=b : c>a && c<b || c<a && c>b? mid=c : mid;
        printf("%d\n",mid);
    }
    return 0;
}
