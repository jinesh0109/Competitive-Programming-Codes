#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        string s;
        cin>>s;
        vector<ll>v,v1;
        map<ll,ll>m;
        ll c1=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                v.push_back(arr[i]);
                c1++;
            }
            else{
                v1.push_back(arr[i]);

            }
        }
        for(i=0;i<n;i++)
        {
            m[arr[i]]=i;
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());

        for(i=0;i<v1.size();i++)
        {
            m[v1[i]]=v[i];
            m[v[i]]=v1[i];
        }
        for(i=0;i<n;i++)
        {
            cout<<
        }
    }
}
