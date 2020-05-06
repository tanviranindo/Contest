#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, k;
    vector<ll> arr;
    cin >> n >> k;

    for (ll i = 1; i*i<=n; i++)
    {
        if (n % i == 0)
        {
            arr.push_back(i);
            if(n/i!=i) arr.push_back(n / i);
        }
    }

    if(k>arr.size()) cout << -1 << endl;
    else
    {
        sort(arr.begin(), arr.end());
        cout << arr[k-1] << endl;
    }
    return 0;
}
