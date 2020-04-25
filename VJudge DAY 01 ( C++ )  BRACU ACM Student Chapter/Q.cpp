#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin >> word;
    bool con = true;
    for(int i = 1; i < word.size(); i++)
    {
        if(word[i] >= 'a' && word[i] <= 'z')
        {
            con = false;
            break;
        }
    }
    if(con) for(int i = 0; i < word.size(); i++) (word[i] >= 'A' && word[i] <= 'Z') ? word[i]+=32 : word[i]-=32;
    cout << word << endl;
    return 0;
}

