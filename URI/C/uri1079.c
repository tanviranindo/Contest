#include<stdio.h>
int main()
{
    int a, starts;
    float one, two, three, average;
    scanf("%i", &a);
    for(starts=1; starts<=a; starts++)
    {
        scanf("%f %f %f", &one, &two, &three);
        average = ((one*2+two*3+three*5)/(2+3+5));
        printf("%.1f\n", average);
    }
    return 0;
}
