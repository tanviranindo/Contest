#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number, one, count(0);
    cin >> number >> one;

    string result;
    while (number--)
    {
        int lucky(0);
        cin >> result;
        for (int i = 0; i < result.length(); ++i)
        {
            if (result[i] == '4' || result[i] == '7')
            {
                lucky += 1;
            }
        }
        if (lucky <= one)
        {
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}
