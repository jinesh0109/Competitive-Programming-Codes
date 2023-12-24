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
        if(n==1)
        {
            if(arr[0]<=1)
            {
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
            continue;
        }
        sort(arr,arr+n);
        if(abs(arr[n-1]-arr[n-2])>=2)
        {
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }

    }
}
