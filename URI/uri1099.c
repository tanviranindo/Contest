#include<stdio.h>
int main()
{
    int i, count, a, b, sum=0;
    scanf("%i", &count);
    for(i=1; i<=count ; i++)
    {
        scanf("%i %i", &a, &b);
        if(a>b)
        {
            b+=1;
            for(; b<a; b++)
            {
                if(b%2!=0) sum+=b;
            }
        }
        else if(a<b)
        {
            a+=1;
            for(; a<b; a++)
            {
                if(a%2!=0) sum+=a;
            }
        }
        else
        {
            sum=0;
        }
        printf("%i\n", sum);
        sum=0;
    }
    return 0;
}
