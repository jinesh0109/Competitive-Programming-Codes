#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,q,k,i;
    cin>>n>>q>>k;
    ll arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll arr1[n];
    arr1[0]=arr[1]-1-1;
    for(i=1;i<n-1;i++)
    {
        arr1[i]=arr[i+1]-arr[i-1]-1-1;
    }
    arr1[n-1]=k-arr[n-2]-1;
    ll sum=0;
    ll c[n];
    for(i=0;i<n;i++)
    {
        sum+=arr1[i];
        c[i]=sum;
    }

    for(i=0;i<q;i++)
    {
        ll l,r;
        cin>>l>>r;
        if(l==r)
        {
            cout<<k-1<<endl;
        }
        else if(l==1 && r==n)
        {
            cout<<c[n-1]<<endl;
        }
        else if(l>1 && r==n)
        {
            cout<<c[n-1]-c[l-2]+arr[l-2]<<endl;
        }
        else if(l==1 && r<n)
        {
            cout<<c[r-1]+k-arr[r]+1<<endl;
        }
        else
        {
            cout<<c[r-1]+k-arr[r]+1-c[l-2]+arr[l-2]<<endl;
        }
    }
}
