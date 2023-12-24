#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#include<set>
#include<map>

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;

        ll l[n],r[n],c[n];

        map<ll,ll>m;
        map<ll,set<ll>>m1;

        set<ll>s;
        map<pair<ll,ll>,ll>m2;



        for(i=0;i<n;i++)
        {
            cin>>l[i]>>r[i]>>c[i];
        }
        s.insert(l[0]);
        s.insert(r[0]);

        m[l[0]]=c[0];
        m[r[0]]=c[0];

        m1[l[0]].insert(r[0]);

        m2[make_pair(l[0],r[0])]=c[0];

        cout<<c[0]<<endl;
        for(i=1;i<n;i++)
        {
            s.insert(l[i]);
            s.insert(r[i]);
            if(m.find(l[i])!=m.end())
            {
                m[l[i]]=min(m[l[i]],c[i]);
            }
            else
            {
                m[l[i]]=c[i];
            }

            if(m2.find(make_pair(l[i],r[i]))!=m2.end())
            {
                m2[make_pair(l[i],r[i])]=min(c[i],m2[make_pair(l[i],r[i])]);
            }
            else
            {
                m2[make_pair(l[i],r[i])]=c[i];
            }

            m1[l[i]].insert(r[i]);

            if(m.find(r[i])!=m.end())
            {
                m[r[i]]=min(m[r[i]],c[i]);
            }
            else
            {
                m[r[i]]=c[i];
            }


            auto it=s.end();
            it--;
            auto it1=s.begin();
            //ll ans1=*s.begin();
            ll ans1=(*it1);
            ll ans2=(*it);


            if(m1[ans1].find(ans2)!=m1[ans1].end())
            {
                cout<<min(m2[make_pair(ans1,ans2)],m[ans1]+m[ans2])<<endl;
            }
            else
            {
                cout<<m[ans1]+m[ans2]<<endl;

            }

        }
   }
}
