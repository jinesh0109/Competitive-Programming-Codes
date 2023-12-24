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
        ll ans=0;
        if(n==1)
        {
            cout<<arr[0]<<endl;
            continue;
        }
        ans+=arr[0];

        for(i=1;i<n;i++)
        {
            //cout<<arr[i]<<" ";
            ans+=abs(arr[i]-arr[i-1]);
        }
        ans+=arr[n-1];

        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                if(arr[i]>arr[i+1])
                {
                    ans-=arr[i]-arr[i+1];
                }
            }
            else if(i==n-1)
            {
                if(arr[i]>arr[i-1])
                {
                    ans-=arr[i]-arr[i-1];
                }
            }
            else{
                if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
                {
                    ans-=arr[i]-max(arr[i-1],arr[i+1]);
                }
            }
        }
        //cout<<ans<<endl;




        cout<<ans<<endl;
    }
}
