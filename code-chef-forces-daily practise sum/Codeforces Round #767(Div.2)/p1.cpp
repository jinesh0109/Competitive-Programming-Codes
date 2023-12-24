#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,i;
        cin>>n>>k;
        vector<pair<ll,ll>> v;
        ll arr[n],arr1[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        for(i=0;i<n;i++)
        {
            v.push_back(make_pair(arr[i],arr1[i]));
        }
        sort(v.begin(),v.end());
        ll sum=0,ans=k;
        for(i=0;i<n;i++)
        {

            if(ans>=v[i].first)
            {
                ans+=v[i].second;
            }
            else{
                break;
            }
        }
        cout<<ans<<endl;
    }
}
