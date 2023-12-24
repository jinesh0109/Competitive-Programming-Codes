#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll w,h;
        cin>>w>>h;
        ll i;
        ll ans=0;
        for(i=0;i<4;i++)
        {

            ll c;
            cin>>c;
            ll arr[c];
            for(ll j=0;j<c;j++)
            {
                cin>>arr[j];
            }
            if(i==0 || i==1)
            {
                ans=max(ans,(h*(arr[c-1]-arr[0])));
            }
            else{
                ans=max(ans,(w*(arr[c-1]-arr[0])));
            }

        }
        cout<<ans<<endl;

    }
}
