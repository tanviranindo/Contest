#include<bits/stdc++.h>
using namespace std;
int factors(int n)
{
    int factors = 0;
    while(n%2==0)
    {
        n/=2;
        factors++;
    }
    for(int i=3; i<=sqrt(n); i+=2)
    {
        while(n%i==0)
        {
            n/=i;
            factors++;
        }
    }
    if(n>2) factors++;
    return factors;
}
void output(int num, int factorial[], int numfactors[])
{
    int count = 0;
    for(int i=2; i<=num; i++)
    {
        if(numfactors[i]==0) numfactors[i] = factors(i);
        count += numfactors[i];
        factorial[i] = count;
    }
    factorial[num] = count;
}
int main()
{
    int factorial [1000001];
    int factors [1000001];
    output(1000000, factorial, factors);
    int num;
    cin >> num;
    cout << factorial[num] <<endl;
}

