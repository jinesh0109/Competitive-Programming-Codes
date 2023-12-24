#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll t;
    cin>>t;
    for(ll tt=1;tt<=t;tt++)
    {
        ll n,m,i,j;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];

        cin>>m;
        map<ll,vector<ll>> m1;
        for(i=0;i<m;i++)
        {
            ll temp;
            cin>>temp;
            m1[temp].push_back(i);
        }
        ll sum=0;
        for(auto &x:m1)
        {
            sort(m1[x].begin(),m1[x].end());
        }



        cout<<"Case #"<<tt<<": "<<sum<<endl;


    }
}
