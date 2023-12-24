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
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll sum=0;
        ll ans=0;
        for(i=1;i<n;i++)
        {
            arr[i]=arr[i]-sum;
            if(arr[i]>arr[i-1])
            {
                ll temp=arr[i]-arr[i-1];
                arr[i]-=temp;
                sum+=temp;
                ans+=temp;
            }
        }
        ll ans1=arr[n-1];
        sum=0;
        for(i=n-2;i>=0;i--)
        {
            arr[i]=arr[i]-sum;
            if(arr[i]>ans1)
            {
                ll temp=arr[i]-ans1;
                arr[i]-=temp;
                sum+=temp;
                ans+=temp;
            }
        }
        ans+=abs(arr[0]);
        cout<<ans<<endl;
    }
}
