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
        ll mx=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            mx=max(mx,arr[i]);
        }
        if(n>=4)
        {
            cout<<mx*n<<endl;
        }
        else if(n==2)
        {
            ll ans = max(arr[0]+arr[1],2*abs(arr[0]-arr[1]));
            cout<<ans<<endl;
        }
        else{
            ll a1=arr[0],a2=arr[1],a3=arr[2];
            ll ans = max(a1+a2+a3,max(3*a1,max(3*a3,max(3*abs(a1-a2),3*abs(a2-a3)))));
            cout<<ans<<endl;
        }
    }
}