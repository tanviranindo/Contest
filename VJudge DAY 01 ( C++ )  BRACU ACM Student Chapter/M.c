#include<stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    while(test--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        (a==b) ? printf("0\n") : (a>b) ? printf((a-b)%2?"2\n":"1\n") : printf((b-a)%2?"1\n":"2\n");
    }
    return 0;
}
