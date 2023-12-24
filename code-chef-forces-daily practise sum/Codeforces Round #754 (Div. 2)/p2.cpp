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
        string s,s1;
        cin>>s;
        s1=s;
        sort(s1.begin(),s1.end());
        if(s1==s)
        {
            cout<<"0\n";
            continue;
        }
        ll count0=0,count1=0;
        for(i=0;i<s1.size();i++)
        {
            if(s1[i]=='1')
                count1++;
            else
                count0++;
        }
        cout<<"1\n";
        vector<ll> v;
        for(i=0;i<n;i++)
        {
            if((i+1)<=count0)
            {
                if(s[i]=='1')
                {
                    v.push_back(i+1);
                }
            }
            else if((i+1-count0)<=count1)
            {
                if(s[i]=='0')
                {
                    v.push_back(i+1);
                }
            }
        }
        cout<<v.size()<<" ";
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
}
