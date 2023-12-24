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
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        map<ll,ll>m;
        m[arr[0]]=1;
        ll diff=0;
        int f=1;
        for(i=1;i<n;i++)
        {
            if(m[arr[i]]==0)
            {
                m[arr[i]]=i+1;
            }
            else{
                diff=max(diff,n-(i+1-m[arr[i]]));
                m[arr[i]]=i+1;
                f=0;

            }
        }
        if(f==1)
        {
            cout<<"-1\n";
        }
        else{
            cout<<diff<<endl;
        }

    }

}

