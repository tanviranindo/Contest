#include<stdio.h>
int main()
{
    int count;
    scanf("%d", &count);
    for(int i=1; i<=count; i++){
        char newword[100];
        scanf("%s", &newword);
        int a=strlen(newword);
        (a>10) ? printf("%c%d%c\n", newword[0], a-2, newword[a-1]) : printf("%s\n", newword);
    }
    return 0;
}
