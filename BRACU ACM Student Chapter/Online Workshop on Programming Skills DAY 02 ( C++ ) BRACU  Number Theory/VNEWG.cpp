#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long k, x;
    cin >> n;
    while(n--)
    {
        cin >> k >> x;
        cout << 9*(k-1)+x << endl;
    }
    return 0;
}
