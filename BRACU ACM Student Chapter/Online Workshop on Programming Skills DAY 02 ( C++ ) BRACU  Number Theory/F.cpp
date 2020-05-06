
#include <bits/stdc++.h>
using namespace std;

bool isprime(int a)
{
    int i;
    if(a==2) return true;
    if(a%2==0) return false;

    for(i=3; i*i<=a; i+=2) if(a%i==0) return false;

    return true;
}

int main()
{
    int i,E,first,second,ts;
    bool prime,found;

    while(1)
    {
        cin>>E;
        if(E==0) break;
        found = false;
        if(isprime(E-2))
        {
            first = 2;
            second = E-2;
            found==true;
        }
        if(!found)
            for(int i=3; i<E; i+=2)
            {
                prime = true;
                if(i%2==0)
                {
                    prime= false;
                    break;
                }

                for(int z=3; z*z<=i; z+=2)
                    if(i%z==0)
                    {
                        prime= false;
                        break;
                    }

                if(prime)
                {
                    prime = true;
                    ts = E-i;

                    if(ts%2==0)
                    {
                        prime= false;
                        break;
                    }

                    for(int x=3; x*x<=ts; x+=2)
                        if(ts%x==0)
                        {
                            prime= false;
                            break;
                        }

                    if(prime)
                    {
                        first = i;
                        second = ts;
                        found = true;
                        break;
                    }

                }

            }
        found ? cout<<E<<" = "<<first<<" + "<<second<<endl : cout<<"Goldbach's conjecture is wrong."<<endl;
        }

    return 0;
}
