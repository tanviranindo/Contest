#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	long long x, y;
	cin >> k;
	while (k--)
	{
		cin >> x >> y;
		(x - y != 1) ? cout << "YES" << endl : cout << "NO" << endl;
	}
	return 0;
}
