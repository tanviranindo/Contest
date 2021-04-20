#include<stdio.h>
int main()
{
    int a=0, b=1;
    while(a!=b)
    {
        scanf("%i %i", &a, &b);
        if(a!=b) a<b ? printf("Crescente\n") : printf("Decrescente\n");
    }
    return 0;
}
