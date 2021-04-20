#include<stdio.h>
int main()
{
    int a, testcase, loop1 = 0, in = 0, out = 0;
    scanf("%d", &testcase);
    for(loop1; loop1<testcase; ++loop1)
    {
        scanf("%d", &a);
        if(a==0) printf("NULL\n");
        else if(a<=0 && a%2==0) printf ("EVEN NEGATIVE\n");
        else if(a<=0 && a%2==-1) printf ("ODD NEGATIVE\n");
        else if(a>=0 && a%2==0) printf ("EVEN POSITIVE\n");
        else if(a>=0 && a%2==1) printf ("ODD POSITIVE\n");
    }
    return 0;
}
