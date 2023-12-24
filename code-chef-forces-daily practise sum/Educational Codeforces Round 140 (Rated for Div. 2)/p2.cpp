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
        ll first;
        vector<ll> v(n-1);
        for(i=0;i<n;i++)
        {
            if(i==0)
                cin>>first;
            else
                cin>>v[i-1];
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            ll temp = (first+v[i]+1)/2;
            if(temp>first)
            {
                first+=(temp-first);
            }
        }
        cout<<first<<endl;
    }
}