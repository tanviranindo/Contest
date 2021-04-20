#include<stdio.h>
int main()
{
    int a, b, duration;
    scanf("%d %d", &a, &b);
    duration = b - a;
    duration < 0 ? duration = 24 + b - a : duration;
    a == b ? printf("O JOGO DUROU 24 HORA(S)\n") : printf("O JOGO DUROU %d HORA(S)\n", duration);
}
