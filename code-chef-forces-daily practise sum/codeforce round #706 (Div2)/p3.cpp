#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(n%2==0)
        {
            ll n1=n/2;
            if(n1%2==1)
            {
                cout<<(n/2)-1<<" "<<(n/2)-1<<" "<<n-(2*(n/2-1))<<endl;
            }
            else{
                ll n1=n/2;
                cout<<n1<<" "<<n1/2<<" "<<n1/2<<endl;
            }
        }
        else{
            ll n1=n/2;
            cout<<n1<<" "<<n1<<" "<<n-2*n1<<endl;
        }

    }
}
