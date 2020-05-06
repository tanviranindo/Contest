#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, sum=0;
    cin >> num;
    bool condition = false;
    for(int i=1; sum<=num; i++)
    {
        sum+=i;
        if(sum==num) condition = true;
    }
    condition ? cout<<"YES" : cout<<"NO";
    return 0;
}
