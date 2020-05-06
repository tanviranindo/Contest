#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    queue<int> card;

    while(cin>>number)
    {
        if(number==0) break;
        else
        {
            for(int i=0; i<number; i++) card.push(i+1);
            cout<<"Discarded cards:";
            int i = card.size();
            while(i!=1)
            {
                cout<<" "<<card.front();
                if(i>2) cout<<",";
                card.pop();
                i--;

                card.push(card.front());
                card.pop();
            }

            cout<<"\nRemaining card: "<<card.front()<<"\n";
        }
        card = queue<int>();
    }
    return 0;
}
