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
        map<ll,ll>m;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        auto it=m.begin();
        int f=1;
        while(it!=m.end())
        {
            if((*it).second>=3)
            {
                cout<<(*it).first<<endl;
                   f=0;
                break;

            }

            it++;
        }
        if(f==1)
        {
            cout<<"-1\n";
        }
    }
}

