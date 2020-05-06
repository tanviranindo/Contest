#include <bits/stdc++.h>
using namespace std;

bool compare(pair <int, int> div, pair<int,int> nth)
{
    if(div.first  < nth.first)  return 1;
    if(div.first  > nth.first)  return 0;
    if(div.second > nth.second) return 1;
    return 0;
}

int main()
{
    vector < pair <int, int> > store(1001);
    for (int i=1; i<=1000; i++)
    {
        store[i].second = i;
        store[i].first = 0;
    }

    for (int i=1; i<=1000; i++)
    {
        for (int j=i; j<=1000; j=j+i)
        {
            store[j].first++;
        }
    }

    sort(store.begin(), store.end(), compare);
    int test, value;
    cin>>test;
    for (int i=1; i<=test; i++)
    {
        cin>>value;
        cout<<"Case "<<i<<": "<<store[value].second<<"\n";
    }
    return 0;
}
