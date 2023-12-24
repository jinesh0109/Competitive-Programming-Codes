#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
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
        vector<ll>v;
        v.push_back(arr[n-1]);
        ll j=1;
        for(i=n-2;i>=0;i--)
        {
            v.push_back(v[j-1]+arr[i]);
            j++;
        }

        for(i=0;i<q;i++)
        {
            ll temp;
            cin>>temp;

            auto it = std::lower_bound(v.begin(), v.end(),temp);
            if(it==v.end())
            {
                cout<<"-1\n";
                continue;
            }
            int ans= it-v.begin();
            cout<<ans+1<<endl;

        }
    }
}
