#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,i;
        cin>>n>>k;
        ll ans=1;
        for(i=1;i<=k;i++)
        {

            ans=ans*n;
            ans=ans%mod;
        }
        cout<<ans<<endl;
    }
}
