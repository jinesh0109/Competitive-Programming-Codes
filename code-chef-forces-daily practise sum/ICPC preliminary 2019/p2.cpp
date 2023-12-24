#include<bits/stdc++.h>
using namespace std;
#include <utility>
#define ll long long int
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;

        pair <ll,ll>p1;
        p1=make_pair(0,0);
        map<string,pair<ll,ll>>m1;
        for(i=0;i<n;i++)
        {
            string s;
            bool ans;
            cin>>s>>ans;
            if(m1[s]==p1)
            {
                if(ans==true)
                {
                    m1[s].first=0;
                    m1[s].second=1;
                }
                else{
                    m1[s].first=1;
                    m1[s].second=0;
                }
            }
            else{
                if(ans==true)
                {
                    m1[s].second++;
                }
                else{
                    m1[s].first++;
                }
            }


        }
        auto it=m1.begin();
        ll c=0;
        while(it!=m1.end())
        {
            ll c1=max((*it).second.first,(*it).second.second);
            c+=c1;
            it++;
        }
        m1.clear();
        cout<<c<<endl;

    }
}
