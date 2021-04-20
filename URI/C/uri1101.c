#include<stdio.h>
#include<stdbool.h>
int main()
{
    int M=1, N=1;
    while(M>0 && N>0)
    {
        scanf("%i %i", &M, &N);
        if(M<=0 && N<=0)
        {
            break;
        }
        else if(M<N && M>0)
        {
            int sum=0;
            while(!(M>N))
            {
                printf("%i ",M);
                sum=sum+M;
                M++;
            }
            printf("Sum=%i\n",sum);
        }
        else if(M>N && N>0)
        {
            int sum=0;
            while(!(N>M))
            {
                printf("%i ",N);
                sum=sum+N;
                N++;
            }
            printf("Sum=%i\n",sum);
        }
    }
    return 0;
}
