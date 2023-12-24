#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        vector<ll>v;
        for(i=0;i<n;i++)
        {
            ll temp;
            cin>>temp;
            v.push_back(temp);
        }
        ll ans=v[0];
        for(i=1;i<n;i++)
        {
            ans=ans|v[i];
        }
        cout<<ans<<endl;
    }
}
