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
        ll mn=0,mx=1e9;
        for(i=0;i<n-1;i++)
        {
            ll t1=arr[i];
            ll t2 = arr[i+1];
            if(t1<t2)
            {
                mx=min(mx,(t1+t2)/2);
            }
            if(t1>t2){
                mn=max(mn,(t1+t2+1)/2);
            }
        }
        if(mn<=mx)
        {
            cout<<mn<<endl;
        }
        else{
            cout<<"-1\n";
        }
    }
}