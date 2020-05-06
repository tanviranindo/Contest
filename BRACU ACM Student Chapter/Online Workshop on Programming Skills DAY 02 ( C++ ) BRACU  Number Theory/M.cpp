#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[130];
    cin >> n;
    for (int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i<n; i++)
    {
        cout << arr[i] <<endl;
    }
    for (int i = n - 1; i>0; i--)
    {
        if (arr[i - 1] == arr[i] || arr[n - 1] % arr[i] != 0)
        {
            cout << arr[n - 1] << " " << arr[i];
            break;
        }
    }
    return 0;
}
