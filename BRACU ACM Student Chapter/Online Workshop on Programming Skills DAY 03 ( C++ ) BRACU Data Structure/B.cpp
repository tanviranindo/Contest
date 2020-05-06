#include<bits/stdc++.h>
using namespace std;
vector<int> stored;
map<int, int> value;

int main()
{
    int test;

    while(cin>>test)
    {
        if(value.count(test)==0)
        {
            value[test]=1;
            stored.push_back(test);
        }
        else value[test] = value[test]+1;
    }
    for(int i=0; i<stored.size(); i++) cout<<stored[i]<<" "<<value[stored[i]]<<endl;
    return 0;
}
