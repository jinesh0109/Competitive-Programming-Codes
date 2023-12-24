#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#include<map>
#include<iterator>
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll arr[n];
        map<ll,ll>m;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        auto it=m.begin();
        ll ans=0;
        while(it!=m.end())
        {
            if((*it).second>(*it).first)
            {
                ll sum=((*it).second)/((*it).first);
                ans+=sum;
                (*it).second=((*it).second)%((*it).first);
            }
            it++;
        }
        it=m.begin();
        ll temp=0;
        while(it!=m.end())
        {
            temp+=(*it).second;
            if(temp>=(*it).first)
            {
                ans+=1;
                temp=temp-(*it).first;
            }
            it++;
        }
        cout<<ans<<endl;


    }
}
