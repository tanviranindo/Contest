#include <bits/stdc++.h>
using namespace std;

bool correct(string bracket)
{
    char stack[bracket.length()] = {0};
    if (bracket.length()%2!=0) return false;
    int indexValue=0;
    for (int i=0; i<bracket.length(); i++)
    {
        stack[indexValue] = bracket[i];

        if (indexValue>0)
        {
            if (stack[indexValue]-1 == stack[indexValue-1] || stack[indexValue]-2 == stack[indexValue-1])
            {
                indexValue-=2;
            }
        }
        indexValue++;
    }

    if (indexValue==0) return true;

    return false;
}

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string bracket;
        cin>>bracket;
        cout << (correct(bracket) ? "YES\n" : "NO\n");
    }
    return 0;
}
