#include<stdio.h>
int main()
{
    int a, b, sum = 0;
    scanf("%d %d", &a, &b);

    if(a == b) printf("%d\n", sum);
    else if(a < b)
    {
        for(a=a+1; a<b; a++)
        {
            if(a%2==1||a%2==-1) sum+=a;
        }
        printf("%d\n", sum);
    }
    else if (a > b)
    {
        for(b=b+1; b<a; b++)
        {
            if(b%2==1||b%2==-1) sum+=b;
        }
        printf("%d\n", sum);
    }
    return 0;
}
