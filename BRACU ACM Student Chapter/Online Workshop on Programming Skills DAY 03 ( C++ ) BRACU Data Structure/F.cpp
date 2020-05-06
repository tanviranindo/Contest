#include<bits/stdc++.h>
using namespace std;

int main()
{
    int maxe, test;
    cin>>maxe>>test;
    set<int>val1;
    set<int>val2;
    while(test--)
    {
        int v1, v2;
        cin>>v1>>v2;
        val1.insert(v1);
        val2.insert(v2);
        cout<<((maxe-val1.size())*(maxe-val2.size()))<<" ";
    }
    return 0;
}
