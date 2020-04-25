#include<stdio.h>
#include<math.h>
int main()
{
    int i, testcase;
    scanf("%d", &testcase);
    for(int i=1; i<=testcase; i++)
    {
        double r;
        scanf("%lf", &r);
        printf("Case %d: %.2lf\n", i, (2*r*2*r)-(2*acos(0.0)*pow(r,2)));
    }
    return 0;
}
