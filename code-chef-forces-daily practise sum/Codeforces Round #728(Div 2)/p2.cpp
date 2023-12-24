#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {

        ll n,i,j;
        cin>>n;
        ll arr[n];
        unordered_map<ll,ll>m;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]=i+1;
        }
        ll ans=0;
        for(i=3;i<2*n;i++)
        {
            for(j=1;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    if(i!=j*j)
                    {
                        ll temp=j,temp1=i/j;
                        auto it=m.find(temp);
                        auto it1=m.find(temp1);
                        if(it!=m.end() && it1!=m.end())
                        {
                            if((*it).second+(*it1).second==i)
                            {
                                ans++;
                                //cout<<i<<" "<<j<<endl;
                            }

                        }

                    }
                }

            }
        }
        cout<<ans<<endl;
    }
}
