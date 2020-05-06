#include<stdio.h>
int main()
{
    int testcase, number, reverse=0, remember;
    scanf("%d",&testcase);
    for(int i=1; i<=testcase; ++i)
    {
        scanf("%d",&number);
        while(number!=0)
        {
            remember=number%10;
            reverse=reverse*10+remember;
            number=number/10;
        }
        printf("%d\n",reverse);
        number=0, reverse=0, remember=0;
    }
    return 0;
}
