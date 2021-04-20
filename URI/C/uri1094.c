#include<stdio.h>
int main()
{
    int counter, input, count, sum=0;
    int cross[3] = {0, 0, 0};
    char character, C='C', R='R', S='S';
    scanf("%i", &counter);
    for(count=1; count<=counter; count++)
    {
        scanf("%i %c",&input, &character);
        sum+=input;
        character==C ? cross[0]+=input : character==R ? cross[1]+=input : character==S ? cross[2]+=input : character;
    }
    printf("Total: %i cobaias\nTotal de coelhos: %i\nTotal de ratos: %i\nTotal de sapos: %i\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", sum, cross[0], cross[1], cross[2], (float)(cross[0]*100)/sum, (float)(cross[1]*100)/sum, (float)(cross[2]*100)/sum);
}
