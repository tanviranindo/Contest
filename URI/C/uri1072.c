#include<stdio.h>
int main()
{
    int a, testcase, loop1 = 0, in = 0, out = 0;
    scanf("%d", &testcase);
    for(loop1; loop1<testcase; ++loop1)
    {
        scanf("%d", &a);
        a>=10 && a<=20 ? in++: out++;
    }
    printf("%d in\n%d out\n", in, out);
    return 0;
}
