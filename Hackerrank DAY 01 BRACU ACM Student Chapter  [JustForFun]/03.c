#include<stdio.h>
int main()
{
    double a, b, c, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    if(a/b==c/d)printf("Yes\n");
    else printf("No\n");
    return 0;
}
