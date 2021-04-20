#include<stdio.h>
int main()
{
    int a, loop1 = 0, evencounter = 0, oddcounter = 0, positivecounter = 0, negativecounter = 0;
    for(loop1; loop1<5; ++loop1)
    {
        scanf("%d", &a);
        a%2==0 ? evencounter++ : oddcounter++;
        a>0 ? positivecounter++: a<0 ? negativecounter++ : positivecounter;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", evencounter, oddcounter, positivecounter, negativecounter);
    return 0;
}
