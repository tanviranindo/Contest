#include<stdio.h>
int main()
{
    int count, input, temp, max=0, extra=0;
    for(count=1; count<=100; count++)
    {
        scanf("%i", &input);
        extra++;
        if(input>max)
        {
            temp=extra;
            max=input;
        }
    }
    printf("%i\n%i\n", max, temp);
}
