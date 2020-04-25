#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    long int s;
    int n, x, y, dx;

    for(int i = 0; i<t; i++)
    {
        scanf("%li", &s);
        n =(int) sqrt(s);
        dx =(int) s - (n*n);

        if(n%2!=0)
        {
            y = n;
            x = 1;
            if(dx>0)
            {
                y++;
                dx--;
            }
            if(dx>n)
            {
                x+=n;
                dx-=n;
            }
            else
            {
                x+=dx;
                dx=0;
            }
            y-=dx;
        }
        else
        {
            x = n;
            y = 1;
            if(dx>0)
            {
                x++;
                dx--;
            }
            if(dx>n)
            {
                y+=n;
                dx-=n;
            }
            else
            {
                y+=dx;
                dx=0;
            }
            x-=dx;
        }
        printf("Case %d: %d %d\n",i+1,x,y);
    }
    return 0;
}
