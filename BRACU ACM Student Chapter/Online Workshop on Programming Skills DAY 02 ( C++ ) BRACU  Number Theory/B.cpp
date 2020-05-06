#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        int number;
        cin >> number;
        int sum = 0;
        for (int j = 1; j*j<=number; j++)
        {
            if (number%j == 0)
            {
                if (number/j==j) sum+=j;
                else sum+=j+number/j;
            }
        }
        cout << sum-number << endl;
    }
    return 0;
}
