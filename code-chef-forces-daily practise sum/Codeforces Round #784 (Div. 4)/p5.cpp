#include<bits/stdc++.h>
#include<iostream>

using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        map<string,ll>mm;
        map<char,ll>m1,m2;
        for(i=0;i<n;i++)
        {
            string s;
            cin>>s;
            mm[s]++;
            m1[s[0]]++;
            m2[s[1]]++;
        }
        ll c1=0;
        for(auto x : mm)
        {
            c1-=(x.second*(x.second-1));

        }
        for(auto x : m1)
        {
            c1+=(x.second*(x.second-1))/2;

        }
        for(auto x : m2)
        {
            c1+=(x.second*(x.second-1))/2;

        }

        cout<<c1<<endl;
    }
}





