#include<stdio.h>
int main()
{
    double array[6], sum = 0, average = 0;
    int loop1 = 0, loop2 = 0, counter = 0;
    for(loop1; loop1<6; ++loop1)
    {
        scanf("%lf", &array[loop1]);
    }
    while(loop2<6)
    {
        if(array[loop2]>=0)
        {
            sum+=array[loop2];
            counter++;
        }
        loop2++;
    }
    average = sum/counter;
    printf("%d valores positivos\n%.1lf\n", counter, average);

    return 0;
}
