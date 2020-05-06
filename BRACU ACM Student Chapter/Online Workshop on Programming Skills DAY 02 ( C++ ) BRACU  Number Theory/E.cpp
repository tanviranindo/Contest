#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0) return a;
    else return gcd(b, a % b);
}
int main()
{
    int N;
    while(scanf("%d",&N)!=0)
    {
        int G=0;
        if(N==0) break;
        for(int i=1; i<N; i++)
        {
            for(int j=i+1; j<=N; j++)
            {
                G+=gcd(i,j);
            }
        }
        cout << G << endl;
    }
    return 0;
}

