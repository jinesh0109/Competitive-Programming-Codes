#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,q,i;
    cin>>n>>q;
    string s;
    cin>>s;
    ll arr[n+1];
    arr[0]=0;
    ll sum=0;
    for(i=0;i<n;i++)
    {
        ll ans=s[i]-97+1;
        sum+=ans;
        arr[i+1]=sum;
    }
    for(i=0;i<q;i++)
    {
        ll l,r;
        cin>>l>>r;
        ll ans1=arr[r]-arr[l-1];
        cout<<ans1<<endl;
    }

}
