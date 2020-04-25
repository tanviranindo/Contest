#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d", &a);
    int b[a];
    for(i=0; i<a; i++)
    {
        scanf("%d", &b[i]);
        if(b[i]%2==0) printf("Case #%d: Even\n",i+1);
        else printf("Case #%d: Odd\n",i+1);
    }
    return 0;
}
