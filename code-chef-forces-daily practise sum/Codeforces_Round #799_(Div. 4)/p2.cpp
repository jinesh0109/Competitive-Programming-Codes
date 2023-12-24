#include<bits/stdc++.h>
#include<string>
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
        ll arr[n];
        map<ll,ll>m;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        auto it=m.begin();
        ll c=0,c1=0;
        while(it!=m.end())
        {
            if((((*it).second)%2)==1)
            {
                c++;
            }
            else{
                c1++;
            }
            it++;
        }
        if(c1%2==1)
        {

            c1=c1-1;
        }
        cout<<c+c1<<endl;
    }
}
