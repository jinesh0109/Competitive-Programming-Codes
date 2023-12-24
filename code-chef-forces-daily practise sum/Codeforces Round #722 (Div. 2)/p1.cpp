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
        ll arr[n],min1=1000000;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<min1)
            {
                min1=arr[i];
            }

        }
        ll c=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]==min1)
                c++;
        }
        cout<<n-c<<endl;
    }
}
