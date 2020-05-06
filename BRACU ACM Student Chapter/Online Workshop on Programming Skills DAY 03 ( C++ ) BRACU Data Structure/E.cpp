#include <bits/stdc++.h>
using namespace std;

int main()
{
    int polandScore,enemyScore;
    cin>>polandScore>>enemyScore;
    string word;
    set<string>poland,enemey;
    map<string,int> compare;
    for(int i=0; i<polandScore; i++)
    {
        cin>>word;
        poland.insert(word);
        compare[word]++;
    }
    int counter=0;
    for(int i=0; i<enemyScore; i++)
    {
        cin>>word;
        compare[word]++;
        if(compare[word]==2) counter++;
        enemey.insert(word);
    }
    cout<< (polandScore>enemyScore ? "YES" : enemyScore>polandScore ? "NO" : counter%2==0 ? "NO" : "YES")<<"\n";
    return 0;
}
