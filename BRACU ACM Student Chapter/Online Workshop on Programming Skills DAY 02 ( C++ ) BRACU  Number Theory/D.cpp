#include <bits/stdc++.h>
using namespace std;

string calculation(int num)
{
    string result;
    int i;

    while (num!=1)
    {
        for (i=9; i>1; i--)
        {
            if (num%i == 0)
            {
                num/=i;
                result = (char)(i+'0')+result;
                break;
            }
        }

        if (i==1)
            return "-1";
    }

    return result;
}

int main()
{
    int mod, modifier;

    while (!(cin>>mod).eof())
    {
        for (int i = 0; i < mod; i++)
        {
            cin>>modifier;
            if (modifier < 10)
            {
                cout << modifier << endl;
                continue;
            }
            cout << calculation(modifier) << endl;
        }
    }

    return 0;
}
