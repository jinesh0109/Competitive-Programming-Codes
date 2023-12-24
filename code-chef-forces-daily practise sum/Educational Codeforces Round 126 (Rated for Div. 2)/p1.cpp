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
        ll arr[n],arr1[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        ll sum=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]>arr1[i])
            {
                swap(arr[i],arr1[i]);
            }
        }
        for(i=0;i<n-1;i++)
        {
            sum+=abs(arr[i]-arr[i+1]);
            sum+=abs(arr1[i]-arr1[i+1]);
        }
        cout<<sum<<endl;
    }
}
