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
        sort(arr,arr+n);
        ll sum1=arr[0]*arr[1]*arr[n-1]*arr[n-2]*arr[n-3];
        ll sum2=arr[0]*arr[1]*arr[2]*arr[3]*arr[n-1];
        ll sum3=arr[n-1]*arr[n-2]*arr[n-3]*arr[n-4]*arr[n-5];
        ll ans=max(sum1,max(sum2,sum3));
        cout<<ans<<endl;
    
    }
}