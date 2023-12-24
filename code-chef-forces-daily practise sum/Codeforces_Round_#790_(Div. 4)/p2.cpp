#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll arr[n];
        ll min1=INT_MAX;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<min1)
                min1=arr[i];
        }
        ll ans=0;
        for(i=0;i<n;i++)
        {
            ans+=arr[i]-min1;
        }
        cout<<ans<<endl;

    }
}