#include<stdio.h>
int main()
{
    int c=0, sum=0, length;
    char str[50];
    gets(str);
    while(str[c]!='\0')
    {
        if(str[c]=='v') sum++;
        c++;
    }
    printf("%d\n", sum);
    return 0;
}

