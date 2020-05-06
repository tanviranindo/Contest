#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    getchar();
    for(int i = 0; i < t; i++){
        string s;
        vector<int> v;
        int a = 0;
        getline(cin, s);
        for(int j = 0; j < s.size(); j++){
            if(s[j] >= '0' && s[j] <= '9') a = (a * 10) + (s[j] - '0');
            else if(s[j] == ' ' && a != 0){
                v.push_back(a);
                a = 0;
            }
        }
        if(a != 0) v.push_back(a);
        int mx = INT_MIN;
        for(int j = 0; j < v.size() - 1; j++){
            for(int k = j + 1; k < v.size(); k++){
                mx = max(mx, __gcd(v[j], v[k]));
            }
        }
        cout << mx << endl;
    }
    return 0;
}
