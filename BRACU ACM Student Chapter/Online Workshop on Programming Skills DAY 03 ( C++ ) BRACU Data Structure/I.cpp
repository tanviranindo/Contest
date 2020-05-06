#include<bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int>> store;

int main()
{
    int n;
    cin>>n;
    while (n!=0)
    {
        for(int i=0; i<n; i++)
        {
            int value;
            cin>>value;
            store.push(value);
        }

        int addagain=0;
        while(store.size()>1)
        {
            int a = store.top();    store.pop();
            int b = store.top();    store.pop();
            int sum = a+b;
            store.push(sum);
            addagain += sum;

        }
        cout << addagain <<endl;
        store.pop();
        cin>>n;
    }
    return 0;
}
