#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    const unsigned int M = 1000000007;
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n],i,arr1[n];
        unsigned long long ans=1;
        arr1[0]=1;
        for(i=0;i<n;i++)cin>>arr[i];
        for(i=1;i<=n-1;i++)
        {
            ans=(ans*2)%M;
            arr1[i]=ans;
        }
        for(i=n-1;i>=0;i--)
        {
          cout<<arr1[i]<<" ";
        }
        cout<<"\n";
    }
}
