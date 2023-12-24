#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll t;
    cin>>t;
    for(ll tt=1;tt<=t;tt++)
    {
        ll n,i,j;
        cin>>n;
        ll arr[n];
        ll pre[n+1]={0},suf[n+1]={0};
        pre[0]=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            pre[i+1]=pre[i]+arr[i];
        }
        ll m;
        cin>>m;
        ll arr1[m];
        ll pre1[m+1]={0};
        ll suf1[m+1]={0};
        pre1[0]=0;
        for(i=0;i<m;i++)
        {
            cin>>arr1[i];
            pre1[i+1]=pre1[i]+arr1[i];
        }
        ll k;
        cin>>k;
        suf[0]=0;
        int c=1;
        for(i=n-1;i>=0;i--)
        {
            suf[c]=suf[c-1]+arr[i];
            c++;
        }
        suf1[0]=0;
        c=1;
        for(i=m-1;i>=0;i--)
        {
            suf1[c]=suf1[c-1]+arr1[i];
            c++;
        }
        ll ans=0;
        for(i=0;i<k+1;i++)
        {
            if(i>n)
                continue;
            ll ans1=0;
            for(j=0;j<i+1;j++)
            {
                ans1=max(ans1,pre[j]+pre[n]-pre[n-i+j]);
            }
            ll k1=k-i;
            if(k1>m)
                continue;
            ll ans2=0;
            for(j=0;j<k1+1;j++)
                ans2=max(ans2,pre1[j]+pre1[m]-pre1[m-k1+j]);
            ans=max(ans,ans1+ans2);
        }
        cout<<"Case #"<<tt<<": "<<ans<<endl;

    }
}
