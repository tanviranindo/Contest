#include<stdio.h>
int main()
{
    int a, i;
    char str[60];
    scanf("%d %[^\n]%*c", &a, &str);
    for(i=1; i<=a; i++) printf("%s\n", str);
    return 0;
}
