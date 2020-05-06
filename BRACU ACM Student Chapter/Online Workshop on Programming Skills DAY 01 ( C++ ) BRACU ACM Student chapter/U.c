#include<stdio.h>
int main()
{
    int counter, testcase;
    scanf("%d", &counter);
    int array[counter];
    for(int i=0; i<counter; i++) scanf("%d", &array[i]);
    scanf("%d", &testcase);
    for(int t=0; t<testcase; t++)
    {
        int i, j, sum=0;
        scanf("%d %d", &i, &j);
        for(i; i<=j; i++) sum+=array[i];
        printf("%d\n", sum);
    }

    return 0;
}
