#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    map<string, int> val;
    string word;
    while(test--)
    {
        cin>>word;
        if(val.count(word)==0)
        {
            cout<<"OK\n";
            val[word]=1;
        }
        else
        {
            cout<<word<<val[word]<<"\n";
            val[word]+=1;
        }
    }
    return 0;
}
