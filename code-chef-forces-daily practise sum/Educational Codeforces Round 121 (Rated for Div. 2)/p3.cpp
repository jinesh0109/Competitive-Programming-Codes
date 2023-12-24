#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll k[n];
        for(i=0;i<n;i++)
        {
            cin>>k[i];
        }
        ll h[n];
        for(i=0;i<n;i++)
        {
            cin>>h[i];
        }


        vector<pair<ll,ll>> v;
        ll high=k[n-1],low=k[n-1]-h[n-1]+1;


        int flag=1;
        for(i=n-2;i>=0;i--)
        {

            if(k[i]<(low))
            {
                v.push_back(make_pair(low,high));
                low=k[i]-h[i]+1;
                high=k[i];
                if(i==0)
                {
                        v.push_back(make_pair(low,high));
                }
                flag=0;

            }
            else{
                flag=1;
                ll temp=k[i]-h[i]+1;
                if(temp>=low)
                {
                }
                else{
                    low=temp;
                }
            }
        }
        if(flag==1)
        {
            v.push_back(make_pair(low,high));
        }
        ll sum=0;
        for(i=0;i<v.size();i++)
        {
            ll n1=(v[i].second-v[i].first+1);
            //cout<<v[i].first<<" "<<v[i].second<<endl;
            sum+=n1*(n1+1)/2;
        }
        cout<<sum<<endl;

    }
}
