#include<stdio.h>
int main()
{
    int i, j=7, one, two, count;
    for(i=1, one=1; i<=9; i+=2, one++)
    {
        for(two=1; two<=3; j--, two++)
        {
            printf("I=%i J=%i\n",i, j);
            count=j;
        }
        j=count+4;
    }
    return 0;
}
