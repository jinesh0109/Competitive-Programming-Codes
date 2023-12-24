#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n,q,i;
        cin>>n>>q;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        sort(arr,arr+n);
        ll pre[n];
        pre[0]=arr[n-1];
        for(i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+arr[n-i-1];
        }
        for(i=0;i<q;i++)
        {
            ll x,y;
            cin>>x>>y;
            if(x==1 && y==1)
            {
                cout<<pre[0]<<endl;
                continue;
            }
            ll ans=pre[x-1]-pre[x-y-1];
            cout<<ans<<endl;
        }
    }
}