#include<bits/stdc++.h>
using namespace std;
#include<map>
#include<vector>
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j;
        cin>>n;
        ll arr[n][5];
        vector<vector<pair<ll,ll>>>v;
        for(i=0;i<n;i++)
        {
            for(j=0;j<5;j++)
            {
                cin>>arr[i][j];
              //  v[j].push_back(make_pair(arr[i][j],i+1));
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<5;j++)
            {
               cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }

        vector<pair<ll,ll>>vp;
        for(i=0;i<5;i++)
        {
            for(j=0;j<n;j++)
            {
                vp.push_back(make_pair(arr[i][j],j+1));
                cout<<vp[j].first<<" "<<vp[j].second<<endl;
            }

            for(j=0;j<n;j++)
            {
                //vp[j].first<<" "<<vp[j].second<endl;
            }

            v.push_back(vp);
            vp.clear();
        }
        cout<<v.size()<<endl;
        for(i=0;i<5;i++)
        {
            for(j=0;j<n;j++)
            {

                cout<<v[i][j].first<<" "<<v[i][j].second<<" ";
            }
            cout<<"\n";

        }
        for(i=0;i<5;i++)
        {
            sort(v[i].begin(),v[i].end());
        }
        map<ll,ll>m;
        for(i=0;i<5;i++)
        {
            ll temp=v[i][0].second;
            m[temp]++;
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
            cout<<"-1\n";
    }
}
