#include<stdio.h>
int main()
{
    int testcase, starts = 2;
    scanf("%i", &testcase);
    for(starts; starts<=testcase; starts+=2)
    {
        printf("%i^%i = %i\n", starts, 2, starts*starts);
    }
    return 0;
}
