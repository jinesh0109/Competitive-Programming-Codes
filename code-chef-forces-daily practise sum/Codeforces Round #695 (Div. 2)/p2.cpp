#include<bits/stdc++.h>
#include<vector>
#define ll long long int
using namespace std;
int N=3e5;
vector<ll>v;
ll n;

isHill(int i)
{
    return (i > 0 && i < n - 1 && v[i]>v[i-1] && v[i]>v[i+1]);
}
isValley(int i)
{
    return (i > 0 && i < n - 1 && v[i]<v[i-1] && v[i]<v[i+1]);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        v.clear();
        ll i;
        cin>>n;
        for(i=0;i<n;i++)
        {
            ll temp;
            cin>>temp;
            v.push_back(temp);
        }
        ll sum1=0,arr[n]={};
        for(i=1;i<n-1;i++)
        {
            if(isHill(i) || isValley(i))
            {
                sum1++;
                arr[i]=1;
            }
        }
        //cout<<sum1<<endl;
        ll ans=sum1;
        for(i=1;i<n-1;i++)
        {
            ll temp1=v[i];
            v[i]=v[i-1];
            ans=min(ans,sum1-arr[i]-arr[i-1]-arr[i+1]+isHill(i)+isValley(i)+isHill(i+1)+isValley(i+1)+isHill(i-1)+isValley(i-1));
            v[i]=v[i+1];
            ans=min(ans,sum1-arr[i]-arr[i-1]-arr[i+1]+isHill(i)+isValley(i)+isHill(i+1)+isValley(i+1)+isHill(i-1)+isValley(i-1));
            v[i]=temp1;
        }
        cout<<ans<<endl;
    }

}
