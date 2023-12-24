#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,q,i;
    cin>>n>>q;
    ll arr[n+1];
    map<ll,ll>m;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
        auto it=m.find(arr[i]);
        if(it==m.end())
        {
            m[arr[i]]=i;
        }
    }
    //for(auto x:m)
    //{
    //    cout<<x.first<<" "<<x.second<<endl;
    //}
    ll arr1[q];
    for(i=0;i<q;i++)
    {
        ll temp;
        cin>>temp;
        ll ind=m[temp];
        arr1[i]=ind;
        //cout<<ind<<" ";
        for(auto x:m)
        {
            if(x.second<ind)
            {
                m[x.first]++;
            }
            else if(x.second==ind)
            {
                m[x.first]=1;
            }
        }
    }
    for(i=0;i<q;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<"\n";




}
