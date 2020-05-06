#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    cout<<((num%4==0)||(num%7==0)||(num%47==0)||(num%74==0)||(num%477==0) ? "YES" : "NO");
    return 0;
}
