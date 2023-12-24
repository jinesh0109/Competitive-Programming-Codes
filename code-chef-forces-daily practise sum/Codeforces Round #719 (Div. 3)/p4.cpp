#include<bits/stdc++.h>
#include<map>
#include<iterator>
#define ll long long int
using namespace std;
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
            m[arr[i]-i]++;
        }
        auto it=m.begin();
        ll c=0;
        while(it!=m.end())
        {

            c+=(((*it).second)*((*it).second-1))/2;
            it++;
        }
        cout<<c<<endl;

        }
}
