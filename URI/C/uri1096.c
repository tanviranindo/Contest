#include<stdio.h>
int main()
{
    int i, j, one, two;
    for(i=1, one=1; i<=9; i+=2, one++)
    {
        for(j=7, two=1; two<=3; j--, two++) printf("I=%i J=%i\n",i, j);
    }
    return 0;
}
