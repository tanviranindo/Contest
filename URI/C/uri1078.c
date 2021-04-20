#include<stdio.h>
int main()
{
    int a, starts;
    scanf("%i", &a);
    for(starts=1; starts<=10; starts++) printf("%i x %i = %i\n", starts, a, starts*a);
    return 0;
}
