#include<stdio.h>
int main()
{
    int array[5], loop1 = 0, loop2 = 0, counter = 0;
    for(loop1; loop1<5; ++loop1)
    {
        scanf("%d", &array[loop1]);
    }
    while(loop2<5)
    {
        if(array[loop2]%2==0)
        {
            counter++;
        }
        loop2++;
    }
    printf("%d valores pares\n", counter);
    return 0;
}
