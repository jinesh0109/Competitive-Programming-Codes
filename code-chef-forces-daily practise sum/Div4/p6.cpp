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
        vector<ll> v;
        vector<vector<ll>> v1;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<(i+1))
            {
                v.push_back(arr[i]);
                vector<ll> v2;
                v2.push_back(arr[i]);
                v2.push_back(i+1);
                v1.push_back(v2);
                v2.clear();

            }
       }
        sort(v.begin(),v.end());
        ll c=0;
        for(i=0;i<v1.size();i++)
        {
            ll temp=v1[i][1];
            auto it=upper_bound(v.begin(),v.end(),temp);
            if(it!=v.end())
            {
                ll c1=(it-v.begin());
                c+=v.size()-(c1);
            }


        }
        cout<<c<<endl;
    }
}

