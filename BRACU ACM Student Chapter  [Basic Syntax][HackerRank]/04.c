#include<stdio.h>
int main()
{
    char C;
    scanf("%c", &C);
    (C=='a' || C=='e' || C=='i' || C=='o' || C=='u' || C=='v') ? printf("Vowel\n") : printf("Consonant\n");
    return 0;
}
