#include<stdio.h>
int main()
{
    int initialday, initialhour, initialminute, initialsecond, finalday, finalhour, finalminute, finalsecond, day, hour, minute, second;
    scanf("Dia %d", &initialday);
    scanf("%d : %d : %d\n", &initialhour, &initialminute, &initialsecond);
    scanf("Dia %d", &finalday);
    scanf("%d : %d : %d", &finalhour, &finalminute, &finalsecond);

    second = finalsecond - initialsecond;
    minute = finalminute - initialminute;
    hour = finalhour - initialhour;
    day = finalday - initialday;

    if(second < 0)
    {
        second+=60;
        minute--;
    }
    if(minute < 0)
    {
        minute+=60;
        hour--;
    }
    if(hour < 0)
    {
        hour+=24;
        day--;
    }

    printf("%d dia(s)\n", day);
    printf("%d hora(s)\n", hour);
    printf("%d minuto(s)\n", minute);
    printf("%d segundo(s)\n", second);
    return 0;
}
