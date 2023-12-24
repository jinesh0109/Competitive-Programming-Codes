#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,k,i;
        cin>>n>>k;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<pair<int,int > > v;
        int start=0,end1=0;
        for(i=1;i<n;i++)
        {
            if(2*arr[i]>arr[i-1])
            {
                end1=i;
            }
            else{
                if(start!=end1)
                    v.push_back(make_pair(start,end1));
                start=i;
                end1=i;
            }
        }
        if(start!=end1)
            v.push_back(make_pair(start,end1));
        ll ans=0;
        for(i=0;i<v.size();i++)
        {
            ll ans1=0;
            ll start=v[i].first,end1=v[i].second;
            // cout<<start<<" "<<end1<<endl;
            ans+=max(ans1,end1-start+1-(k+1)+1);
        }
        cout<<ans<<endl;

    }
}
