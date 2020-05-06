#include<bits/stdc++.h>
using namespace std;
void grades(int number)
{
    number>=90 ? cout<<"A" : number>=80 ? cout<<"B" : number>=70 ? cout<<"C" : number>=60 ? cout<<"D" : cout<<"F";
    cout<<"\n";
}
int besttwo(int c1, int c2,int c3)
{
    int arr[3] = {c1, c2, c3};
    sort(arr, arr+3);
    return (arr[1]+arr[2])/2;
}
int calculation(int t1, int t2, int f, int a, int c1, int c2, int c3)
{
    return t1+t2+f+a+besttwo(c1, c2, c3);
}
int main()
{
    int test, t1, t2, f, a, c1, c2, c3;
    cin>>test;
    for(int i=1; i<=test; i++)
    {
        cin>>t1>>t2>>f>>a>>c1>>c2>>c3;
        cout<<"Case " << i << ": ";
        grades(calculation(t1, t2, f, a, c1, c2, c3));
    }
    return 0;
}
