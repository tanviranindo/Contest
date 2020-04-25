#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;
    for(int i=1; i<input.length(); i++)
    {
        if(input[i]==input[i-1])
        {
            input.erase(i-1,2);
            i=0;
        }
    }
    input.length()==0 ? cout << "Empty String" : cout << input;
    return 0;
}

