#include<bits/stdc++.h>
#include<vector>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll arr[n],c=0,c1=0;
        vector<ll>v,v1;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==1)
            {
                c1++;
                v1.push_back(arr[i]); 
            }
            else{
                 c++;   
                 v.push_back(arr[i]); 
            }
        }
        // for(i=0;i<v.size();i++)
        // {


        //     cout<<v[i]<<" ";
        // }
        // for(i=0;i<v1.size();i++)
        // {
        //     cout<<v1[i]<<" ";
        // }
        ll ans=max(c1,c);
        if(ans==c)
        {
            for(i=0;i<v.size();i++)
            {
                cout<<v[i]<<" ";
            }
            for(i=0;i<v1.size();i++)
            {
                cout<<v1[i]<<" ";
            }
            cout<<"\n";
        }
        else{
            for(i=0;i<v1.size();i++)
            {
                cout<<v1[i]<<" ";
            }
            for(i=0;i<v.size();i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<"\n";
        }
    }
}
