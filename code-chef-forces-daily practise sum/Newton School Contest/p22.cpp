#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,i;
    cin>>n;
    ll arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll diff=0;
    vector<ll>v;
    for(i=0;i<n/2;i++)
    {
        v.push_back(arr[i]+arr[n-1-i]);
    }
    ll max1=0,min1=1000000000;
    for(i=0;i<v.size();i++)
    {
        if(v[i]>max1)
        {
            max1=v[i];
        }
        if(v[i]<min1)
        {
            min1=v[i];
        }

    }
    cout<<max1-min1<<endl;
}
