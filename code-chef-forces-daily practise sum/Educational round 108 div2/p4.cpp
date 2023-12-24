#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,i,j;
    cin>>n;
    ll arr[n],arr1[n];
    ll ans=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
        ans+=arr[i]*arr1[i];
    }
    ll max1=ans;
    for(i=0;i<n;i++)
    {
        ll total=ans;
        ll l=i-1;
        ll r=i+1;
        while(l>=0 && r<=n-1)
        {
            total-=arr[l]*arr1[l]+arr[r]*arr1[r];
            total+=arr[l]*arr1[r]+arr[r]*arr1[l];
            max1=max(max1,total);
            l--;
            r++;
        }
    }
    for(i=0;i<n;i++)
    {
        ll total=ans;
        ll l=i;
        ll r=i+1;
        while(l>=0 && r<=n-1)
        {
            total-=arr[l]*arr1[l]+arr[r]*arr1[r];
            total+=arr[l]*arr1[r]+arr[r]*arr1[l];
            max1=max(max1,total);
            l--;
            r++;
        }
    }
    cout<<max1<<endl;



}
