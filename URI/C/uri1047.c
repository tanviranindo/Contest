#include<stdio.h>

int main(void)
{
    int initialhour, initialminute, finalhour, finalminute, totalinitialminute, totalfinalminute, conversion, hour, minute;

    scanf("%d %d %d %d", &initialhour, &initialminute, &finalhour, &finalminute);

    totalinitialminute = initialhour * 60 + initialminute;
    totalfinalminute = finalhour * 60 + finalminute;
    if ( totalinitialminute == finalminute )
    {
        conversion = 24 * 60;
    }
    else if ( totalinitialminute < totalfinalminute )
    {
        conversion = totalfinalminute - totalinitialminute;
    }
    else
    {
        conversion = (24 * 60) - totalinitialminute + totalfinalminute;
    }

    hour = conversion / 60;
    minute = conversion % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, minute);

    return 0;
}
