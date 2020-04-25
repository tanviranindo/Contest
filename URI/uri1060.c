#include<stdio.h>
int main()
{
    double array[6];
    int loop1 = 0, loop2 = 0, counter;
    for(loop1; loop1<6; ++loop1)
    {
        scanf("%lf", &array[loop1]);
    }
    while(loop2<6)
    {
        if(array[loop2]>=0)
        {
            counter++;
        }
        loop2++;
    }
    printf("%d valores positivos\n", counter);
    return 0;
}
