#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    for(ll tt=1;tt<=t;tt++)
    {
        ll n,m,k,i;
        cin>>n>>m>>k;
        set<ll> s;
        for(i=0;i<m;i++)
        {
            ll t1,t2;
            cin>>t1>>t2;
            s.insert(t2);
        }
        cout<<"Case #"<<tt<<": "<<s.size()<<endl;
    }
}
