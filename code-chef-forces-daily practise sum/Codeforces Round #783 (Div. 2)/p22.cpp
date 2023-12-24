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
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n);
        ll la=0;
        ll f=1;
        for(i=0;i<n-1;i++)
        {
            ll x=max(la+arr[i]+1,la+arr[i+1]+1);
            la=x;
            if(x>=m)
            {
                f=0;
                break;
            }
            if(m-x<=arr[0]||m-x<=arr[i])
            {
                f=0;
                break;
            }
        }
        if(m-la<=arr[0]||m-la<=arr[n-1])
        {
            f=0;
        }
        if(f==1)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
