#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,i;
        cin>>n>>m;
        ll sum=0;
        for(i=0;i<m;i++)
        {
            ll l,r,x;
            cin>>l>>r>>x;
            sum=(sum|x);

        }
        ll ans=1;
        for(i=1;i<=n-1;i++)
        {
            ans=(ans*2)%(1000000007);
        }
        ans=(ans*sum)%(1000000007);
        cout<<ans<<endl;
    }
}
