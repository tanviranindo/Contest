#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, remainder;
    cin >> n >> k;
    n = n+1;
    remainder = (n+k)%k;
    (remainder==0) ? cout << n : cout << n+k-remainder;
    return 0;
}
