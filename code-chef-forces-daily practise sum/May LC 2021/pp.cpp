#include<bits/stdc++.h>
#define ll long long int
#include<vector>
using namespace std;
vector<ll>v[100001];



int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,i,j,b;
        cin>>n>>m;
        ll c=0;
        for(b=2;b<=n;b++)
        {
            ll value=m-m%b;
            if(b>m)
            {
                c+=b-1;
                continue;
            }
            if(v[value].size()==0)
            {
                v[value].push_back(1);
                for(j=2;j<=(value)/2+1;j++)
                {
                    if(value%j==0)
                    {
                        v[value].push_back(j);
                        //cout<<j<<" ";
                    }
                }
            }
            //cout<<"\n";
            vector<ll>v1=v[value];

            auto upper=lower_bound(v1.begin(),v1.end(),b);
            ll ans=upper-v1.begin();
            //cout<<"b value "<<b<<" and ans "<<ans<<" "<<endl;
            c+=ans;

        }

        cout<<c<<endl;
    }
}
