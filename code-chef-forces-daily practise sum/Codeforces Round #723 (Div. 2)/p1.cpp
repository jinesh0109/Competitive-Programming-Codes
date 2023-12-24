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
        n=n*2;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(i=0;i<n/2;i++)
        {
            cout<<arr[i]<<" "<<arr[n-i-1]<<" ";
        }
        cout<<"\n";

    }
}

