#include<bits/stdc++.h>
#define ll long long int
using namespace std;
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
        ll p=n-1;
        while(p>0 && arr[p]<=arr[p-1])
        {
            p--;
        }
        while(p>0 && arr[p]>=arr[p-1])
        {
            p--;
        }
        cout<<p<<endl;
    }
}
