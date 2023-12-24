#include<bits/stdc++.h>
#define ll long long int
#include<vector>
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,l,r,i;
        cin>>n>>l>>r;
        vector<ll>v;
        for(i=0;i<n;i++)
        {
            ll temp;
            cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        ll ans=0;
        for(i=0;i<n;i++)
        {
            if(v[i]>=r)
                break;
            ll low=l-v[i];
            ll high=r-v[i];
            auto it=lower_bound(v.begin(),v.end(),low);
            auto it1=upper_bound(v.begin(),v.end(),high);
            it1--;
            //if(*it>=low && *it<=high && *it1<=high && *it1>=low)
                ans+=it1-it+1;
            if(v[i]>=low && v[i]<=high)
                ans--;
        }
        cout<<ans/2<<endl;

        }


    }

