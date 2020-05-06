#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char word[100];
    scanf("%s", &word);
    bool con = true;
    for(int i = 1; i < strlen(word); i++)
    {
        if(word[i] >= 'a' && word[i] <= 'z')
        {
            con = false;
            break;
        }
    }
    if(con)
    {
        for(int i = 0; i < strlen(word); i++)
        {
            if(word[i] >= 'A' && word[i] <= 'Z')
            {
                word[i]+=32;
            }
            else
            {
                word[i]-=32;
            }
        }
    }
    printf("%s\n", word);
    return 0;
}
