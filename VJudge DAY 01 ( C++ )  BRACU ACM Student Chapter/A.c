#include<stdio.h>
int main()
{
    int input;
    while(input!=42)
    {
        scanf("%d",&input);
        if(input!=42) printf("%d\n", input);
    }
    return 0;
}
