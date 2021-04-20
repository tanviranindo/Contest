#include<stdio.h>
int main()
{
    int i, input, x, y;
    scanf("%i", &input);
    for(i=1; i<=input; i++)
    {
        scanf("%d %d", &x, &y);
        y==0 ? printf("divisao impossivel\n") : printf("%.1lf\n", x/(y*1.00));
    }
    return 0;
}
