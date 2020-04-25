#include<stdio.h>
int main()
{
    int a, i;
    scanf("%d", &a);
    for(i=1; i<=6; i++) (a%2!=0) ? printf("%i\n", a) && a++: a++ && i--;
    return 0;
}
