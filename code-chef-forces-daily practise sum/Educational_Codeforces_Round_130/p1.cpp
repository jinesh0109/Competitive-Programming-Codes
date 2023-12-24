#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,m,i;
        cin>>n>>m;
        ll arr[n];
        ll sum=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        ll ans=0;
        if(sum>m)
        {
            ans=sum-m;
        }
        cout<<ans<<endl;
    }
}