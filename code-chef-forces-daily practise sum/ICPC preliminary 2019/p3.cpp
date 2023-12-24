#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        map<int,vector<pair<int,int>>>m;
        for(i=0;i<n;i++)
        {
            int l,r,v;
            cin>>l>>r>>v;
            m[v].push_back({l,r});
        }
        auto it=m.begin();
        int f=1;
        while(it!=m.end())
        {
            vector<pair<int,int>>v1=(*it).second;
            int n1=v1.size();
            int l1[n1],r1[n1];
            for(i=0;i<n1;i++)
            {
                l1[i]=v1[i].first;
                r1[i]=v1[i].second;
            }
            sort(l1,l1+n1);
            sort(r1,r1+n1);
            int p1=0,p2=0,ans=0;
            while(p1<n1 && p2<n1)
            {
                if(l1[p1]<=r1[p2])
                {
                    p1++;
                    ans++;
                }
                else{
                    ans--;
                    p2++;
                }
                if(ans>=3)
                {
                    f=0;
                    break;
                }

            }
            if(f==0)
                break;
            it++;
        }
        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
