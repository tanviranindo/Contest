#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
 char limit[100];
 gets(limit);
 puts(strstr(limit,"1111111") || strstr(limit,"0000000") ? "YES":"NO");
 return 0;
}
