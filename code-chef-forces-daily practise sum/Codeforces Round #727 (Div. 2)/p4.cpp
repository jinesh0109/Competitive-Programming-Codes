#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll n,i;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(i=0;i<n;i++)
    {
        ll a1,b1;
        cin>>a1>>b1;
        v.push_back({b1,a1});
    }
    sort(v.begin(),v.end());
    ll j=n-1;
    i=0;
    ll cost=0;
    while(i<=j)
    {
        ll temp=v[i].second,temp1=v[i].first;
        ll c=0;
        ll t1=v[j].second,t2=v[j].first;


        if(t1>=temp)
        {
            if(t2>=c)
            {
                cost+=2*temp;
                c+=t1;

            }
        }

    }
}
