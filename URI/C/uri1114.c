#include<stdio.h>
int main()
{
    int correct=2002, input;
    while(input!=correct)
    {
        scanf("%i", &input);
        input==correct ? printf("Acesso Permitido\n") : printf("Senha Invalida\n");
    }
    return 0;
}
