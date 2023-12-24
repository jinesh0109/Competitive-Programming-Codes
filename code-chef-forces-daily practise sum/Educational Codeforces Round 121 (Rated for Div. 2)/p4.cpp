#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll solve(ll num)
{
    if(num==1)
        return 1;

    ll ans=1,c=1,i;
    for(i=1;i<=19;i++)
    {

        if(num>=ans && num<ans*2)
        {
            break;
        }
        c++;
        ans=ans*2;

    }
    return c;
}
ll diff(ll c)
{
    if(c==0)
        return 1;
    if(c==1 || c%2==0)
        return 0;
    ll ans=1;
    ll ans1;
    while(ans<=2*100000)
    {
        ans=ans*2;
        if(c>ans && c<ans*2)
        {
            ans1=ans*2-c;
            break;
        }
    }
    return ans1;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j;
        cin>>n;
        ll arr[n];
        ll arr1[20]={0};
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            ll c=solve(arr[i]);
            arr1[c]+=1;

        }
        for(i=0;i<20;i++)
        {
            cout<<arr1[i]<<" ";
        }
        cout<<"\n";

        ll fSum[20]={0},rSum[20]={0};
        fSum[0]=arr1[0];
        rSum[19]=arr1[19];
        for(i=1;i<20;i++)
        {
            fSum[i]=fSum[i-1]+arr1[i];
        }
        for(i=18;i>=0;i--)
        {
            rSum[i]=rSum[i+1]+arr1[i];
        }
        for(i=0;i<20;i++)
        {
            cout<<fSum[i]<<" ";
        }
        cout<<"\n";
        for(i=0;i<20;i++)
        {
            cout<<rSum[i]<<" ";
        }
        cout<<"\n";
        ll ans=INT_MAX;
        ll sum=1,sum1=1;
        for(i=0;i<20;i++)
        {
            for(j=i+1;j<19;j++)
            {
                ll c,c1,c2;
                c=fSum[i];
                c1=fSum[j]-fSum[i];
                c2=rSum[j+1];
                if(i==1)
                {
                    cout<<c<<" "<<c1<<" "<<c2<<endl;
                    cout<<diff(c)<<" "<<diff(c1)<<" "<<diff(c2)<<endl;
                }

                ll ans11=diff(c)+diff(c1)+diff(c2);

                ans=min(ans,ans11);
            }
        }
        cout<<ans<<endl;
    }
}
