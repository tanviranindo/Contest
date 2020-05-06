#include<bits/stdc++.h>
using namespace std;
vector <int> pour;
int main()
{
    int number;
    cin >> number;
    bool condition [number + 1];
    for (int i = 0; i <= number; i++) condition[i] = true;
    condition[0] = condition[1] = false;
    for (int i = 2; i * i <= number; i++)
    {
        if (condition[i])
        {
            for (int j = i + i; j <= number; j += i)  condition[j] = false;
        }
    }

    for (int i = 2; i < number; i++) if (condition[i]) pour.push_back(i);
    int count1 = 0, count2 = 0;
    bool condition2 = true;
    for (int i = 6; i <= number; i++)
    {
        for (int increament : pour)
        {
            if (increament> i) break;
            if (i % increament== 0)  count1++;
            if (count1 > 2)
            {
                condition2 = false;
                break;
            }
        }

        if (condition2 && count1 == 2) count2++;
        count1 = 0;
        condition2 = true;

    }
    cout << count2 << endl;
}
