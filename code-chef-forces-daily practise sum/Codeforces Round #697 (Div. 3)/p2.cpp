#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll d=n/2020;
        ll re=n%2020;
        if(d*2020 + re == n)
        {
            if(d>=re)
            {
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            cout<<"NO\n";
        }
    }
}
